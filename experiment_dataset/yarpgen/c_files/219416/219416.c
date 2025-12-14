/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 &= -3741594002022960130;

                for (int i_2 = 2; i_2 < 18;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        var_21 = (~var_6);
                        var_22 = ((((((32757 ? 1692579204 : var_14))) ? (12096996704604773609 - 10522) : var_3)));
                        var_23 = (max(var_23, (((-(((min(var_5, var_13)))))))));
                        arr_11 [i_2] [i_0] [i_0] &= (1 - 220);
                        var_24 = ((((max(40761, (625159056 - var_14)))) ? ((~(~36))) : 32767));
                    }
                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {
                        var_25 = (max(var_25, 1));
                        arr_14 [i_1] [i_2] [i_1] [i_1] = (((14985 * 156) & (!23571)));
                    }
                    arr_15 [i_1] [i_2] = var_1;
                }
                for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    var_26 -= ((-(var_4 - 2538127532)));
                    var_27 = ((41963 + ((min(var_13, 229)))));
                }
                var_28 = ((-(~13209054564412850255)));
            }
        }
    }
    #pragma endscop
}
