/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48887
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_12 = ((/* implicit */short) ((unsigned int) (short)(-32767 - 1)));
                        arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) ((_Bool) arr_2 [i_1 + 1]))), (min((((((/* implicit */int) var_9)) / (((/* implicit */int) arr_4 [i_2] [i_0])))), ((~(((/* implicit */int) arr_7 [i_0] [i_1 - 1] [19]))))))));
                        var_13 = (!(((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) >= (min((var_3), (((/* implicit */long long int) arr_0 [i_0] [(_Bool)1])))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            var_14 = (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_1 [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))), (((((/* implicit */_Bool) var_6)) ? (-1334804201473726935LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [(short)6] [i_2 + 3]))) : (((((/* implicit */_Bool) arr_5 [i_2 + 3] [i_2] [i_2 + 1])) ? (arr_5 [i_2 - 1] [(signed char)3] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 - 1] [i_2 + 3] [i_3] [i_1 - 1])))))));
                            arr_13 [i_0] [i_4] [(short)16] [i_0] [i_0] [i_0] [i_0] = (_Bool)0;
                        }
                        var_16 = ((/* implicit */int) min((((/* implicit */long long int) min((((/* implicit */int) arr_3 [i_0] [i_2] [(signed char)19])), (((int) arr_1 [i_0]))))), (7865131594433357992LL)));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_1] [17LL] [17LL] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1] [i_2] [(signed char)14])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_1 - 1] [(signed char)6] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1] [i_2] [i_2 + 3] [i_5])))))));
                        var_17 = arr_11 [i_2] [10LL] [i_0];
                        var_18 = (~(min((((/* implicit */int) min((arr_0 [(_Bool)1] [(_Bool)1]), (var_9)))), (max((((/* implicit */int) (signed char)-117)), (1377094970))))));
                        /* LoopSeq 3 */
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            arr_19 [(signed char)15] [(short)7] [(short)7] [i_5] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_6]))));
                            var_19 = ((/* implicit */_Bool) (signed char)6);
                            arr_20 [i_6] [(short)9] [(_Bool)1] [i_0] [i_0] = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_1 + 1] [i_1] [i_2 + 1])) : (((/* implicit */int) arr_0 [i_1 - 1] [i_2 + 3]))))) > (7865131594433357992LL));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 1; i_7 < 19; i_7 += 1) 
                        {
                            var_20 = (short)-26832;
                            arr_24 [i_0] [i_0] [i_2] [16] [i_7 - 1] [i_7] = ((/* implicit */long long int) ((unsigned int) arr_4 [i_0] [(signed char)21]));
                            arr_25 [i_7] [i_1 + 1] [i_7] [(short)8] [i_1 + 1] [i_7 + 2] = ((/* implicit */short) (~(((/* implicit */int) (short)-24147))));
                        }
                        for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            var_21 = arr_26 [i_8] [i_8];
                            arr_28 [i_0] [i_1] [i_8] [i_8] = ((/* implicit */short) ((((unsigned int) var_4)) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1))))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_2 + 2])) : (var_2)))) ? (((/* implicit */int) min((arr_9 [i_1] [i_1 + 1] [i_1 - 1] [i_2] [i_2]), (arr_9 [i_0] [i_1 + 1] [i_1 + 1] [i_2] [i_2])))) : (((/* implicit */int) (short)-9065))));
                            var_23 = ((/* implicit */short) var_3);
                        }
                    }
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [(signed char)8] [(signed char)8])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_0))))))))));
                }
            } 
        } 
        arr_29 [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_30 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)27482)) ? (-7865131594433357986LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-128)))));
    }
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        arr_33 [i_9] = ((/* implicit */short) min((((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_9))))), (max((arr_0 [i_9] [i_9]), (((/* implicit */short) var_0))))))), (min((((((/* implicit */int) (signed char)116)) % (((/* implicit */int) arr_14 [i_9 - 1] [i_9] [i_9 - 1] [i_9 - 1] [i_9])))), (((((/* implicit */_Bool) -7865131594433358010LL)) ? (((/* implicit */int) arr_14 [i_9 - 1] [i_9] [i_9 - 1] [i_9] [i_9])) : (((/* implicit */int) arr_14 [i_9] [i_9] [i_9 - 1] [i_9] [i_9 - 1]))))))));
        arr_34 [i_9] [2] = ((/* implicit */short) arr_1 [i_9]);
    }
    for (int i_10 = 3; i_10 < 21; i_10 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_11 = 3; i_11 < 22; i_11 += 4) 
        {
            for (unsigned int i_12 = 3; i_12 < 22; i_12 += 4) 
            {
                {
                    var_25 = ((/* implicit */long long int) max(((~(((/* implicit */int) arr_40 [i_10] [i_10] [i_10])))), (((/* implicit */int) min((var_4), (((/* implicit */short) arr_35 [i_10 + 1] [i_10 + 2])))))));
                    var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)19216))));
                }
            } 
        } 
        arr_42 [i_10] [i_10] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_10] [i_10]))))), ((~(((/* implicit */int) ((((/* implicit */int) var_7)) == (var_10))))))));
        var_27 = min((((((((/* implicit */int) (short)-111)) + (2147483647))) >> (((/* implicit */int) arr_38 [i_10 + 3] [i_10 - 1] [(signed char)8])))), (((/* implicit */int) (!(((((/* implicit */int) (short)-16093)) == (((/* implicit */int) var_1))))))));
    }
    var_28 = ((/* implicit */signed char) var_11);
}
