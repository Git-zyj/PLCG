/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_11 = arr_0 [i_2] [i_2 + 1];
                            var_12 += ((~(~18446744073709551615)));
                            var_13 = (min(var_13, (arr_10 [i_2 - 1])));
                            var_14 = ((8483949354953908664 >= (((2147483647 / (-2147483647 - 1))))));
                        }
                        var_15 = 2147483647;
                        var_16 = ((-(arr_5 [i_0] [i_1] [i_2])));
                        var_17 = (206 ^ 3950955669);
                        var_18 &= ((((arr_10 [i_0]) ? 24859 : 9898966158988609263)));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_19 = (-38 || 2381755577);
                        var_20 -= ((2147483647 - 13) ? -3450463603951101019 : 24859);
                    }
                    arr_16 [i_0] [i_1] [i_2] = 2061584302080;
                    arr_17 [i_0] = (!0);
                }
            }
        }
    }
    var_21 = (min((((((-32767 - 1) + 2147483647)) >> (1752686550143782441 - 1752686550143782414))), (((31744 <= ((max(16, 63045))))))));
    #pragma endscop
}
