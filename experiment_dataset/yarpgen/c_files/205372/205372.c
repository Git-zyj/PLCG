/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = ((!((((max((arr_3 [i_0]), var_17))) || ((max(var_4, var_10)))))));
        arr_5 [i_0] [i_0] = (((((((-32754 ? -32756 : 351994262908859527)) ^ ((min(-21830, (arr_3 [i_0]))))))) ? (max(((var_10 ? var_19 : (arr_0 [i_0]))), ((21830 ? var_4 : var_18)))) : (((((min((arr_0 [i_0]), 1885551171))) ? (((-19 ? 9404 : var_11))) : (max((arr_1 [i_0]), var_2)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = (((((378481373 >> (-1885551172 + 1885551179)))) ? ((+(((arr_8 [i_2] [i_1] [i_0]) ? (arr_0 [i_0]) : var_1)))) : (max((((arr_0 [i_0]) + var_7)), (((!(arr_2 [i_0]))))))));
                    var_21 = ((((max(((min(32754, (arr_7 [i_1] [i_2])))), ((-1885551172 ? var_16 : (arr_1 [i_0])))))) ? (((arr_3 [i_2]) ? (max(10671108569654986525, (arr_9 [i_2] [i_1] [i_1] [i_0]))) : (((max(21830, var_14)))))) : ((((!(((var_5 ? var_10 : 9404)))))))));
                }
            }
        }
    }
    var_22 = ((((((~40) ? (((min(var_12, var_3)))) : var_6))) ? ((max(var_8, var_10))) : ((((!(((3451003764 ? var_10 : var_6)))))))));
    var_23 = -1039352924;
    #pragma endscop
}
