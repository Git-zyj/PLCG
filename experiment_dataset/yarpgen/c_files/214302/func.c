/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214302
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
    var_12 += ((/* implicit */int) ((((((/* implicit */int) var_6)) >> (((((((/* implicit */_Bool) (unsigned short)8176)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8176))))) + (3607048120322894662LL))))) != (((/* implicit */int) ((_Bool) ((unsigned char) var_0))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_13 = (~(((/* implicit */int) (signed char)-1)));
                var_14 = ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (short)-26545)) | (((/* implicit */int) arr_0 [i_1])))))) ? (((/* implicit */unsigned long long int) ((arr_3 [i_1]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) : (arr_4 [12U] [i_1] [i_1]));
                var_15 += ((/* implicit */long long int) ((signed char) ((short) 3276624031059082724ULL)));
            }
        } 
    } 
}
