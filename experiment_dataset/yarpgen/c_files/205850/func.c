/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205850
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
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [10LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((2377032248220226951LL), (-2377032248220226951LL)))) ? (((var_4) ? (((/* implicit */int) arr_3 [i_0 - 1] [(signed char)16] [i_1])) : (((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 2])))) : (((/* implicit */int) ((signed char) var_8)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 16; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0 + 1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_18) ? (((/* implicit */int) max((((/* implicit */signed char) var_7)), ((signed char)(-127 - 1))))) : (((/* implicit */int) ((((/* implicit */int) var_18)) >= (((/* implicit */int) var_11)))))))) ? (((/* implicit */int) ((unsigned char) arr_6 [i_0] [15ULL] [i_0 - 1] [i_0]))) : (((((/* implicit */int) arr_3 [i_1] [i_1] [18LL])) << (((/* implicit */int) var_1))))));
                            var_20 = ((/* implicit */_Bool) min((var_20), (((_Bool) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) var_9))))) && (((/* implicit */_Bool) var_16)))))));
                            arr_12 [i_2] [i_3] = ((_Bool) ((var_4) ? (var_5) : (arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_2 + 2])));
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_9))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_4 [16LL] [i_1])))) ? (((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_1] [(_Bool)1] [0LL])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) var_14);
    var_24 = (-(var_14));
}
