/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_5;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_15 = ((2199023255548 ? 22 : -1192047274));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = ((+(((!-5083) ^ (((var_7 <= (arr_4 [i_0]))))))));
                    var_17 = (arr_2 [i_2 + 3]);
                    arr_9 [i_0] [i_2 + 3] = ((var_11 ? (arr_2 [i_2 - 1]) : (~255)));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        arr_17 [i_0] = (arr_10 [i_0]);
                        var_18 = var_1;
                        var_19 = (max(var_19, (arr_5 [i_3] [14])));
                        arr_18 [i_0] [i_0] [i_0] [7] = (((((arr_5 [i_3] [i_3]) + 9223372036854775807)) << (var_0 - 3227777733610410818)));
                        arr_19 [7] [i_0] [4] [8] [i_0] [4] = 1684370314;
                    }
                }
            }
        }
        var_20 = arr_7 [i_0 + 3] [i_0 + 2] [i_0 - 1] [i_0];
    }
    var_21 = ((max(((max(var_7, 1192047270))), ((3420007252477303410 ? 17559927861846992888 : 6477897791751856388)))));
    #pragma endscop
}
