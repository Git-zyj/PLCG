/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_1] [i_0] = (max((min((!4294967295), 14343803287133181065)), (((14343803287133181063 ? (((arr_2 [i_0] [i_0]) ^ 1)) : 12762082219131056223)))));
                    var_11 -= 3679855349;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [1] [i_1] [i_1] [3] = ((!(arr_12 [1] [i_1] [1])));
                                arr_15 [i_0] [i_2] [15] [2] [i_4] [i_1] = ((!(((615111944 && 12762082219131056250) && (((24961 ? 2264 : 4697)))))));
                                var_12 ^= ((((((((min(var_3, 173)) + 2147483647)) << (((arr_13 [i_0] [i_1 - 2] [i_1] [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_2]) - 1))))) ? (arr_12 [i_1 - 1] [i_1 - 1] [i_2]) : ((~(arr_2 [i_2] [16])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = ((((!(!var_0)))) >= var_10);
    var_14 = (max(var_14, var_5));
    #pragma endscop
}
