/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = ((((var_8 << ((((0 ? var_1 : (arr_0 [i_0]))) + 4309272486816784063))))) ? 1 : (arr_1 [i_0]));
        var_12 = (min(var_12, (((~1) ? ((1 >> (58515 - 58501))) : (min((arr_1 [4]), (~var_8)))))));
        var_13 &= (min(var_0, (((((arr_0 [i_0]) ? 1 : var_2)) + var_5))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_14 = (min((((0 << (((arr_3 [i_1]) + 8758207514120132192))))), 3675940282433514295));
        var_15 = (-(min((((var_2 ? 1 : 1))), (max(1, (arr_2 [i_1]))))));
    }
    var_16 = var_3;

    for (int i_2 = 4; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
        {
            arr_10 [i_2] [i_2 + 3] [i_2] = (~var_7);
            var_17 = (max(var_17, (arr_3 [i_2])));
            arr_11 [i_2] [i_2] [i_2] = (((((-((1 ? var_4 : var_3))))) ? (min(((min(var_10, var_10))), (((arr_8 [i_2] [i_2] [i_3]) ^ 1)))) : (((((((arr_5 [i_2 + 1]) ? (arr_5 [i_2]) : (arr_3 [i_3 + 2])))) == var_2)))));
            var_18 = 221;
        }
        for (int i_4 = 1; i_4 < 15;i_4 += 1) /* same iter space */
        {
            arr_14 [12] [12] [i_2] = (max(1, (((min(var_6, var_1)) != (((min(1, var_0))))))));
            arr_15 [15] [i_4] [i_2] = (((max((arr_2 [18]), var_9)) ^ (var_0 * 1)));
        }
        for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
        {
            var_19 |= 281474976706560;
            var_20 = (min(-2147483636, 1));
            var_21 = (max(((-1 ? ((min(-1077433551, 40))) : ((2 ? -52 : -3045920900973484747)))), ((11697 ? (min((arr_5 [i_2]), 17592181850112)) : (((0 << (var_4 - 1284886472))))))));
            var_22 = (min(var_22, ((min(((~((208 ? (arr_13 [i_2]) : var_9)))), (((((1 ? 1 : 7))) ? (1 << 0) : ((1 ? 65533 : var_9)))))))));
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
        {
            arr_21 [i_2] [i_2] = ((var_1 ^ (arr_4 [i_2 + 3])));
            arr_22 [16] &= (((arr_6 [i_2] [11]) ? (arr_17 [i_2] [i_6 - 1]) : (var_3 != var_9)));
        }
        var_23 += (((((((var_5 ^ (arr_3 [i_2])))) ? 16870791393342778903 : ((min((arr_19 [i_2] [i_2] [i_2]), var_3))))) >> ((((max(-13, 28))) >> (((arr_17 [12] [i_2 - 2]) + 2022571835757342805))))));
    }
    var_24 = (~8);
    #pragma endscop
}
