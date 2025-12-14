/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232836
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_14 ^= ((/* implicit */int) var_3);
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 3; i_4 < 14; i_4 += 2) 
                            {
                                var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) 1650455256U))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                                arr_11 [i_0] [i_1] [i_2] [i_0] [i_4] [i_2] [i_1] = ((/* implicit */_Bool) max((((/* implicit */long long int) max((arr_0 [i_1] [i_3]), (var_12)))), (9223372036854775807LL)));
                            }
                        }
                    } 
                } 
                arr_12 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) arr_9 [i_1] [i_0] [i_0] [i_0] [i_1]);
                var_16 *= ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_9);
    var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((var_6), (1650455250U)))))) ^ (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) var_9))))) ? (max((var_0), (((/* implicit */long long int) -326386357)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))))))))));
}
