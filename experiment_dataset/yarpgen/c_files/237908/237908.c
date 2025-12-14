/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_0] = (((max((arr_5 [i_0] [i_1]), 123))) ? ((((((arr_0 [i_1]) ? -1399821159 : 1399821159))) % var_4)) : 1399821159);
                    var_16 -= (((((~(max(65431, 12115888278074703833))))) ? (0 << var_3) : (max((((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : var_15)), (arr_5 [i_0 - 2] [i_1 - 1])))));
                    var_17 = (max(var_17, -1399821159));
                    var_18 &= ((((65431 & ((-8458896435407371526 ? 64 : 1399821159))))) ? -1399821157 : (((arr_0 [i_1]) ? -7872348832209154590 : (min(-7297, 9223372036854775807)))));
                    var_19 = (min(var_19, var_6));
                }
            }
        }
    }
    var_20 = var_2;
    #pragma endscop
}
