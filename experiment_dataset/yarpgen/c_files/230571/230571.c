/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((min((var_4 ^ 174), 82)));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0 + 2] = (((((var_3 == ((var_6 ? 173 : -8))))) % -1));
        arr_4 [i_0] = ((0 > (max(-2147483623, ((8064 ? -5 : 0))))));
    }
    var_13 = (((var_8 & 1) && -26));
    var_14 = (-1 % var_0);
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_15 = (max(((((arr_12 [i_1] [i_2] [i_3]) <= (arr_12 [i_1] [i_2] [i_3])))), ((16201835591910085072 - (arr_12 [i_1] [i_1] [i_1])))));
                    var_16 = (((((1 + (arr_13 [i_1] [i_2] [i_3] [i_3])))) - (((arr_13 [i_1] [i_1] [i_2] [i_3]) + var_4))));
                }
            }
        }
    }
    #pragma endscop
}
