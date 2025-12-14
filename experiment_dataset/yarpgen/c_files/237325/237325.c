/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = ((-(((!(31719 ^ 0))))));
                var_14 = 107;
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_15 = (((((arr_6 [i_3] [i_2]) ? 2818402237928440782 : (var_8 - 8190))) / ((((((1 ? 8190 : (arr_9 [i_3])))) ? (~1) : (!var_2))))));
            var_16 ^= 8215;
            var_17 = (min(((((arr_10 [1]) & (((-(arr_11 [i_2]))))))), var_10));
        }
        var_18 ^= (((-(!var_11))));
        arr_12 [17] = (min((~650), ((((var_11 || -1) != var_5)))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_19 ^= (((min(64886, var_3)) < ((min(((((arr_0 [2]) > (arr_10 [i_4])))), ((114 ? (arr_14 [i_4]) : (arr_6 [i_4] [20]))))))));
        var_20 = (arr_0 [i_4]);
        arr_15 [i_4] [i_4] = ((!((!((min((arr_1 [i_4]), var_11)))))));
    }
    var_21 &= var_0;
    #pragma endscop
}
