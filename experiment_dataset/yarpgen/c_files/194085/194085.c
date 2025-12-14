/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((min(-18794, var_1)))) / (((((var_3 ? var_9 : var_1))) ? 20 : ((18737 ? var_4 : -1152921504606846976))))));
        var_18 -= ((((((282381889 ? var_1 : 8276832692013800902))) ? (max(1108391361, 40813)) : (((14 >> (-18798 + 18811)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 &= ((((~(max(174314589, -38)))) | (min(3525370960, 1))));
                    arr_8 [i_1] &= (max(((((var_5 && var_13) || 2758174609719082568))), (min(40813, var_13))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_2] [18] [18] [i_0] &= (max(0, ((max(((53807 ? -681455970 : -63)), 104)))));
                                arr_15 [i_0] [6] [i_0] [i_1] [i_0] = (max(var_14, ((1108391361 ? -4258476104275751208 : -2503373700560861843))));
                                var_20 ^= ((((61494 ? 10 : 33791)) << (((((((var_16 ? var_17 : 268435452))) ? var_0 : 4047)) - 55652))));
                            }
                        }
                    }
                    var_21 = (min((max(((44536 ? 10007972084347287037 : 2738121458)), 56602)), var_9));
                }
            }
        }
        var_22 = -127;
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            {
                var_23 = (min(var_23, (((((((min(var_4, -2926348643883531484))) ? 6495468254035293626 : (((1152921504606846976 ? 279762265 : 20302))))) / ((-(min(var_4, var_3)))))))));
                arr_21 [9] [i_5] [7] = ((min(57202, var_7)));
            }
        }
    }
    var_24 &= ((!((max((min(11941, var_10)), var_16)))));
    var_25 = (min(var_25, (((((((((60425 ? var_2 : -1952422900))) ? (16383 || -248366969995838126) : ((2669237806 ? var_0 : var_5))))) ? 48 : var_16)))));
    #pragma endscop
}
