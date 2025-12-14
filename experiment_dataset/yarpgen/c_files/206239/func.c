/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206239
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
    var_14 = ((signed char) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_13)))))))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */int) var_9)) >> (((((/* implicit */int) ((signed char) (~(((/* implicit */int) var_12)))))) - (69))))))));
                            var_17 ^= arr_1 [(signed char)11] [(signed char)11];
                        }
                    } 
                } 
                var_18 = (_Bool)1;
                arr_12 [i_0] [i_1] = ((/* implicit */signed char) arr_8 [i_0] [(signed char)4]);
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) max((var_19), (((signed char) var_2))));
    /* LoopNest 2 */
    for (signed char i_4 = 4; i_4 < 23; i_4 += 3) 
    {
        for (signed char i_5 = 4; i_5 < 23; i_5 += 4) 
        {
            {
                arr_17 [i_4] [i_5] = (_Bool)1;
                arr_18 [i_4] = (_Bool)1;
            }
        } 
    } 
}
