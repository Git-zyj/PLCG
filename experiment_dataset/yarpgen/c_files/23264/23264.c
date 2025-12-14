/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_9 - ((1 ? var_7 : var_2)))) >= (10181073762998088596 > 58)));
    var_17 += ((max((var_9 % var_8), (var_12 == var_9))) <= ((((((var_4 - 1972754512) + 9223372036854775807)) << ((var_14 ? 0 : 1639218702))))));
    var_18 = (((((1 << (1414758462 - 1414758437)))) % var_11));
    var_19 &= (max(var_3, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 += ((4294967295 ? (arr_3 [i_1] [i_1]) : 4));
                arr_5 [i_0] [i_0] = -60;
                arr_6 [i_0] = (((max((((arr_1 [i_0] [i_1]) == (arr_4 [i_0]))), (arr_2 [i_1] [1])))) > (((((~(arr_1 [i_0] [i_0])))) ? ((max((arr_4 [i_0]), (arr_0 [i_0] [i_0])))) : (((1 >= (arr_2 [i_0] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
