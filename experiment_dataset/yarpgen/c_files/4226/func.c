/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4226
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
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_3))));
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 6; i_1 += 2) 
        {
            for (long long int i_2 = 4; i_2 < 8; i_2 += 2) 
            {
                {
                    var_18 |= ((/* implicit */signed char) max((((short) (+(((/* implicit */int) var_14))))), (arr_7 [(short)9] [i_1] [(short)9] [5])));
                    var_19 = min((((/* implicit */int) ((min((((/* implicit */int) (signed char)124)), (0))) > (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)18356))))))), (((((/* implicit */_Bool) ((long long int) arr_7 [i_2] [i_2] [i_2] [i_2]))) ? (((/* implicit */int) arr_7 [i_1 - 2] [6LL] [i_2] [i_1 - 2])) : (((/* implicit */int) (unsigned short)31134)))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (unsigned short i_4 = 2; i_4 < 13; i_4 += 4) 
        {
            {
                var_21 += (!(((/* implicit */_Bool) min((var_10), (((/* implicit */signed char) arr_10 [i_3] [i_3]))))));
                arr_13 [i_4] [i_3] = min((((long long int) arr_9 [i_3 - 1] [i_3 - 1])), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_3] [(short)12])))))))));
            }
        } 
    } 
}
