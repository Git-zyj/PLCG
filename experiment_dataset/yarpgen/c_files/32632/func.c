/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32632
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
    var_19 = ((/* implicit */long long int) ((unsigned long long int) (((+(((/* implicit */int) var_8)))) < (((/* implicit */int) ((short) 15355107181413574770ULL))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = max((var_2), (arr_0 [i_0]));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 1]))) / (min((arr_5 [i_0] [i_3 + 1] [14ULL] [i_3]), (((/* implicit */long long int) (short)-10170)))))))));
                            var_21 -= ((/* implicit */long long int) (((~(((((/* implicit */_Bool) (short)-22471)) ? (arr_6 [i_0] [i_1] [i_0] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3]))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 - 2])))));
                            arr_10 [i_0] [i_1] [(unsigned char)1] [i_2] [i_3] = ((/* implicit */signed char) arr_8 [i_0 - 2] [i_3] [i_2 - 1] [i_1 + 1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 += ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14))))))) ? (min((((/* implicit */long long int) var_6)), ((-(var_18))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
}
