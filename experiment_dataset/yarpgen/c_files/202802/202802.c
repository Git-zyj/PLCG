/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 ^= (!-19441);
                    arr_7 [i_0] [1] [i_2] = (max(((((((arr_2 [i_2] [i_2]) ? 2467947321 : 2650799278649125443))) ? (((var_3 + 9223372036854775807) >> 22)) : (~2650799278649125440))), 0));
                }
            }
        }
    }
    var_13 = (var_5 ? (((((0 ? 54 : 2650799278649125431))) ? var_11 : ((-6649713969260932711 ? 6649713969260932712 : 3715589219128015613)))) : ((((((0 ? -8102979167594838493 : 1706696350)) == (((min(10393, var_0)))))))));
    var_14 = var_2;
    var_15 = ((-5539612130977643802 ? -31196 : 0));
    #pragma endscop
}
