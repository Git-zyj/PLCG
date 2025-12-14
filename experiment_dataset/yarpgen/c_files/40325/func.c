/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40325
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) ((int) -632569855))), (max((14915350722351066941ULL), (((/* implicit */unsigned long long int) 2039394629)))))) * (((/* implicit */unsigned long long int) ((min((2039394629), (var_8))) / (arr_2 [i_0]))))));
        arr_3 [i_0] [i_0] |= ((/* implicit */int) ((arr_2 [i_0]) < (((/* implicit */int) (!(((arr_0 [i_0]) > (((/* implicit */unsigned long long int) 750615294)))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_19 = var_7;
            var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) var_15)) ? (((((var_1) < (var_1))) ? (((var_2) << (((var_1) - (13658840092809182951ULL))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])) < (arr_0 [6])))))) : (((int) ((((/* implicit */_Bool) var_5)) ? (279489309) : (-2037882702))))))));
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        arr_9 [i_2] = var_4;
        var_21 = var_9;
    }
    var_22 = ((/* implicit */int) (+(((var_16) - (((/* implicit */unsigned long long int) ((17) / (-2039394629))))))));
}
