/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209809
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_0] [(signed char)8] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) arr_4 [i_1] [i_0] [i_0])), (arr_3 [i_0] [i_1]))), (max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_1])) <= (arr_4 [i_0] [i_1] [i_0]))))))));
                var_18 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (short)-6142)))) << (((max((((/* implicit */unsigned long long int) 2U)), (arr_3 [i_0] [i_0]))) - (167778826612046456ULL)))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned long long int) min((((var_12) ? (((4619471779933782870LL) << (((1902651525) - (1902651525))))) : (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])))), (max((arr_7 [i_2 - 1] [i_2] [i_2 - 2]), (arr_7 [i_2 - 2] [i_0] [i_0])))));
                    arr_11 [(unsigned short)1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_1])) ? (4294967272U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 - 1]))))) ^ (max((((/* implicit */unsigned int) arr_9 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 - 2])), (max((((/* implicit */unsigned int) arr_0 [(unsigned char)1] [i_1])), (4U)))))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 3) /* same iter space */
                {
                    var_20 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [(short)12]))) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 5653906608722017415LL))))));
                    var_21 += ((/* implicit */unsigned char) arr_12 [i_3 - 2]);
                }
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((unsigned int) ((int) arr_3 [6ULL] [i_1]))) % (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)157)), (-320880881)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) 19U);
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(min((var_7), (((/* implicit */unsigned long long int) var_6))))))) ? (((/* implicit */int) ((short) var_11))) : (((/* implicit */int) var_10))));
}
