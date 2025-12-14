/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 = (min(var_11, (((((min((min(52521, var_5)), (arr_1 [i_0])))) ? 1 : (((arr_0 [i_0] [i_0]) % (arr_2 [i_0]))))))));
        arr_3 [i_0] = (15941014067003632176 * -21927);
    }
    var_12 = var_6;
    var_13 = (-11 & 1438469002);
    var_14 = (min(var_1, ((min((5171674075946183257 - 34164), ((min(1837798854, -1))))))));

    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_15 = (((((44921 ? 20916 : -81))) | -5716555647697577210));
        var_16 = (+-2);
        arr_8 [i_1 + 1] [i_1 + 3] = (arr_1 [i_1 + 1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_17 = -7469502464634989041;
                    var_18 = (max(var_18, 3074850845));
                    var_19 = ((29154 ? 8876693700070119412 : 15329307702308111207));
                }
            }
        }
    }
    #pragma endscop
}
