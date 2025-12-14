/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((((var_6 / var_5) & (-35 > 4730))) * (((((8819175454161178416 << 34) < (((((arr_2 [i_0] [i_0] [i_1]) > var_1))))))))));
                var_14 = ((((((((34 < (arr_2 [8] [i_0] [i_0])))) == ((-6 % (arr_3 [i_0] [i_1])))))) < (((((((arr_2 [9] [i_1 + 2] [i_1 - 2]) | var_13)) + 2147483647)) >> (((((arr_0 [i_1] [i_0]) << var_4)) - 48508))))));
                var_15 = (min(var_15, ((((((1 / (475757878 / -56)))) % 28989604003842698)))));
            }
        }
    }
    var_16 = (8051196873476878723 < 1);
    #pragma endscop
}
