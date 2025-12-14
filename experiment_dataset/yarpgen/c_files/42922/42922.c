/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 7;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 + 1] = (max((max(((13766 ? -449121858 : -449121859)), ((min(var_5, 243))))), -449121855));
        var_16 += (-12997 ? ((min(24820, 147))) : 255);
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = 1;
        var_17 *= var_2;
        var_18 = (min((((((13019 ? -449121859 : var_11))) ? -5607490032353176972 : (((-449121845 ? -1 : 108))))), -var_7));
        arr_7 [i_1] = min((!var_9), (max(-1299, -449121836)));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 7;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 7;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 8;i_4 += 1)
                {
                    {
                        var_19 = 51633;
                        arr_16 [4] [i_1] [i_3 + 3] [i_1] [i_1] [4] |= 255;
                    }
                }
            }
        }
    }
    var_20 = (max(173, ((-2073983979626579975 ? -32127 : ((max(1916, -93)))))));
    #pragma endscop
}
