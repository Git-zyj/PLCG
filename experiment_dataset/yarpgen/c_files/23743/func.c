/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23743
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 = ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), (var_13)))) ? ((+(((((/* implicit */int) var_9)) / (((/* implicit */int) var_10)))))) : (((/* implicit */int) var_0)));
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_10))))))), ((_Bool)0))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 4; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) max((((min((((/* implicit */unsigned int) var_3)), (arr_0 [i_0 - 4]))) % (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0]))))))), (((/* implicit */unsigned int) arr_2 [i_0]))));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) arr_1 [i_0]))));
    }
    for (signed char i_1 = 4; i_1 < 18; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_18 += ((/* implicit */_Bool) ((((/* implicit */int) ((var_6) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62172)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (arr_3 [i_1]))))))) * (((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned short) arr_10 [i_1] [i_1] [2] [i_1 + 3])))))) & (arr_5 [i_1 - 1] [i_1 - 3])))));
                        var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_6 [i_4 + 1])) ? (((/* implicit */int) arr_6 [i_4 + 1])) : (((/* implicit */int) arr_6 [i_4 + 1])))), (((/* implicit */int) min((arr_6 [i_4 + 2]), (arr_6 [i_4 - 2]))))));
                        var_21 = arr_7 [i_3] [i_4 - 1];
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_5 = 3; i_5 < 20; i_5 += 2) 
            {
                var_22 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) * ((~(((/* implicit */int) arr_2 [i_1 - 4]))))));
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_15 [i_1] [i_1 - 4] [(signed char)11] = min(((~(((4095) << (((((/* implicit */int) (unsigned short)4256)) - (4245))))))), (((/* implicit */int) var_8)));
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        var_23 = ((/* implicit */short) var_11);
                        var_24 = ((/* implicit */_Bool) min((min(((unsigned short)4256), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_7]))) >= (arr_4 [i_1])))))), (((/* implicit */unsigned short) (_Bool)1))));
                        var_25 = ((/* implicit */long long int) max((arr_7 [i_5] [i_2]), (max((((((/* implicit */_Bool) var_3)) ? (arr_7 [i_6] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) max((((/* implicit */int) var_13)), (var_7))))))));
                    }
                    for (short i_8 = 4; i_8 < 19; i_8 += 4) 
                    {
                        var_26 = ((/* implicit */short) arr_3 [i_6]);
                        var_27 = ((/* implicit */int) (+(var_12)));
                        var_28 = (((((+(2727602020U))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))))) || (((/* implicit */_Bool) var_8)));
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_1 + 1])), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_5 [i_1] [i_1])))))) ? (max((((arr_1 [i_8 - 3]) / (((/* implicit */long long int) 1567365273U)))), (((/* implicit */long long int) max((var_11), (var_6)))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                        var_30 = ((/* implicit */long long int) arr_4 [i_5 - 1]);
                    }
                    var_31 &= ((/* implicit */unsigned long long int) (((_Bool)1) ? (-4096) : (((/* implicit */int) (_Bool)1))));
                }
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    arr_25 [i_1] [(short)16] [(unsigned short)10] [(unsigned short)10] = ((/* implicit */unsigned short) arr_16 [i_1 - 1] [i_1 + 1] [i_1]);
                    var_32 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_6 [i_1 - 3]))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_0)), (-1891270974)))) : (arr_16 [i_5 - 2] [i_1 - 1] [i_1 - 1]))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1536)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) - (((/* implicit */int) (unsigned short)64000))))) : (((var_6) ? (arr_7 [(unsigned char)17] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
                }
                var_33 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -4095)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_1 + 4])))) * (((/* implicit */int) var_4))));
                var_34 = ((/* implicit */signed char) arr_2 [i_1]);
            }
        }
        /* vectorizable */
        for (unsigned int i_10 = 1; i_10 < 20; i_10 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                var_35 = ((/* implicit */unsigned int) ((arr_16 [i_1 + 1] [i_1 - 2] [i_1 - 2]) < (arr_4 [i_1 - 2])));
                var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) var_3))));
                arr_33 [9U] [9U] [i_10] [i_11] &= ((/* implicit */_Bool) arr_26 [i_10] [(signed char)11] [i_10 + 1]);
            }
            arr_34 [i_1] = ((/* implicit */unsigned long long int) arr_20 [i_1] [i_1] [i_10 + 2] [i_10 - 1] [i_10] [i_10 + 2]);
            var_37 ^= ((/* implicit */int) ((((/* implicit */int) arr_32 [i_10])) >= (4081)));
        }
        for (unsigned int i_12 = 0; i_12 < 22; i_12 += 4) 
        {
            var_38 = var_6;
            var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-120)) ? (-2669180811501526822LL) : (((/* implicit */long long int) 1567365277U))));
        }
        var_40 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_1] [i_1 + 4] [i_1 + 4] [i_1 - 4])) ? (arr_29 [i_1 + 2] [i_1 + 3] [i_1] [18LL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_32 [(_Bool)1])) || (((/* implicit */_Bool) arr_32 [i_1 - 2])))) ? (((/* implicit */int) min((arr_10 [(unsigned short)11] [i_1 + 3] [i_1 - 3] [18LL]), (((/* implicit */short) var_3))))) : (((/* implicit */int) (signed char)-53))))) : (min((arr_27 [i_1 - 4]), (((/* implicit */long long int) (unsigned short)61279))))));
    }
    for (unsigned char i_13 = 0; i_13 < 13; i_13 += 3) /* same iter space */
    {
        var_41 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 6395064413941640259LL)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2727602031U)) ? (((/* implicit */int) (unsigned char)206)) : (4092)))), (min((13719417088143331806ULL), (((/* implicit */unsigned long long int) arr_23 [i_13] [i_13] [18]))))))));
        var_42 = ((/* implicit */long long int) arr_10 [i_13] [(unsigned char)16] [i_13] [i_13]);
        var_43 ^= ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) (_Bool)1)), (arr_21 [i_13]))), (((/* implicit */unsigned int) min((((/* implicit */int) var_3)), ((+(((/* implicit */int) var_13)))))))));
        arr_40 [i_13] = ((/* implicit */long long int) var_6);
    }
    for (unsigned char i_14 = 0; i_14 < 13; i_14 += 3) /* same iter space */
    {
        var_44 = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) == (((/* implicit */int) (unsigned char)83))));
        var_45 = ((/* implicit */unsigned int) var_10);
    }
}
