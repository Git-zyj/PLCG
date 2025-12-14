/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236919
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
    var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) var_5))));
    var_20 = max((var_2), (var_10));
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (~((~(((/* implicit */int) var_5)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) min((var_10), (arr_4 [i_0] [i_0])))) & ((~((~(((/* implicit */int) (_Bool)1))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((min((arr_0 [i_0 - 1]), (arr_4 [i_1 - 3] [i_1]))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1])) > (((/* implicit */int) arr_0 [i_0 - 1]))))) : (((/* implicit */int) ((_Bool) (_Bool)1))))))));
                            var_24 &= (!(((/* implicit */_Bool) arr_10 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_1])));
                        }
                    } 
                } 
            }
        } 
    } 
}
