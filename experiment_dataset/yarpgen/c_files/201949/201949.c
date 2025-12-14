/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((-712023841 + 2147483647) >> (var_3 - 11597269423611841979)));
    var_11 = (~var_5);
    var_12 = (min(((((min(var_1, var_8)) >> ((((var_8 ? -31141 : var_6)) - 4294936141))))), ((-((var_5 ? 3187724456790889090 : 1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = ((!(((var_9 ? (var_3 * var_4) : -3187724456790889087)))));
                var_14 |= (((((((min(var_0, 1))) ? (min(1, var_6)) : (arr_1 [i_0])))) ? -15 : (arr_4 [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_15 = ((!((((arr_3 [i_1]) ? (arr_3 [i_1]) : 1)))));
                            arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] [i_3] = ((~(max(var_8, (min(3012907523, 7257323413548982758))))));
                        }
                    }
                }
            }
        }
    }
    var_16 = var_8;
    #pragma endscop
}
