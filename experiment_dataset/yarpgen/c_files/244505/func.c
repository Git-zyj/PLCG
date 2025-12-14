/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244505
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0] [i_0]) : (var_1)))) ? (((int) var_7)) : (((/* implicit */int) var_0)))) & (((int) arr_1 [i_0 - 3] [i_0 - 1]))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-(0ULL))))));
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            var_20 = ((/* implicit */signed char) (((~(((unsigned long long int) 2764641433U)))) >> (((((/* implicit */_Bool) (+(arr_0 [i_0] [i_1])))) ? (((/* implicit */long long int) min((693603337), (((/* implicit */int) var_2))))) : ((+(arr_0 [i_0] [i_1])))))));
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */short) ((unsigned int) 0));
        }
        for (unsigned char i_2 = 2; i_2 < 9; i_2 += 2) 
        {
            var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) == (((/* implicit */int) arr_3 [i_0] [i_2 + 1])))))) < ((-((~(14191282228536859166ULL)))))));
            var_22 |= ((/* implicit */short) ((var_10) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 0ULL)))))))));
        }
    }
    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            /* LoopSeq 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_23 = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_3 - 3]))))) - (((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? ((~(arr_5 [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_17)), (var_13)))))))));
                var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [1LL] [i_4])) ? (((/* implicit */int) arr_3 [i_3] [i_4])) : (((/* implicit */int) (_Bool)1))))))))));
                arr_14 [i_4] |= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_4] [i_4]))))) < (3939820258U))))));
                var_25 = ((/* implicit */unsigned long long int) max((((unsigned int) var_6)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) || (((((/* implicit */int) var_7)) <= (((/* implicit */int) var_13)))))))));
                arr_15 [i_3] = ((((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) arr_7 [i_5] [i_4])))) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_7 [i_5] [i_3 + 1])) : (var_6))))) < (((((/* implicit */int) var_15)) | (((/* implicit */int) var_9)))));
            }
            for (unsigned short i_6 = 4; i_6 < 10; i_6 += 4) 
            {
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_17))));
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_6 - 3] [i_3 - 3])) * (((/* implicit */int) (_Bool)0))))) ? ((-(((/* implicit */int) arr_6 [i_4] [i_4])))) : (((/* implicit */int) var_2))));
            }
            for (int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                arr_23 [i_3] [(unsigned short)2] [i_3] [i_7] = ((/* implicit */unsigned long long int) var_4);
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    arr_27 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (arr_16 [9] [i_4] [i_7] [i_8 + 1]))))))) ? (((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((((/* implicit */_Bool) 984982284)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)0)))) : (-69057604))) : ((~(((/* implicit */int) var_2))))));
                    arr_28 [i_3] [i_3] [i_7] [i_3] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_17 [i_8] [i_3]), (((/* implicit */unsigned char) var_5)))))) >= (((arr_22 [i_3]) + (arr_22 [i_7])))));
                    arr_29 [i_3] [i_3] [i_3] [i_4] [(short)0] [i_8] = ((((((/* implicit */int) arr_9 [i_3 - 3] [i_8 + 1])) | (((/* implicit */int) var_13)))) ^ (((((/* implicit */int) arr_9 [i_3 - 1] [i_8 + 1])) | (-209122960))));
                    /* LoopSeq 4 */
                    for (short i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) ((var_15) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 2147483619)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) / (var_1))))) : (((/* implicit */unsigned long long int) var_4)))))));
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((var_11) % (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_22 [i_3])))))));
                    }
                    for (unsigned int i_10 = 3; i_10 < 10; i_10 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) min((max(((signed char)-94), ((signed char)-120))), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max((arr_32 [i_10] [i_8] [i_7] [i_4] [i_3]), (((/* implicit */short) arr_10 [i_3])))))) < (var_16))))));
                        arr_35 [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((unsigned int) 355147037U))) < (((unsigned long long int) (unsigned short)50505)))) ? (var_11) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)53))) | (2570122039210079188ULL)))));
                    }
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((((((/* implicit */unsigned long long int) arr_25 [i_3] [(signed char)10] [i_4] [i_11])) | (((unsigned long long int) (signed char)93)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_40 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) var_8);
                        arr_41 [i_4] [i_8] &= arr_36 [i_3] [i_4] [i_7] [i_3] [i_11];
                        arr_42 [i_3] [i_3] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) / (var_8))));
                    }
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
                    {
                        var_32 *= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (signed char)-118)), (var_11)));
                        arr_45 [i_3] [i_3] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_33 = (+(((((/* implicit */_Bool) var_14)) ? ((+(((/* implicit */int) (short)0)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_4]))) < (var_11)))))));
                    }
                }
            }
            arr_46 [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) 2524617704933602803ULL))) > ((~(((/* implicit */int) (signed char)93))))));
            var_34 = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_20 [i_3 - 1] [i_3] [i_3]))))));
            var_35 &= ((/* implicit */unsigned int) min((0ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)217))))), (var_10))))));
            var_36 *= ((/* implicit */unsigned short) (-2147483647 - 1));
        }
        arr_47 [i_3] = ((/* implicit */unsigned int) var_13);
        var_37 ^= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_3] [i_3] [i_3 + 1] [(signed char)6] [i_3 + 1]))))) << (((((((/* implicit */_Bool) ((((/* implicit */int) var_15)) << (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_13)) : ((-(((/* implicit */int) (unsigned char)63)))))) + (87)))));
        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_21 [i_3])))))));
        /* LoopSeq 1 */
        for (int i_13 = 0; i_13 < 11; i_13 += 1) 
        {
            var_39 &= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (((!(((/* implicit */_Bool) arr_20 [i_3 - 3] [(_Bool)1] [i_13])))) && (((/* implicit */_Bool) max((arr_16 [i_3] [i_3] [i_3] [i_13]), (((/* implicit */unsigned long long int) arr_34 [i_3] [i_3] [i_3] [i_3] [i_3])))))))) : (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 2 */
            for (signed char i_14 = 1; i_14 < 9; i_14 += 4) 
            {
                var_40 = (+(arr_16 [i_3] [i_13] [i_3] [i_14]));
                var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) max((((/* implicit */long long int) var_15)), (var_16))))));
                var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_5)))) | (((arr_24 [i_3] [i_13] [i_13] [i_3] [i_3]) ? (2147483647) : (((/* implicit */int) var_12))))))) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) ((var_11) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-26))) : (((((/* implicit */_Bool) arr_3 [i_3] [i_14])) ? (arr_12 [i_3] [i_3] [i_13] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
            }
            /* vectorizable */
            for (int i_15 = 3; i_15 < 9; i_15 += 1) 
            {
                arr_55 [i_3] [i_3] = ((/* implicit */unsigned int) var_2);
                var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) ((long long int) 18446744073709551587ULL)))));
            }
            arr_56 [i_3] = ((/* implicit */long long int) arr_31 [i_3 + 1] [i_3 + 1] [i_13] [i_13] [i_13] [i_3 + 1]);
            arr_57 [i_3] [i_3] = ((/* implicit */long long int) arr_26 [i_3] [i_3]);
            var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(arr_26 [i_3] [i_3])))), ((+(var_11)))))) ? (((/* implicit */int) var_12)) : ((~(var_4)))));
        }
    }
    for (short i_16 = 0; i_16 < 16; i_16 += 2) 
    {
        arr_60 [i_16] = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) 4534400497505732843ULL)))));
        var_45 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_13)))))));
        arr_61 [i_16] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_58 [i_16])) & (2147483647)));
    }
    var_46 *= ((/* implicit */unsigned int) var_0);
    var_47 = ((/* implicit */short) (~(var_11)));
}
