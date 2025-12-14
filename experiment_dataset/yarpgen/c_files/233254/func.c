/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233254
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
    var_16 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_8))))), (((4294967282U) % (((/* implicit */unsigned int) var_7))))))) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */_Bool) max((var_7), (-189428902)))) ? (((/* implicit */unsigned long long int) var_0)) : (max((var_1), (var_1))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_1] [i_2] [i_1] [i_2] &= ((/* implicit */int) max((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) var_6))));
                            arr_14 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) arr_7 [i_0] [i_0 - 1] [i_0]);
                        }
                    } 
                } 
                arr_15 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((_Bool) ((unsigned short) ((((/* implicit */int) arr_6 [i_0] [12LL])) % (((/* implicit */int) arr_0 [i_1]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) max(((+(189428895))), (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17465))))) % (2034349804)))));
}
