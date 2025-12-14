/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_2;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_3 [24] = 10;

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            var_12 |= (arr_1 [i_0]);
            var_13 = (!20);
            var_14 = 609306545;
            var_15 = (max(var_15, (arr_1 [7])));
        }
        for (int i_2 = 3; i_2 < 24;i_2 += 1)
        {
            arr_8 [i_0] [4] [i_0] = ((!((!(((59 ? 32753 : 139)))))));
            var_16 ^= (arr_7 [i_2] [i_2] [i_0]);
        }
        var_17 = ((((((arr_4 [24] [i_0] [i_0]) < (!var_5)))) > 117));
    }

    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            arr_13 [5] |= (max(var_10, (max(var_2, ((-1440906202413474179 ? 15049557043700997852 : 177))))));
            var_18 = (min(var_18, (((max(1, var_9))))));
            var_19 = (min(var_19, -1));
            var_20 = (min(var_20, var_6));
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            arr_16 [i_3] = (max(1260444606, 1));
            var_21 = (min(9151314442816847872, -2));
        }
        arr_17 [i_3] [i_3] = (((max(2147483647, -4829821705060492012))) < (max((arr_9 [i_3] [i_3]), var_8)));
    }
    var_22 += var_7;
    #pragma endscop
}
