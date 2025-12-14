/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1 - 2] = ((!((((-5707 + 2147483647) >> (((min(var_2, 2147483647)) + 5602067073392334419)))))));
                var_14 = (arr_3 [i_1 + 1] [i_1 + 2] [i_1]);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_12 [i_2] [i_3] [1] = ((-(!58)));
            arr_13 [i_2] = (arr_10 [i_2] [i_3] [i_3]);
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            var_15 *= ((0 % (((arr_15 [i_2]) - (arr_10 [i_2] [i_4 - 1] [i_2])))));
            var_16 ^= (((arr_11 [i_2 + 3] [i_2 + 3] [i_4 - 1]) ? 15728640 : (arr_11 [i_2 + 1] [i_2 + 2] [i_4 - 1])));
        }
        var_17 = (arr_14 [i_2 - 1] [i_2]);
        var_18 = ((-5692 != (arr_11 [i_2 + 1] [i_2 + 2] [i_2 + 3])));
    }
    var_19 = var_10;
    #pragma endscop
}
