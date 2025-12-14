/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51462
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
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_3 [i_0] [i_1]) : (507904U))), (((/* implicit */unsigned int) ((_Bool) arr_3 [i_1] [i_0])))));
                var_12 = ((/* implicit */long long int) max((var_12), (((max((((/* implicit */long long int) var_8)), (2779693974046967504LL))) / (((((/* implicit */_Bool) 538563713U)) ? (-4860277664146712264LL) : (((/* implicit */long long int) 1643882422U))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((arr_0 [i_2] [i_1]) | (((((/* implicit */_Bool) arr_0 [i_2] [i_3])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                            arr_11 [i_0] [i_0] [i_2] [i_0] |= ((/* implicit */unsigned int) ((var_6) >= (((/* implicit */long long int) var_7))));
                            var_14 *= ((/* implicit */_Bool) var_7);
                            arr_12 [(_Bool)0] [i_3] [(_Bool)1] [(_Bool)1] [i_0] = ((unsigned int) arr_2 [i_0]);
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_9 [i_3] [i_3] [i_2] [i_1] [i_0] [i_0])))) > (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((var_11) >= (((/* implicit */long long int) ((unsigned int) (_Bool)1))));
}
