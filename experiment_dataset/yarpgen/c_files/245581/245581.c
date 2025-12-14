/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((32767 & -3573099847548914495) ? (min(((-64 ? 9764979530123757898 : var_0)), ((min(var_11, var_10))))) : ((((max(var_2, 0))) ? (max(8681764543585793737, 9764979530123757879)) : (((var_9 ? var_12 : var_9)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] = (max(((((((-9223372036854775807 - 1) + 2728421800786589283))) != (((arr_0 [i_0]) * 8681764543585793709)))), ((((((arr_6 [i_0] [i_0]) == 0))) < (var_4 || 9764979530123757898)))));
                    arr_10 [i_0] [i_0] = ((max((var_8 % 61235), (-16212 != 6))) | ((((((((arr_1 [i_0] [i_0]) + (arr_2 [i_2])))) < (min(var_1, 18446744073709551615)))))));
                }
            }
        }
    }
    var_14 = (max(9764979530123757874, -9223372036854775806));
    var_15 = (((min(((var_10 ? var_3 : 8681764543585793709)), (var_11 >> var_4)))) ? ((min((17382 % var_6), (-3633638888209702830 + var_10)))) : (min((8901867515111146444 || 18446744073709551615), (max(var_0, var_11)))));
    var_16 = ((((((max(var_11, var_3))) ? (((max(3, -45)))) : (max(var_8, var_3)))) % (((((var_4 ? var_7 : var_9))) + (var_8 + var_8)))));
    #pragma endscop
}
