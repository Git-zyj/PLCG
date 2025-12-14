/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41239
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
    var_17 = var_11;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = var_1;
                arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (signed char)106))) ^ (((/* implicit */int) (signed char)-1))));
                var_18 += ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)29))))) ? (((/* implicit */int) arr_3 [(signed char)14] [i_1])) : (((/* implicit */int) ((((/* implicit */int) (signed char)4)) != (((/* implicit */int) (signed char)-36))))))) != ((~(((/* implicit */int) (signed char)120))))));
                var_19 |= arr_4 [i_0] [i_1];
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-34)))))));
}
