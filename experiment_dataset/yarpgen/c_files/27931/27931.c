/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((!(242 + var_0)))) >= ((((var_2 && var_2) == 54270)))));
    var_11 -= ((!((var_0 && (((60 ? var_8 : var_6)))))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {
            arr_6 [1] [1] &= ((-(min((var_3 + 0), var_0))));
            var_12 = (((min(((var_2 ? (arr_4 [i_0] [i_0]) : var_0)), (!3237196136867817269))) / (-550387260615289515 || 1)));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_13 = (~458752);
            var_14 = (max(179, ((~(~-31873)))));
        }
        var_15 = min(0, ((((arr_3 [i_0]) > (!var_2)))));
        arr_9 [i_0] = (max((((((var_7 ? var_7 : (arr_2 [16])))) ? var_2 : var_5)), ((((((var_3 ? (arr_8 [i_0] [i_0 + 4]) : var_9))) ? var_1 : var_4)))));
        arr_10 [i_0] [i_0] = ((+(max((6621 == var_0), var_3))));
    }
    for (int i_3 = 3; i_3 < 12;i_3 += 1)
    {
        var_16 *= var_7;
        var_17 = 32755;
    }
    var_18 = (max(var_18, var_8));

    for (int i_4 = 4; i_4 < 10;i_4 += 1)
    {
        var_19 = (min(var_3, var_0));
        var_20 = var_2;
    }
    #pragma endscop
}
