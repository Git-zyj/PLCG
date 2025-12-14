/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204842
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))))) != (arr_1 [i_0] [i_0])));
        var_13 = ((/* implicit */signed char) min((min(((+(var_3))), (((/* implicit */int) var_10)))), ((~(((/* implicit */int) (_Bool)1))))));
        arr_2 [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_7))))) : (arr_1 [i_0] [(_Bool)1]));
        var_14 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((((_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((+(-613241048818088455LL))))) - (164LL)))));
    }
    /* LoopSeq 3 */
    for (signed char i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 3; i_2 < 15; i_2 += 1) 
        {
            var_15 = ((/* implicit */_Bool) (+((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)133))))) : (((/* implicit */int) max(((short)-1), (((/* implicit */short) var_4)))))))));
            /* LoopSeq 3 */
            for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                arr_10 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (((arr_4 [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                arr_11 [i_1] [(unsigned short)4] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
            }
            for (unsigned int i_4 = 3; i_4 < 14; i_4 += 2) 
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_12 [i_1] [i_2 - 2] [i_2] [i_1]))))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_6)))) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
                var_17 = ((/* implicit */_Bool) arr_9 [i_1] [i_2 + 2] [i_1]);
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 613241048818088455LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_1 [i_4 - 3] [i_2 - 2])))) ? (((((/* implicit */_Bool) (unsigned short)30720)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
            }
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)23276))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_1] [i_1] [i_1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (arr_6 [(signed char)3] [(unsigned char)7] [(unsigned char)7]))) : (((/* implicit */long long int) (-(((/* implicit */int) var_10))))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_1] [i_2 - 3] [i_5] [i_5])))))));
                /* LoopSeq 1 */
                for (long long int i_6 = 2; i_6 < 13; i_6 += 2) 
                {
                    var_20 = ((/* implicit */short) var_8);
                    var_21 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_17 [i_6 + 2] [i_5] [i_2 + 1] [i_6])) || (((/* implicit */_Bool) arr_17 [i_6 - 1] [i_2] [i_2 + 1] [i_6])))));
                    var_22 = ((/* implicit */short) var_9);
                    var_23 = ((/* implicit */long long int) ((_Bool) arr_17 [i_1] [i_2] [i_2] [i_1]));
                    /* LoopSeq 3 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) min((((/* implicit */int) arr_0 [i_6 + 2] [i_2 + 1])), ((+(((var_7) ? (1172646070) : (var_3)))))));
                        var_25 = ((/* implicit */unsigned int) ((long long int) arr_17 [i_1] [i_2] [i_6 + 1] [i_1]));
                    }
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_1] [i_6 - 1] [i_2] [i_2 - 1] [(unsigned short)16] [i_5] [i_1]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((signed char) (_Bool)1)))));
                        arr_25 [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) max((((/* implicit */signed char) arr_5 [i_1])), (var_5))))));
                    }
                    for (long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        var_27 = ((/* implicit */signed char) (_Bool)1);
                        arr_28 [i_1] [i_1] [i_5] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1] [i_1])) ? (((/* implicit */int) ((-5855594953778648659LL) >= (613241048818088450LL)))) : (((/* implicit */int) var_7))))) ? ((~(((/* implicit */int) var_4)))) : (max(((-(((/* implicit */int) (signed char)-121)))), (((/* implicit */int) max((var_10), (((/* implicit */unsigned char) var_6)))))))));
                    }
                }
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    var_28 = ((_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_2))))), ((+(((/* implicit */int) (_Bool)1))))));
                    arr_31 [i_1] [i_2] [i_1] = ((/* implicit */signed char) 2280340917U);
                    arr_32 [i_1] [i_2] [i_1] = (((((_Bool)1) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) (signed char)40)))) != (((/* implicit */int) var_6)));
                }
                var_29 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned short) 3145810954U)));
                /* LoopSeq 2 */
                for (signed char i_11 = 2; i_11 < 15; i_11 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_12 = 0; i_12 < 17; i_12 += 3) 
                    {
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : ((~(((((/* implicit */_Bool) var_3)) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
                        arr_37 [i_1] [i_11] [i_5] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_36 [i_1] [i_2] [i_5] [i_2 + 2] [i_11 - 2] [i_12])) ? (2014626378U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_1] [i_2 + 1] [i_5] [i_2 + 2] [i_11 + 1] [9]))))) | (((/* implicit */unsigned int) (+(((/* implicit */int) arr_36 [i_1] [i_1] [i_1] [i_2 + 1] [i_11 - 1] [i_1])))))));
                    }
                    for (unsigned int i_13 = 2; i_13 < 16; i_13 += 1) 
                    {
                        arr_40 [i_1] [i_1] [i_1] [i_1] [i_5] [i_11] [i_13] = ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) arr_38 [i_1] [i_2 + 1] [i_5] [i_11])) || (((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (3649644511837657593ULL))) : (var_11)))));
                        var_31 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)5624)) >= (((/* implicit */int) (_Bool)1))));
                        arr_41 [i_1] [i_1] [i_5] [i_11] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_1] [i_2] [i_5] [i_11] [i_1] [i_5])) ? (((/* implicit */int) arr_16 [i_13] [i_11] [i_5] [i_1] [i_1])) : (((/* implicit */int) (signed char)-81))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)68))))) : (((/* implicit */int) (signed char)74))));
                    }
                    arr_42 [i_1] [i_2] [i_1] [i_11] [i_5] = ((/* implicit */signed char) var_3);
                }
                for (short i_14 = 0; i_14 < 17; i_14 += 4) 
                {
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_11))));
                    var_33 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 14797099561871894023ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_14] [i_5] [i_2 + 1] [i_1]))) : (1109367029U)))));
                }
            }
        }
        for (unsigned char i_15 = 0; i_15 < 17; i_15 += 2) 
        {
            arr_47 [i_1] [i_15] = ((/* implicit */_Bool) ((((((var_11) + (var_11))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_15 [i_15])) : (((/* implicit */int) min((((/* implicit */signed char) ((_Bool) (_Bool)0))), (var_1))))));
            var_34 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_22 [i_1] [(signed char)14] [i_1] [2LL] [(_Bool)1])) : (((/* implicit */int) var_2))))) ? (((((/* implicit */int) var_10)) * (((/* implicit */int) arr_45 [i_1])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))))) * (((/* implicit */int) var_2))));
            var_35 = ((/* implicit */unsigned char) 268435392);
            arr_48 [i_1] = ((/* implicit */unsigned char) (+((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) max(((_Bool)1), (arr_5 [i_1])))) : (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) var_1)))))))));
        }
        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)78)) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) var_9)))));
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [(_Bool)1] [(_Bool)1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) / (min((arr_6 [i_1] [i_1] [i_1]), (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
        arr_49 [i_1] = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))), (((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [(unsigned char)12] [i_1])))), (var_3)));
    }
    for (signed char i_16 = 0; i_16 < 17; i_16 += 1) /* same iter space */
    {
        arr_54 [i_16] = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_11)))));
        arr_55 [i_16] = ((/* implicit */unsigned short) (_Bool)1);
        arr_56 [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3649644511837657586ULL)) ? ((+(((/* implicit */int) arr_21 [i_16] [i_16] [i_16] [i_16] [(_Bool)1] [(_Bool)1] [i_16])))) : (((((((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)52)))) + (2147483647))) >> (((((/* implicit */int) (unsigned char)173)) - (166)))))));
    }
    for (signed char i_17 = 0; i_17 < 17; i_17 += 1) /* same iter space */
    {
        var_38 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (!((_Bool)1)))))) != ((-(arr_35 [i_17] [i_17] [8LL])))));
        var_39 = ((/* implicit */long long int) ((min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)239)))) << (((((/* implicit */int) max((var_9), (var_2)))) - (164)))));
    }
}
