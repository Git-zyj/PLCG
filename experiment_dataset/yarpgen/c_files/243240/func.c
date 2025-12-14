/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243240
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (signed char)-50))));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((max((((/* implicit */long long int) (signed char)-50)), (min((((/* implicit */long long int) (_Bool)1)), (-6823005475599331525LL))))) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (~(10836557624066617173ULL))))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) ((unsigned long long int) var_2));
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((int) ((((/* implicit */int) (signed char)65)) + (((/* implicit */int) (unsigned char)8))))))));
            }
        } 
    } 
}
