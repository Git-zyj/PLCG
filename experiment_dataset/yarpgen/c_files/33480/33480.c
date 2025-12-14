/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((var_11 >> 11) ^ (4 & 3)));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_14 += (((((-12 ? (-6581621147978339241 && var_9) : (min(-1039449306, -32))))) + ((2047656969 ? 2743734577801326352 : -23324))));
            var_15 = ((+(((-6581621147978339232 >= 127) ? 1069547520 : ((min(1, 0)))))));
            arr_6 [i_1] [i_1] [i_1] = ((((((var_0 >> (1686507 - 1686493))))) >> (((((arr_4 [i_0]) == var_8)) ? (!-980368001) : ((1 ? 0 : 219))))));
            var_16 = ((32601 * (((-13 > (min(6581621147978339231, 0)))))));
            var_17 = ((~((107 ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_1])))));
        }
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_18 = 0;
                    arr_14 [i_2] [12] [i_2] [i_4] &= var_7;
                }
            }
        }
        var_19 |= ((18742 % (arr_9 [i_2] [i_2])));
        arr_15 [i_2] = (min((((!(arr_10 [i_2] [i_2] [i_2])))), (arr_13 [i_2] [6] [i_2])));
        arr_16 [8] = (((((arr_8 [i_2]) - -4169633479105431555)) ^ -7003729545894438362));
    }
    var_20 |= var_5;
    var_21 = ((-7 ? 6581621147978339255 : -1));
    #pragma endscop
}
