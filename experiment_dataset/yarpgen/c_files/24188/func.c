/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24188
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max(((-((~(var_15))))), (((((/* implicit */_Bool) ((arr_1 [i_1] [i_1]) ? (((/* implicit */int) (_Bool)1)) : (-1730047629)))) ? (((((/* implicit */int) (_Bool)1)) | (var_3))) : (((arr_3 [i_1] [i_1]) * (((/* implicit */int) (_Bool)1)))))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_18 &= ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)60)))), (min((-1730047610), (var_14)))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((int) arr_5 [i_0 + 1] [i_2] [i_1])));
                            arr_12 [i_0] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) min((var_9), (min(((_Bool)0), ((_Bool)1)))))) - (max((((((/* implicit */_Bool) (signed char)-61)) ? (1730047628) : ((-2147483647 - 1)))), (min((((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_0])), (var_0)))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) ((_Bool) (~(((((/* implicit */int) var_2)) >> (((var_12) + (7903313337091047622LL))))))));
                var_20 *= ((/* implicit */int) var_11);
            }
        } 
    } 
    var_21 *= ((/* implicit */signed char) ((_Bool) max((((/* implicit */int) max((var_2), (((/* implicit */signed char) (_Bool)0))))), (var_14))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) & ((~(((7467431419792683208LL) >> (((/* implicit */int) var_4))))))));
}
