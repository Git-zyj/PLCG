/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max((!-26601), (max(var_8, var_3))))) ? ((((((var_0 ? var_5 : 15733162884185927616))) ? (var_11 % var_0) : ((var_7 ? var_12 : var_2))))) : ((var_6 ? (17179868672 / var_7) : 1))));
    var_14 = ((4112242697 || ((min(((var_12 ? 0 : var_12)), ((var_0 ? var_6 : 1)))))));
    var_15 = ((((min(var_2, (var_10 * var_6)))) ? (((((var_11 ? -1 : var_6))) % ((var_12 ? var_0 : var_1)))) : (((182724610 ? 13464 : (~1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_16 += (((((-0 | (arr_0 [i_0 + 1])))) || ((max((((var_5 != (arr_1 [i_1])))), (arr_0 [i_0]))))));
                var_17 ^= (((((255 ^ ((16106127360 ? var_2 : (arr_3 [i_0] [i_1])))))) ? ((max(((((arr_3 [i_0] [i_1]) / 13464))), var_8))) : ((((min(701852696638992119, (arr_3 [i_0 + 1] [i_1 - 1])))) ? var_1 : (((~(arr_3 [i_0] [i_1]))))))));
                var_18 = (min(((max(((11 >> (((arr_1 [i_1]) - 2216274766)))), ((min((arr_3 [i_0] [i_1]), var_4)))))), (max(-77, 3588837787))));
                var_19 &= ((-(min(((4203867950 ? (arr_2 [2]) : var_6)), (((var_4 * (arr_0 [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_20 = ((var_5 ? var_7 : ((var_11 ? (arr_7 [i_0] [i_0] [i_2] [i_2] [i_3]) : (arr_6 [i_0 + 1] [i_1] [i_1 - 1] [i_1])))));
                            var_21 ^= arr_0 [i_3];
                            var_22 = (max((((arr_0 [i_0 + 1]) & (arr_0 [i_0 + 1]))), ((~(arr_0 [i_0 + 1])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
