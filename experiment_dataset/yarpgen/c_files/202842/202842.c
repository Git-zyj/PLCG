/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_9;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = (-(((-3270276373173198001 - -3270276373173198013) ? (-3270276373173198001 > 36028797018947584) : var_10)));
        arr_3 [i_0] [i_0] = (((max(3270276373173198013, var_5)) - (arr_2 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 = (+(((arr_2 [3] [i_2 + 3]) ? 3270276373173197983 : -1)));
                    arr_9 [i_0] [i_2] [i_2] = ((((((!((min(4930764886670734106, (arr_5 [i_0])))))))) >= (arr_7 [i_0] [i_1] [i_2])));
                    var_14 = (var_1 ? (min((arr_7 [i_2 + 1] [i_2] [i_2]), (arr_7 [i_2 + 1] [8] [i_2]))) : (min(3270276373173197989, -1)));
                    var_15 = var_6;
                }
            }
        }
        var_16 = ((var_10 % -6636826421953126761) ? ((-3270276373173198004 ? -3270276373173198013 : (3270276373173198013 / 7916476360014256603))) : -79542243364938649);
    }
    #pragma endscop
}
