/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210087
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
    var_12 = ((((/* implicit */_Bool) (short)-14327)) ? (((/* implicit */int) (((!(((/* implicit */_Bool) (short)0)))) || ((!(((/* implicit */_Bool) (signed char)61))))))) : (((int) (!(((/* implicit */_Bool) (short)-14327))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 -= ((/* implicit */short) (+(((/* implicit */int) max(((short)-1), (min((arr_0 [i_0] [i_1 - 1]), ((short)14350))))))));
                var_14 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)0)), ((-2147483647 - 1)))))));
            }
        } 
    } 
}
