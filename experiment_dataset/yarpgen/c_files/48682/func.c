/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48682
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_1] |= ((/* implicit */int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [(_Bool)1] [(_Bool)1])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) arr_4 [(_Bool)1])))))))));
                    arr_9 [i_0] [i_1 + 1] [i_2] [i_0 + 1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_2 [i_1 + 1] [i_1 + 1] [i_0 - 1])), (((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1] [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_16)))));
                    /* LoopSeq 2 */
                    for (int i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        arr_12 [(unsigned char)13] [i_1] [(unsigned char)13] [(unsigned char)15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (max((arr_0 [i_3 - 3]), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3 - 1] [i_1] [i_2]))))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (11052108439605690132ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 2] [i_1 + 1] [i_2] [i_3 - 2])))))) != (((/* implicit */int) var_8))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        arr_16 [i_0 + 1] [i_1] [i_2] [i_4] = ((/* implicit */unsigned long long int) arr_4 [i_0 + 2]);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            arr_20 [3] = ((((/* implicit */_Bool) arr_17 [(signed char)14] [i_4] [i_2] [i_1] [i_0 - 1])) ? (((/* implicit */int) ((signed char) (unsigned short)16045))) : (((/* implicit */int) arr_1 [i_0] [i_0])));
                            arr_21 [i_0 - 1] [i_1] [i_1] [i_4] [i_5] [i_5] = ((/* implicit */_Bool) var_4);
                            arr_22 [i_5] [i_1] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_6 [i_0 - 2] [i_1] [i_2] [i_1 + 1]);
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            arr_26 [i_6 + 1] [i_6] [i_2] [i_6] [i_0] = ((/* implicit */int) 7394635634103861507ULL);
                            arr_27 [i_0] [i_1] [(_Bool)1] [i_6] [i_6] = ((/* implicit */unsigned int) (~(7394635634103861483ULL)));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            arr_30 [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) arr_11 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_1 + 1] [i_0 + 1]));
                            arr_31 [i_0] [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0] [i_0] = arr_28 [i_0 - 2] [i_2] [i_2] [i_4] [i_7] [i_2] [i_7];
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 3; i_8 < 22; i_8 += 1) 
                        {
                            arr_34 [i_0] [i_1 + 1] [i_2] [i_4] [i_8] [i_4] = (((!(((/* implicit */_Bool) arr_15 [i_1 + 1])))) ? (arr_10 [(signed char)7] [i_1 + 1] [i_4] [i_8 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2] [i_1 + 1]))));
                            arr_35 [i_8 + 1] [i_4] [i_4] [i_1 + 1] [i_1 + 1] [i_0 - 2] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_1 + 1] [i_0 - 1])) > (((/* implicit */int) arr_1 [i_1 + 1] [i_0 + 2]))));
                        }
                        arr_36 [i_4] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_19 [i_1 + 1] [i_1] [i_1 + 1] [i_0 - 1] [i_0]), (((/* implicit */int) arr_25 [i_2] [i_1 + 1] [i_0 + 1] [i_0] [i_0 - 2] [i_0]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(var_7)))), (((((/* implicit */_Bool) var_15)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 1] [i_1 + 1] [i_2] [i_4])))))))) : (((arr_17 [i_0 + 2] [i_0 + 2] [i_0] [i_0] [i_0]) & (max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2])), (11052108439605690108ULL)))))));
                        arr_37 [i_0] [i_1 + 1] [8ULL] [i_4] = ((/* implicit */unsigned int) ((11052108439605690109ULL) <= (7394635634103861513ULL)));
                    }
                    arr_38 [i_0 - 2] [i_0] [i_2] = ((/* implicit */unsigned int) arr_19 [i_0 - 2] [i_1] [i_1] [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_0);
}
