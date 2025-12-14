/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4310
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
    var_15 *= ((/* implicit */unsigned int) (unsigned short)30);
    var_16 = max(((unsigned short)65506), ((unsigned short)52799));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) (~(min((17634074788147840289ULL), (((/* implicit */unsigned long long int) ((_Bool) 12380901714181502826ULL)))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        {
                            var_18 *= ((/* implicit */_Bool) ((unsigned long long int) (~(arr_6 [i_2] [i_2 + 1] [i_2] [i_2] [i_2]))));
                            var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_1 [i_0] [i_4]))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)30)) + (((/* implicit */int) (unsigned short)65528)))))))) ? (min((var_6), (((/* implicit */unsigned long long int) arr_3 [i_3] [(unsigned short)2] [i_0 + 1])))) : (((unsigned long long int) min((var_0), (var_9))))));
                            var_20 -= var_8;
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_3) > (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1])))))) + (arr_9 [i_4] [i_3] [i_4] [i_4])))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) < (9223372036854775807LL)))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_4])) && (((/* implicit */_Bool) var_8)))))))))))));
                        }
                    } 
                } 
            } 
            var_22 &= ((/* implicit */unsigned short) arr_7 [i_1] [i_1] [i_0 - 1] [i_0]);
            /* LoopSeq 2 */
            for (unsigned short i_5 = 1; i_5 < 10; i_5 += 1) 
            {
                arr_12 [i_0] [i_1] [i_0] = ((arr_7 [i_5] [i_5 - 1] [i_0 - 2] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_0] [i_1]), (arr_4 [i_0] [i_1]))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    arr_17 [i_0] [i_1] [i_5] [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((_Bool) arr_8 [i_0] [i_0 + 1] [i_0] [i_1] [i_5] [i_6]));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) == ((~(((/* implicit */int) ((unsigned short) arr_0 [i_6]))))))))));
                    arr_18 [i_0] [i_1] [i_5 + 3] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_0 - 2])) ? (((var_1) ? (arr_14 [(unsigned short)1] [(unsigned short)1] [i_5] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5 + 1])))))), (min((((/* implicit */unsigned long long int) var_2)), (6065842359528048780ULL)))));
                }
            }
            for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) min((arr_4 [i_0] [i_1]), ((unsigned short)65535))))))) ? (((((((/* implicit */_Bool) arr_14 [i_0 - 2] [i_1] [i_1] [i_7])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [0ULL] [i_1] [i_7] [i_7]))))) << ((((~(var_3))) - (1863574685635136856LL))))) : (min((((/* implicit */long long int) (unsigned short)11)), (((arr_14 [i_0] [i_1] [i_7] [i_7]) & (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                var_25 = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 - 2] [i_0] [i_0])) + (((/* implicit */int) var_9))));
            }
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned short) var_1))));
                        var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_0 - 2] [i_0 - 2] [i_8] [i_9]))));
                        /* LoopSeq 3 */
                        for (unsigned short i_10 = 0; i_10 < 13; i_10 += 1) 
                        {
                            arr_29 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) max((max(((unsigned short)16143), ((unsigned short)9223))), (((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_9])) == (((/* implicit */int) var_9)))))))), (((var_14) | (((/* implicit */long long int) arr_5 [i_0] [i_0 - 2]))))));
                            var_28 = ((/* implicit */unsigned short) max((min((var_14), (((/* implicit */long long int) arr_23 [i_0])))), (((/* implicit */long long int) arr_20 [i_10] [i_9] [i_1] [i_0]))));
                            arr_30 [i_0] [i_1] [i_8] [i_8] [i_10] [i_1] [i_9] = ((/* implicit */unsigned int) var_12);
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            arr_33 [i_0] [10] = ((/* implicit */_Bool) var_3);
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned short) var_7)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_3 [i_0 - 1] [(unsigned short)10] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_8]))) : (var_3))) < (((/* implicit */long long int) ((/* implicit */int) arr_27 [4] [i_1] [i_1] [i_8] [i_1]))))))) : (max((var_6), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_13)), (arr_15 [i_11] [2LL] [i_8] [i_0])))))))))));
                            var_30 = ((/* implicit */long long int) (~(-945341727)));
                        }
                        /* vectorizable */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (unsigned short)16383))));
                            arr_37 [i_0 + 1] [i_1] [i_0] [i_1] [i_9] [(unsigned short)12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_1] [i_8] [i_9]) ^ (((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [i_1] [i_9]))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)31889)))) : (((int) var_12))));
                            arr_38 [i_0] = ((/* implicit */unsigned short) ((arr_6 [i_0] [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_9]) < (arr_6 [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_12])));
                            var_32 = ((/* implicit */unsigned short) min((var_32), (arr_28 [i_0] [i_1] [i_8] [i_8] [i_9] [i_1])));
                        }
                    }
                } 
            } 
        }
        for (long long int i_13 = 0; i_13 < 13; i_13 += 1) 
        {
            arr_43 [(unsigned short)0] [i_13] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) == (((((/* implicit */_Bool) -1987133549)) ? (((/* implicit */int) arr_23 [(unsigned short)4])) : (((/* implicit */int) (unsigned short)65535)))))))) == (max((((arr_39 [(_Bool)1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) arr_34 [0LL] [0LL] [2]))))));
            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_3) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 7064747879626672257LL))))))) ? (((/* implicit */int) arr_4 [(_Bool)1] [6])) : (min((((/* implicit */int) (unsigned short)49393)), ((-(var_4))))))))));
        }
        /* vectorizable */
        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
        {
            arr_46 [i_0] [i_14] = ((/* implicit */unsigned short) ((var_5) == (((/* implicit */unsigned long long int) ((int) arr_23 [i_0])))));
            arr_47 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_3)) & (arr_40 [i_0] [i_0])));
        }
        /* LoopNest 3 */
        for (unsigned short i_15 = 1; i_15 < 12; i_15 += 2) 
        {
            for (unsigned short i_16 = 0; i_16 < 13; i_16 += 1) 
            {
                for (unsigned long long int i_17 = 1; i_17 < 12; i_17 += 1) 
                {
                    {
                        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (!((_Bool)1))))));
                        var_35 = ((/* implicit */long long int) min((var_35), (var_14)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 23; i_18 += 4) 
    {
        var_36 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_57 [i_18] [i_18])) == (((/* implicit */int) arr_57 [i_18] [i_18]))));
        arr_59 [i_18] = ((/* implicit */unsigned long long int) arr_57 [i_18] [i_18]);
    }
}
