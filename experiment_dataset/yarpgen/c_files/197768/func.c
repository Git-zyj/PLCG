/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197768
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_9 [(unsigned char)3] [i_0] [i_0] [(unsigned char)3] = ((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) arr_3 [i_2 - 1] [1ULL] [i_2 - 1])))));
                    arr_10 [i_1] |= ((/* implicit */signed char) (-((+((+(arr_7 [i_0] [(unsigned char)10])))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (-((-((-(((/* implicit */int) var_10)))))))))));
    var_20 = ((/* implicit */int) (+((-(((var_1) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
    var_21 = ((/* implicit */short) ((unsigned int) var_17));
    var_22 = ((/* implicit */unsigned int) (((((~((+(((/* implicit */int) var_1)))))) + (2147483647))) << (((((var_0) + (8408256371175303602LL))) - (10LL)))));
}
