/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= ((((min(((max(var_13, var_3))), (max(17798296802457789844, 17798296802457789840))))) ? ((((max(var_5, 0))))) : (((((230 ? 27 : 230))) ? 17798296802457789862 : ((-4550 ? -32757 : 17798296802457789844))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1 + 1] [i_1] = ((((max(((-76 ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : 4188864930719234659)), (min(648447271251761753, (arr_5 [i_1] [i_0])))))) ? (max(((648447271251761766 ? 17798296802457789849 : -1251241392)), (((43602 ? 76 : 41))))) : (((((min(232, 30))) ? (((arr_3 [i_1] [24] [i_1]) ? 722768309 : -32759)) : (~2147483630))))));
                    var_15 = (((!((((arr_6 [i_0] [i_1] [i_1] [2]) ? 127 : (arr_3 [i_1] [i_1] [i_2])))))));
                }
            }
        }
    }
    #pragma endscop
}
