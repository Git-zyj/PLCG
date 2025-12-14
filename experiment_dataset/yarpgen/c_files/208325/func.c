/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208325
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
    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) var_9);
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_10))));
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_14 [11U] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((signed char) (-(((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */int) arr_1 [i_0])))))));
                                var_15 = ((/* implicit */signed char) var_0);
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */short) max((var_11), (min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) (short)30851))))));
            }
        } 
    } 
}
