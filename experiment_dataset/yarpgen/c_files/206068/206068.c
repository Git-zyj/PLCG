/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_12 = (min(-39747, (((7314 <= 53853) & (max((arr_4 [i_1] [1] [i_3]), var_8))))));
                        var_13 = (max(var_9, -1));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_16 [i_1] [i_1] [i_1] = (((((((min(var_9, 53853))) * (53857 == 8943)))) ? ((((-(arr_12 [i_0] [i_0] [i_1] [i_2 + 1] [20]))) + ((((4080 <= (arr_6 [i_1] [i_2 + 1] [i_4]))))))) : 1));
                        var_14 = (arr_3 [i_1] [i_1]);
                        arr_17 [i_0] [i_0] [i_1] [16] [i_2] [i_1] = (-(((664380803 - -6359500775654446102) - 93)));
                        arr_18 [i_0] [i_1] [i_1] [i_4] [i_2 + 1] [i_2 + 1] = (((((((max((arr_2 [i_0] [i_1]), 1206882063))) ? -0 : -542714690))) & 0));
                        var_15 = (((arr_5 [i_1]) << (((17908693043283310949 & 4535) - 4389))));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_22 [i_5] [i_1] [i_1] [i_0] = ((((((-2147483647 - 1) && (arr_13 [i_0] [i_1] [i_2 + 1] [i_5] [i_2 + 1] [i_5])))) << (((((60996 - var_3) ? -60998 : ((61015 ? (-127 - 1) : var_11)))) + 61006))));
                        var_16 += ((-((-(318108099284839319 % 148)))));
                    }
                    for (int i_6 = 4; i_6 < 18;i_6 += 1)
                    {
                        var_17 = (min(var_17, (((1 ^ (1 + 64738))))));
                        arr_25 [i_0] [i_1] [i_1] [i_0] = -123;
                    }
                    var_18 = (min(var_18, -127));
                }
            }
        }
    }
    var_19 = (max(var_19, (((((((min(-6369, (-127 - 1)))))) & ((-((var_6 ? var_11 : var_10)))))))));
    var_20 = var_7;
    #pragma endscop
}
