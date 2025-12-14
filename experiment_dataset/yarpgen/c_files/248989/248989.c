/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = -var_11;
        var_13 = (min(var_13, ((var_1 & (min((((219 ? 215 : 255))), (max((arr_1 [4] [i_0]), var_3))))))));
    }
    for (int i_1 = 4; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_14 = (min(var_14, ((((((((var_0 ? var_5 : (arr_3 [i_2]))) >= (max(var_12, (arr_6 [i_1])))))))))));
                            var_15 -= ((4 ? 4294967295 : 9614));
                        }
                    }
                }
            }
            var_16 &= 9601;
        }
        var_17 = ((((((((arr_4 [i_1 - 2]) ? (arr_16 [3] [i_1] [i_1 + 1]) : 14951855806823624969))) ? (((arr_3 [i_1 - 3]) & -3996021785312057169)) : ((-(arr_10 [i_1] [i_1]))))) & (arr_11 [i_1] [i_1 - 4] [i_1])));
    }
    var_18 = (((((min(var_3, (var_3 > var_11))))) & 8087687595520515764));
    var_19 = (((((var_11 & (5093 == 55921)))) ? ((var_8 ? (var_6 == var_9) : ((var_9 ? var_3 : var_5)))) : ((((var_3 < 27) > var_7)))));
    var_20 = var_0;
    #pragma endscop
}
