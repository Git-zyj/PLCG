/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214922
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
    var_19 = ((/* implicit */unsigned int) min((((min((((/* implicit */unsigned long long int) (short)-14118)), (16964622414755047263ULL))) * (16964622414755047263ULL))), (((/* implicit */unsigned long long int) var_1))));
    var_20 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) var_14)) << ((((+(((/* implicit */int) var_10)))) + (117))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    for (short i_3 = 3; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (_Bool)1))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((1482121658954504359ULL) > (((/* implicit */unsigned long long int) 1475538950))))) ^ (((((/* implicit */int) arr_8 [i_1] [i_2 - 2] [i_2 - 1])) / (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1])) != (((/* implicit */int) var_11)))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) var_16)))));
            }
        } 
    } 
    var_24 += ((/* implicit */long long int) var_7);
}
