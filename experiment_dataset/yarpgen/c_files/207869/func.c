/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207869
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
    var_14 = ((((/* implicit */int) var_13)) << ((((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (1446172971082285327ULL))))) - (17000571102627248223ULL))));
    var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 4194303LL)) && (((/* implicit */_Bool) 562949953421311LL))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (~(((/* implicit */int) ((unsigned char) ((var_4) << (((arr_4 [i_0]) + (1620575504))))))))))));
                arr_7 [i_1] = (~(arr_4 [i_0]));
            }
        } 
    } 
}
