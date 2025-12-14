/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = 4294967286;
                arr_8 [i_0] [1] [i_0] = (max((((((9 ? -2072632858 : 60358)) | ((min(25258, 0)))))), (~11)));
                var_14 = ((-((1 | (4294967286 == -2048)))));
                var_15 -= -7054;
                var_16 = (~4294967286);
            }
        }
    }
    var_17 = (min(((34 * (2064 / 2418))), ((((63126 != -2048) >= ((4559105206728175246 >> (953751410 - 953751351))))))));
    var_18 = (((((1 ? 11 : -89)) > (((11 ? -2075 : -115))))));
    #pragma endscop
}
