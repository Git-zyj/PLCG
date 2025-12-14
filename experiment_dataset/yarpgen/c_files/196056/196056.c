/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -1346834691;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((((((((-1346834707 ? 13 : 1346834690))) ? 19 : 4539628424389459968))) < (max((-9223372036854775807 - 1), 13))));
        var_11 = (!var_0);
        arr_3 [i_0] = 1346834691;
        arr_4 [i_0] [21] = (max((((~(arr_1 [i_0])))), (((arr_1 [i_0]) ? (arr_1 [i_0]) : var_9))));
        arr_5 [i_0] = (arr_0 [i_0 + 1] [i_0]);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_10 [i_1] = arr_6 [i_1];
        arr_11 [i_1] = (((min(((min(879928641, 13))), (max(-3907, 4539628424389459968)))) <= (arr_9 [i_1])));
        var_12 = (((min(-4539628424389459969, -4539628424389459969))) ? ((((!(((var_4 ? -4539628424389459969 : -4539628424389459939))))))) : var_7);
        arr_12 [i_1] = var_7;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 8;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        var_13 = arr_20 [i_2];
                        arr_23 [i_3] [i_2] = (arr_19 [i_4 + 1] [i_4 + 2] [i_4 + 1]);
                    }
                }
            }
        }
        arr_24 [i_2] = 1346834691;
        var_14 = (!1549685974);
    }
    var_15 = var_2;
    var_16 = (min(((((var_2 <= 13) ? 0 : (max(-27296, 7165066223121820178))))), (((((var_0 ? 4539628424389459969 : var_4))) ? ((var_0 ? var_6 : var_0)) : var_1))));
    var_17 = 6476709297542661682;
    #pragma endscop
}
