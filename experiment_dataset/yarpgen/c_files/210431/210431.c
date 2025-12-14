/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 6792848121276554750;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_2] = ((((6792848121276554741 ? -12 : -6792848121276554746)) > -26824));
                    var_12 = ((60220 ? (var_2 % var_0) : (max(var_9, (((arr_2 [i_0]) >> (var_6 - 39908)))))));
                    arr_7 [i_1] [i_2 - 1] = min(((var_8 && (arr_3 [i_2 + 1] [i_1]))), (var_3 > var_10));
                    var_13 += (((((arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 2]) ? (((arr_2 [i_1]) ? var_5 : var_9)) : (6792848121276554732 >= var_9)))) ? ((((((((var_3 == (arr_5 [i_2]))))) <= var_1)))) : (max(var_4, (arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1]))));
                }
            }
        }
    }
    #pragma endscop
}
