/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, 180));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    var_21 = ((((max(0, 190))) / ((255 ^ (7652858902884246446 ^ 180)))));
                    var_22 = 239;
                    arr_6 [i_2] = ((222 ^ ((max(48, 74)))));
                    arr_7 [i_0] [10] [i_0] [i_0] = (87 ^ 64493);
                    arr_8 [i_0] [0] [i_0] [i_0] = 9932;
                }
            }
        }
    }
    var_23 = (max(var_23, 199));
    #pragma endscop
}
