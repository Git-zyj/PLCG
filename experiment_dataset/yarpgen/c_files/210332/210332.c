/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -595175554;
    var_19 = (max(var_19, ((max((((((-396032506 ? 0 : 1))) ? (!var_13) : -7828059418402917581)), (!var_11))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = (max(var_20, var_14));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] = (((595175535 ? 48 : var_13)) / (~12227));
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_2] = (((var_12 % var_14) % var_13));
                        arr_10 [i_1] [i_1] [i_2] [i_1] [i_1] = (var_0 & var_8);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_21 = (max((((var_10 <= (-654523646 & 2251799813681152)))), 654523645));

        for (int i_5 = 3; i_5 < 7;i_5 += 1)
        {
            arr_15 [i_4] = (max(var_0, (!var_2)));
            arr_16 [i_4] = ((((max(16057730121528722238, 14004))) && 654523646));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_19 [i_6] = (-595175554 < var_1);
            var_22 = (((((var_17 ^ (max(396032505, 255))))) / (((25 == -595175554) ? ((var_16 ? var_1 : var_4)) : ((992 ? var_8 : var_5))))));
        }
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        arr_24 [i_7] = 4294967285;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_23 = (max(var_23, var_12));
                        var_24 = (14198 >= -1134907106097364992);
                        arr_34 [i_7] [i_8] [i_9] [i_8] = -9575;
                    }
                    var_25 = max((var_0 && var_11), 595175554);
                    arr_35 [i_7] [i_8] = ((((min(((min(-8, 1))), ((var_3 ? -654523646 : -2008221551448260814))))) && ((min((((var_11 + 9223372036854775807) << (var_8 - 1256622298))), 36028728299487232)))));
                    var_26 += (-(min((max(-8234127100777331446, 8)), ((var_13 ? 9223372036854775807 : 3564650590)))));
                }
            }
        }
        arr_36 [i_7] = (((!(((var_6 ? -2008221551448260830 : 1))))));
    }
    #pragma endscop
}
