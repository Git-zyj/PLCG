/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51084
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
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                var_12 += ((/* implicit */short) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) arr_5 [(_Bool)0])))), (((/* implicit */int) max((var_6), (var_9)))))))));
                var_13 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (unsigned char)127)), ((unsigned short)54912)));
                var_14 = ((/* implicit */signed char) var_11);
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)155))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)212))) : (21LL)));
            }
        } 
    } 
    var_16 = max((((/* implicit */short) var_1)), ((short)19706));
}
