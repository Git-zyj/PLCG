/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((min(8463169984303330458, (((318571074 ? 1 : 1))))) <= var_16)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (((((((((1 ? 1987707897 : 206))) ? ((-26021 ? 0 : var_17)) : ((20 ? (arr_3 [i_1] [i_1] [i_1]) : (arr_5 [i_1] [14] [i_1])))))) ? (((((((arr_0 [i_1]) > (arr_4 [i_0] [i_1] [i_1]))))) / 9)) : var_3)))));
                arr_6 [i_0] = ((-((9214659863835149685 ? (arr_3 [i_0] [i_0] [3]) : 9983574089406221158))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_16 [15] [15] [i_2] [i_4] = ((((!(arr_7 [i_2] [i_2]))) ? (((!(arr_7 [i_2] [i_2])))) : (arr_5 [i_2] [i_5 - 1] [i_5 + 1])));
                            var_22 |= -151;
                            var_23 = (2880228178225622572 == 510);
                        }
                    }
                }
                var_24 = var_8;
                var_25 = (min(var_25, (arr_11 [i_2] [15] [i_3])));
            }
        }
    }
    var_26 = var_3;
    var_27 = var_1;
    #pragma endscop
}
