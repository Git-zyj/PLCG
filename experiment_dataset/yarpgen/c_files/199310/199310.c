/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, 4788588557309899925));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_0] = ((12582912 ? 16352 : (((((1 ? 59444321 : 1)) <= (arr_7 [i_0] [i_0] [i_0 - 1]))))));
                    arr_9 [i_0] = (arr_6 [i_1] [i_1]);
                    arr_10 [i_0] [i_0] [i_0] = var_15;
                    var_21 = ((+((((max((arr_6 [i_0] [i_0]), (arr_0 [i_0])))) ? (((arr_3 [i_0 - 1] [i_1] [i_2]) ? (arr_6 [i_0] [i_2]) : 685373626)) : (arr_4 [i_0 + 3] [i_0 + 3])))));
                    arr_11 [8] [8] [i_1] [i_0] = var_12;
                }
            }
        }
        arr_12 [i_0] = (~var_19);
        var_22 = (max(var_22, ((((!var_2) ? (min(2584652065274873877, ((((arr_0 [i_0]) ? (arr_1 [1]) : (arr_1 [4])))))) : ((max(((503316480 ? (arr_0 [i_0 + 3]) : var_4)), -var_10))))))));
        var_23 = (min((((((-4 && (arr_4 [1] [i_0])))) & (2147483639 != var_18))), (var_3 / var_17)));
    }
    var_24 = (max(var_18, (!42)));
    #pragma endscop
}
