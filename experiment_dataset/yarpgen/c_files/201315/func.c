/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201315
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
    var_16 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)64585)) >> (((387898930U) - (387898916U)))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                            arr_10 [i_0] [i_1 + 1] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */int) (short)-5376)) ^ (((/* implicit */int) (_Bool)0)))), ((~(0)))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & (arr_9 [i_0])));
                var_19 = ((/* implicit */signed char) (~(((arr_1 [i_0 - 1] [i_0]) ? ((+(var_3))) : (((/* implicit */int) (short)22036))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (short)-5376);
}
