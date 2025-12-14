/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((((min((var_0 != 1), (min(2975379757580393570, 1)))) & ((~((var_0 ? 0 : 3596089843694455620)))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = (arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 1]);
                arr_4 [i_0] [i_1] = ((3596089843694455620 ? -18014398509481984 : ((((((((arr_3 [i_0] [i_0] [i_0 - 1]) ? 3264887485 : (arr_0 [i_0] [i_1])))) && (1 && var_8)))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        var_12 += (((((arr_5 [i_2]) <= 4285367338)) ? 0 : ((4611404543450677248 ? (arr_5 [i_2]) : var_9))));
        var_13 = ((((var_2 ? 1 : 13030028282345665130)) <= (((3596089843694455620 ? 1 : 1)))));
        arr_8 [i_2] = (((~12941721172658294924) >= var_3));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_11 [0] [0] |= (((max(3264887478, 4294967293)) != (~1)));
        var_14 = (min(var_14, (((9716 ? (max(var_6, 3264887478) : (213 && 8128)))))));
    }
    #pragma endscop
}
