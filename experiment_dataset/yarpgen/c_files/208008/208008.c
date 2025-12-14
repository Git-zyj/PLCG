/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((((arr_1 [i_1]) | ((7991 ? -7991 : 2453844721)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, ((max(11443, 8001)))));
                                var_14 += (min(((8001 ? var_9 : 14274094123126955254)), ((2453844721 ? var_2 : 8001))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] &= 2453844713;
                            }
                        }
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = 127;
    }
    var_15 = var_8;
    var_16 = ((min(var_7, (!130135870))));
    var_17 = ((~((min(8012, var_4)))));
    #pragma endscop
}
