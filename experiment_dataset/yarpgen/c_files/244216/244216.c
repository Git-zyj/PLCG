/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    var_18 |= (((((2025947562 ? var_6 : 0))) || (!var_12)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = var_13;
        var_20 = ((((min(-72, (min(0, var_12))))) ? (!1) : (arr_1 [i_0])));

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                var_21 = ((var_10 ? var_11 : ((var_16 ? var_11 : var_13))));
                var_22 = var_4;
                arr_8 [i_2] [14] [i_0] = (!var_11);

                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_23 |= (arr_2 [i_1 - 1] [i_1 - 1] [i_1 + 1]);
                    arr_13 [i_0] [i_0] [i_2] [i_2] |= -2025947563;
                    var_24 ^= ((254 ? var_8 : 1892814661));
                    var_25 = (((arr_3 [i_0] [i_1 + 1] [i_2]) ? -1894106254 : var_13));
                }
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    arr_17 [i_1] = (var_1 <= var_13);
                    var_26 = (((-127 - 1) % (arr_12 [i_4 - 2] [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 2])));
                }
            }
            var_27 = (max((((var_3 % (max(402653184, (-32767 - 1)))))), -7482893479976434678));
        }
        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            var_28 = max(1892814660, 2697082932);
            arr_21 [i_0] [i_5 + 1] |= (((arr_15 [i_0] [i_5] [i_0] [i_5]) ? -2025947563 : 15));
        }
        var_29 = ((!(((2025947562 + (arr_9 [i_0] [4]))))));
        var_30 |= (min(248, 3041510736532231196));
    }
    #pragma endscop
}
