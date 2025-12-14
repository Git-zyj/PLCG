/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229401
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) max((((((((/* implicit */int) (short)8869)) | (arr_5 [i_0]))) + (max((1221186415), (arr_2 [i_1] [i_0]))))), (((/* implicit */int) ((short) (+(arr_4 [i_0] [i_0] [i_1])))))));
                var_21 = ((/* implicit */unsigned short) (short)21345);
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))) < (((/* implicit */int) min(((unsigned short)52993), (((/* implicit */unsigned short) (signed char)63)))))));
                var_23 = ((/* implicit */long long int) ((unsigned short) 4294967295U));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) -924286379);
}
