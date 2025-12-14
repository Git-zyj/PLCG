/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = (max(((((65535 / var_3) > var_9))), (((((2147483647 ? 22532 : 25340))) % (-78 + 6018661567388594512)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (min((((1 ? 2147483647 : 1))), ((7701 ? -401948287308393760 : -6705841691464842266))));
                arr_8 [4] = (23248 * 1);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                var_15 = (min(((1 == (5077256642342875229 / 50232))), 1));
                arr_14 [i_3] [i_2] = (min((1 - 1), ((var_2 ? -14 : var_9))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            {
                var_16 = (min(var_16, ((max(((((min(var_3, var_7)) >= ((min(1211653340, 116)))))), (max(((max(-1211653341, var_0))), (21636 - 9223372036854775807))))))));
                var_17 &= ((((arr_13 [i_5 - 2]) ? (arr_13 [i_5 - 2]) : (arr_13 [i_5 - 2]))));
            }
        }
    }
    #pragma endscop
}
