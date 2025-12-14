/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191655
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
    var_10 = ((/* implicit */short) max((((((/* implicit */int) var_2)) | (((/* implicit */int) min((var_2), (var_0)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) 4499650413833214736LL))))))));
    var_11 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_0)), ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_3)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) (-((-(((((/* implicit */int) arr_3 [i_1])) + (((/* implicit */int) arr_3 [(signed char)8]))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-4499650413833214725LL) % (((/* implicit */long long int) ((/* implicit */int) (short)3627)))))) ? (((/* implicit */int) min((arr_3 [i_0]), (arr_3 [i_1])))) : (((((/* implicit */int) arr_3 [i_0])) | (((/* implicit */int) arr_3 [i_1]))))));
            }
        } 
    } 
}
