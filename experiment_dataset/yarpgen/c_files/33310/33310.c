/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((~var_6) & ((((var_3 | var_2) ? (max(-3, -1971752186964306318)) : (((var_2 ? var_0 : 116))))))));
    var_11 |= 16303408251446685237;
    var_12 += 0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = (min(var_13, 1));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_14 = (min((arr_6 [i_0]), (((-((var_0 >> (var_8 - 695623426717154488))))))));
                            arr_9 [i_0 - 1] [i_1] [10] [i_0] [i_3] = arr_6 [i_0];
                            var_15 = (((((((~(arr_7 [i_0] [i_1] [i_2])))) >= (1 - -9223372036854775790))) ? (((-2147483647 - 1) ? (~-7299) : (((arr_0 [i_0]) ? -3 : 22252)))) : (var_4 >= var_5)));
                            var_16 = (min(var_16, ((((arr_0 [i_1]) ? (((((36709 ? var_6 : (arr_8 [i_0] [i_0 - 1] [i_0] [i_0] [8] [i_0 - 1])))) ? ((-(arr_5 [i_0] [1] [i_3]))) : ((max(-19465, var_9))))) : ((((arr_2 [i_2 - 1] [i_1] [i_1]) != 203))))))));
                        }
                    }
                }
                arr_10 [i_0] [i_0] = ((!((min((0 ^ -1971752186964306325), (((111 << (92 - 87)))))))));
            }
        }
    }
    #pragma endscop
}
