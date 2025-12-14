/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 *= (!-32757);
                var_16 += (max((((arr_0 [i_1]) & (arr_1 [i_1]))), ((((arr_4 [i_0]) ? (((arr_0 [i_0]) ? var_3 : 1384294621)) : ((((arr_3 [i_1]) / 1))))))));
                var_17 ^= ((2147483647 ? (((arr_2 [i_1]) ? (arr_2 [i_1]) : (-2147483647 - 1))) : -120));
            }
        }
    }
    var_18 &= ((17009191142473294660 ? var_12 : (~var_9)));
    var_19 = (((max((((1437552931236256955 ? var_0 : -1))), ((82 ? 21799 : 11892593021630932016))))) ? 1437552931236256935 : ((((((var_9 ? var_6 : 1437552931236256955))) ? (min(var_11, var_7)) : (((var_4 ? var_11 : var_13)))))));
    #pragma endscop
}
