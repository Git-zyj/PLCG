/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235460
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) ((((((arr_0 [i_0] [i_0]) + (2147483647))) >> (((arr_0 [i_1] [i_0]) + (702941333))))) > (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_1])))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */long long int) (((!((_Bool)1))) ? ((~(1061228415U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((985779469), (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_3 [i_0] [i_1])))) : (((/* implicit */int) (_Bool)1)))))));
                    arr_10 [(signed char)0] [(signed char)0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [(signed char)5] [11ULL])) ? (var_2) : (arr_8 [i_0] [i_0]))) % ((~((-9223372036854775807LL - 1LL))))));
                }
                for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    arr_14 [i_0] [i_0] [(signed char)7] = ((/* implicit */short) (~(((max((arr_7 [i_0] [i_0]), (((/* implicit */long long int) var_3)))) | (var_2)))));
                    arr_15 [i_0] [i_1] [i_3] = ((/* implicit */unsigned int) (unsigned char)208);
                }
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */signed char) (_Bool)1)), (var_13)))), (var_8)))) ? (((/* implicit */int) var_1)) : ((((~(((/* implicit */int) var_12)))) + (((((/* implicit */int) var_9)) - (((/* implicit */int) var_12))))))));
    var_21 = ((/* implicit */signed char) var_14);
}
