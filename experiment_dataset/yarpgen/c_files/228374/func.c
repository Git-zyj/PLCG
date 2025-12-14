/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228374
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) max((((/* implicit */int) var_0)), (((max((((/* implicit */int) (_Bool)1)), (-986070202))) % (((/* implicit */int) max(((unsigned char)169), (((/* implicit */unsigned char) var_1))))))))))));
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_8))));
    var_13 |= ((/* implicit */short) max((-524288), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -230780497)) && (((/* implicit */_Bool) var_6))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) 10509334756498585610ULL);
                arr_6 [i_0] [i_0] [i_1 - 1] = ((/* implicit */int) (short)32680);
                arr_7 [i_0] [6ULL] |= ((/* implicit */short) max((min((min((16773179585872069422ULL), (((/* implicit */unsigned long long int) 1807887549)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1])))))));
            }
        } 
    } 
    var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) <= (var_7)));
}
