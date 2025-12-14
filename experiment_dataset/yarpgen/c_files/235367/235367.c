/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [9] [i_1] [i_0] = (min(((30 ? ((max(var_1, var_6))) : (arr_2 [i_0] [i_0]))), ((((!22) < 27793)))));
                var_17 = (max(var_17, ((((arr_3 [i_0]) ? (arr_4 [20] [i_1]) : ((((var_12 < 1694692391) % -2312617862136747507))))))));
                var_18 ^= 10873015904409060727;
                arr_6 [i_0] [24] [24] |= (min(1073741824, (max(((59 ? 14854200538999101043 : var_0)), -24563))));
            }
        }
    }
    var_19 = var_5;
    var_20 = (min(var_16, (((271850287 * 3) ? var_13 : var_1))));
    var_21 = (min(((max(((min(var_4, var_2))), var_7))), (min(var_7, ((var_5 ? var_8 : -5096176877113148004))))));
    #pragma endscop
}
