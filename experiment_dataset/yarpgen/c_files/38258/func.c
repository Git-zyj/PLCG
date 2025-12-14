/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38258
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
    var_12 = var_2;
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((arr_1 [i_0] [i_0 - 2]), (min(((_Bool)1), (arr_4 [i_0] [i_0] [i_1]))))))));
                arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 3] [i_1 - 1])) | (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 2] [i_1 + 1])))) >> (((((5851246804220902731LL) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1] [i_1 - 1]))))) - (5851246804220902727LL)))));
            }
        } 
    } 
    var_13 = var_0;
    var_14 &= ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((var_11) + (678301393369376213LL)))))) : (max((var_10), (9223301668110598144LL))))) != (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_2))));
    var_15 = ((/* implicit */_Bool) (+(min((((/* implicit */long long int) (!(var_5)))), (var_0)))));
}
