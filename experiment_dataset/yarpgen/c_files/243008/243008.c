/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((-11093279142653943496 - var_2), (((min(60, var_1))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = (((var_2 ? 18446744073709551615 : 65535)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_12 = -110;
                        arr_9 [i_0] = (((!var_2) && 2041369267));
                    }
                }
            }
            var_13 |= (arr_2 [i_0] [i_1] [i_0]);
            arr_10 [i_1] &= (!var_5);
        }
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_14 = (min(var_14, ((max(((min((((arr_11 [i_4]) >> (var_9 - 12686025355612026352))), var_1))), var_5)))));
        arr_13 [i_4] = ((min((((-64 ? 90 : 65111))), var_2)));
        arr_14 [i_4] = ((((-(arr_12 [i_4] [i_4]))) & ((((62 || var_8) && ((max((arr_11 [i_4]), -51))))))));
    }
    for (int i_5 = 2; i_5 < 13;i_5 += 1)
    {
        var_15 = ((((max(1, (min(-64, -64))))) << ((((arr_16 [i_5 - 1] [i_5 - 1]) >= ((max(var_2, 24169))))))));
        var_16 = ((max(((119 ? 18446744073709551594 : 2041369267), -10469))));
    }
    var_17 &= var_5;
    #pragma endscop
}
