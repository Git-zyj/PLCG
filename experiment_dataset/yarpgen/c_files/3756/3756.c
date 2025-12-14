/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((((max(var_10, -1765)) > var_6))), ((var_10 - ((min(var_5, var_5)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_14 = (1765 | 50410);
            var_15 = (max(var_15, (((50410 ? 0 : (arr_3 [17] [17]))))));
            var_16 = (((arr_0 [i_0] [i_1]) ? (((arr_2 [i_0]) & -29428)) : (arr_1 [i_1])));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_17 -= (~1450636794);
            var_18 = (max(var_18, (arr_3 [i_2] [8])));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            var_19 = ((((((arr_9 [i_0] [i_3]) ? (1450636808 | 521442294687947442) : (((arr_2 [i_0]) / (arr_0 [i_3] [i_0])))))) ? (((((((arr_0 [i_3] [i_0]) == (arr_10 [i_0]))))) + (~9791522754262644404))) : var_10));
            arr_11 [i_0] = (min(((max((min(var_10, var_6)), var_10))), 1978946891730826002));
        }
        var_20 = ((-((3506416865 ? 1450636794 : 50411))));
        var_21 = ((~((((max(1, (arr_8 [8] [i_0] [i_0])))) ? (((7807040829768197689 ? 1 : -93))) : (max(var_6, (arr_6 [i_0] [i_0] [12])))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        var_22 = (max(var_22, (((((7807040829768197710 & (arr_20 [8] [i_5 + 2] [8] [i_0]))) % ((((var_12 && (arr_16 [i_0] [i_5 + 2] [i_5 + 1]))))))))));
                        arr_22 [i_0] [i_0] [i_5 - 1] [i_6] [i_0] = var_5;
                    }
                }
            }
        }
    }
    #pragma endscop
}
