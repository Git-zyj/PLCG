/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_4 [i_0] [i_1] &= (min(var_7, 127));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_11 &= (((((var_4 ? 61035 : 2047))) ? (((128 ? -682473344 : 59094474))) : var_3));
                        var_12 = (min(var_12, 1));
                        var_13 = 1;
                    }
                }
            }
            var_14 = ((max(-10066, 1)));
            var_15 = ((-(((min(var_9, var_10))))));
            var_16 = 0;
        }
        arr_9 [i_0] [i_0] = ((((max(1, var_2))) ? 1 : 518037521));
        var_17 = (max((((((161 << (32767 - 32753)))) ? ((min(21941, 21821))) : ((63 ? 65535 : 193)))), (max(var_9, 961726280))));
    }
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        arr_13 [i_4] = (min(var_3, (17943 + 65535)));
        var_18 = (min(var_18, (((((var_1 ? (min(var_0, var_6)) : 17944)) - ((((var_4 ? var_3 : 155)))))))));
        var_19 = (255 ^ 32767);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 21;i_6 += 1)
            {
                {
                    var_20 = 15;
                    var_21 = 254;
                    var_22 = 1;
                    var_23 = ((min((max(var_9, -7445996705144405318)), (var_3 % var_5))));
                    var_24 = 71;
                }
            }
        }
        var_25 = 8589934591;
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        arr_20 [i_7] = var_5;
        var_26 = (min(var_26, ((((1 ? 226 : 255)) % ((((((var_10 ? -24084 : var_6))) ? (~15) : 10)))))));
    }
    var_27 = (min(var_27, ((max(1, 1)))));
    #pragma endscop
}
