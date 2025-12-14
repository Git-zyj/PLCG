/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    var_21 ^= (((((min(23313, var_5)))) - ((((max(1, var_3)) != ((min(var_14, 255))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_22 -= ((245 ? 270 : 1099511627775));
                var_23 ^= 33981;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_24 = 18446744073709551615;
                            var_25 ^= ((!-268) ? ((32767 ? ((1 ? 16918311795133879737 : 58247851580265005)) : (((((-9223372036854775807 - 1) && var_0)))))) : ((((-(arr_4 [i_0]))))));
                        }
                    }
                }
                var_26 += ((+((min((arr_10 [i_0] [i_1] [i_1] [i_0]), (arr_1 [i_0]))))));
                var_27 ^= ((((~(arr_7 [i_0] [i_0] [i_1] [16]))) / (min((arr_7 [i_0] [i_0] [i_1] [i_1]), (arr_8 [i_0])))));
            }
        }
    }
    #pragma endscop
}
