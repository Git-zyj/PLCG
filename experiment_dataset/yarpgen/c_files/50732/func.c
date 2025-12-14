/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50732
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
    var_14 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)220))))) ? (-2018272478) : (((/* implicit */int) (signed char)-103))))) ? (((/* implicit */int) ((5776819948416825140LL) <= (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)20378)))))))) : (((/* implicit */int) (signed char)117)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */int) (signed char)124)), (var_5)))), (((((/* implicit */_Bool) 1421342777U)) ? (-7967835139053540871LL) : (((/* implicit */long long int) 337858039))))))) ? (((7967835139053540855LL) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)50))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)7))))) > (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) var_3))))));
                var_15 -= ((/* implicit */unsigned int) var_5);
            }
        } 
    } 
}
