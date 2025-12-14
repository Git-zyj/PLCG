/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_2));
    var_11 = (((var_8 + 9223372036854775807) << (var_2 - 91)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [14] [i_1] |= 1;
                arr_6 [i_0] [i_1] |= -2147483645;
                var_12 = ((((((206 ? 1 : 65535)) <= 1)) ? (((((-6077702164986063909 ? 1 : var_9))) ? ((268013685 ? (arr_4 [16] [i_0]) : var_6)) : 10229589823846556340)) : ((251902370 ? 267911168 : 43492))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_13 = ((1815179362 ? (min(18446744073709551615, (!64732))) : ((min(226, 88946967)))));
                            arr_12 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] = (~209);
                        }
                    }
                }
                var_14 = (max(var_14, ((((((~(var_2 | 23)))) ? (((-(arr_8 [i_0] [i_1] [i_0] [i_0])))) : (max(-var_3, (((var_9 ? var_5 : (arr_2 [i_0])))))))))));
            }
        }
    }
    var_15 |= ((var_6 ? (((!((min(-267911183, -267911168)))))) : var_6));
    #pragma endscop
}
