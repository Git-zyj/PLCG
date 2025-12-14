/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    var_19 = 23695;
    var_20 = var_8;
    var_21 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_22 = -959403550085081661;

                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        arr_10 [i_1] [i_1] = 36;
                        arr_11 [i_1] [20] = 8070450532247928832;
                        var_23 ^= 36;
                    }

                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_1] [1] = 1;
                        var_24 = (max(var_24, 959403550085081661));
                    }
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        var_25 = (min(var_25, 1684583359380161356));
                        var_26 = 1;
                    }
                    arr_18 [i_1] [i_1] = 19545;
                    arr_19 [i_0] [i_0] [i_1] = 255;
                    arr_20 [i_0] [i_1] [i_0] [i_0] = 1016;
                }
            }
        }
    }
    #pragma endscop
}
