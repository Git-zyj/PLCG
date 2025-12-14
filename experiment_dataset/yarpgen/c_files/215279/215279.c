/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!(((323660590 | (((-2047555937729229785 + 9223372036854775807) << (var_6 - 3029803523)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_19 -= ((((min((arr_1 [i_1]), (arr_1 [i_0 + 2])))) || (((+(((arr_1 [i_0]) & (arr_5 [i_0] [1] [1]))))))));
                            var_20 ^= 38489;
                            arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] = (max((max(var_14, (min((arr_2 [i_0]), (arr_8 [i_2] [i_2] [i_2] [i_2] [i_2]))))), (arr_7 [i_0] [i_0] [i_0] [i_1])));
                            var_21 = min(576460717943685120, -576460717943685120);
                        }
                    }
                }
                arr_11 [i_0] [i_1] [i_1] = (min(var_8, 576460717943685111));
                var_22 = 9223372036854775804;
                var_23 ^= (((-20 / -576460717943685143) / ((-576460717943685120 ? -576460717943685121 : (arr_1 [i_0 + 3])))));
            }
        }
    }
    var_24 ^= ((((min(((min(var_5, var_7))), ((0 ? var_14 : var_7))))) > ((((max(1, 113))) ? -4190605881508422299 : (15400772240445081378 < 24)))));
    #pragma endscop
}
