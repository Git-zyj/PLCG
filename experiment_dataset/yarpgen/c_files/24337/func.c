/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24337
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
    var_20 = ((/* implicit */_Bool) min((((/* implicit */int) var_15)), (((var_18) ? (max((((/* implicit */int) (_Bool)1)), (var_13))) : (((int) var_4))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) / (515396075520ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) % (2147483647LL))))));
                    var_21 = ((/* implicit */signed char) (_Bool)1);
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_4 [i_0] [i_2]))) && (((/* implicit */_Bool) ((short) ((arr_8 [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                }
            } 
        } 
    } 
}
