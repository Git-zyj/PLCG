/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        var_14 ^= (((((-81 ? 5519796450473059912 : var_2))) ^ (max((arr_11 [i_3 - 1] [i_3] [i_3] [i_3 + 1] [i_3 - 1]), (arr_11 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1] [1])))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_15 -= (~(arr_11 [i_3 - 2] [1] [i_2] [i_3] [1]));
                            var_16 = (max(7, 2));
                            arr_15 [i_4] = 28748;
                        }
                    }
                    arr_16 [i_0] [1] [1] = 0;

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_17 = var_5;
                        var_18 = (min(((((arr_8 [i_1]) | (arr_2 [i_0])))), ((0 ? 0 : (arr_8 [i_0])))));
                        var_19 = 227;
                        var_20 = 3111996315130217260;
                    }
                    var_21 = (min(((max(0, (min(1254554901, 0))))), var_2));
                }
            }
        }
    }
    var_22 = var_1;
    var_23 = (max((min(2172292070871302831, 18014398509481983)), var_9));
    var_24 = var_10;
    var_25 = 8650236232990639199;
    #pragma endscop
}
