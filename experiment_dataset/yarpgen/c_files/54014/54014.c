/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((((min((max(var_10, -32763)), (-2147483647 - 1)))) ? var_10 : var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_13 -= (((((!-7247643790722672987) * (((!(-127 - 1)))))) % (~var_7)));
                    arr_8 [i_1] = (max(((((arr_1 [i_0]) ? (!var_4) : (arr_7 [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1])))), ((var_4 ? 2147483647 : (arr_4 [i_1 - 2] [i_1] [i_2])))));
                    arr_9 [9] [i_1] = (~192266715162861912);
                    var_14 += (((arr_5 [i_1 + 1] [12] [i_1 - 2]) < ((~(arr_4 [i_1 - 2] [i_1 + 1] [i_1 + 1])))));
                }
                arr_10 [i_1] = min(41555, 2147483647);
            }
        }
    }
    var_15 = ((min(((var_10 ? var_7 : var_11)), (max((-127 - 1), var_11)))));
    var_16 = (min(((-(-127 - 1))), (16 - var_1)));
    #pragma endscop
}
