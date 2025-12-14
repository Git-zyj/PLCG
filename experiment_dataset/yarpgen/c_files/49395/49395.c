/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((-var_0 | (!var_5)))) ? (var_1 == 7755493059645785497) : ((~(min(692899222, 23256))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [15] [i_0] [i_0] = (((~-22677) ? (max((18446744073709551614 & var_1), -3)) : (~-480232845987425754)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = (((((~var_10) <= 255)) ? (((-((5 ? 852785336 : var_3))))) : 17966511227722125884));
                            arr_12 [i_0] [i_2] [15] = (((7755493059645785506 & 63) ? (var_8 <= var_2) : (2324 | 65529)));
                        }
                    }
                }
                arr_13 [i_0] [i_1 + 2] [i_0] = (min(((10691251014063766139 ? var_1 : (-5 & 139))), ((((-22685 == -23691) != 3894632346)))));
                arr_14 [i_0] = ((!(~-18)));
                var_13 = (min(var_13, (((((3894632349 ? (min(var_10, 2847722154)) : -3602068089)) >> ((((((max(9593266497169229116, 1))) ? (min(-4427968351900584013, 4294967282)) : (min(7259158692653415559, 4294967281)))) + 4427968351900584031)))))));
            }
        }
    }
    #pragma endscop
}
