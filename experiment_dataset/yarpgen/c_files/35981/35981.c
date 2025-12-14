/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((var_3 == (((max(var_2, (-2147483647 - 1))))))))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [12] = ((((min(-728308727, 190))) ? (max(728308731, 1697502934)) : (((((var_9 ? var_1 : var_5))) ? var_8 : (((arr_0 [11]) ? var_9 : var_8))))));
        arr_3 [19] = (((~-926133739) != (((max(var_14, var_9)) & (var_12 & 926133764)))));
        arr_4 [1] = ((~(-5355059182533970775 == var_11)));
        arr_5 [16] = ((!((min((~728308712), (1570138442676773570 & -1891248720))))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_8 [11] [18] [i_1] = ((8388607 ? var_12 : var_9));
            arr_9 [i_1] = ((var_6 ? (var_4 && var_7) : ((((arr_6 [i_0 - 2]) < var_14)))));
        }
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_17 = (max(var_17, (((((max(2957541125520262844, var_9))) ? (((var_1 ^ -8388602) ? ((var_8 ? var_10 : (arr_0 [9]))) : (~var_6))) : (((((!var_10) && (((var_6 ? 171 : 83))))))))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_15 [i_2] = (var_12 && var_4);
            arr_16 [i_2] = var_5;
        }
        var_18 = min(((175 ? 171 : 988551201)), 926133738);
    }
    for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
    {
        var_19 = (((((75 ? ((216220145 ? -1015244681 : 216220150)) : ((188 ? -1493686422 : var_3))))) ? (var_6 && -323887449) : (!-1331872300003411161)));
        var_20 = ((((max((arr_10 [12]), var_13))) != ((+(min((arr_1 [16]), -161131323383239850))))));
        arr_21 [0] = (242 == -7021744762390458665);
    }
    for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_21 ^= (((-38108362 + var_8) < var_2));
        var_22 -= ((-728308727 ? 156 : 1891248720));
    }
    #pragma endscop
}
