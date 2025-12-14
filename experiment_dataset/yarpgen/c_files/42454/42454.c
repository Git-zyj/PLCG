/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (156564947 < 68);
    var_21 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_22 = (((((arr_1 [i_0 + 3] [i_0 + 4]) % var_10)) - ((((arr_1 [i_0 + 4] [i_0 + 1]) / (max(var_1, var_5)))))));
                var_23 = (max(var_23, (((!((((arr_2 [6]) - 52))))))));
                arr_5 [i_0] [i_0] [i_1] = min(1073610752, 1194836352);
                arr_6 [i_0] [i_1] [i_1] = (-1194836353 ? (((((arr_1 [i_0] [i_1]) || var_9)) ? (-1194836355 | 49) : ((7886654712472490507 ? -3990271787773687753 : 1194836335)))) : -7886654712472490526);
            }
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_24 = ((((((14 ? 3990271787773687739 : -7745)) > var_14))) + (!-1));
        var_25 = ((((203 / (-2147483647 - 1))) > (((arr_8 [i_2] [i_2]) << (((arr_8 [i_2] [i_2]) - 201))))));
        var_26 = ((((((arr_10 [i_2]) | (arr_10 [i_2])))) ? (-1 | -2125528457) : (min((arr_9 [i_2] [i_2]), (arr_9 [i_2] [i_2])))));
    }
    #pragma endscop
}
