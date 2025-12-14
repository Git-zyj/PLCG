/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_20 = (min(var_20, (((((((31 ? 103 : 31)))) ? (-32767 - 1) : (min((min(var_13, -1)), (((var_17 ? 1 : 1))))))))));
                        var_21 = ((((min((arr_9 [i_2 - 1] [i_2 - 3] [i_2 - 1] [i_2 - 1]), (arr_9 [i_2 - 1] [i_2 - 3] [i_2 - 1] [i_2 - 1])))) ? (arr_10 [i_0] [i_1] [i_2 - 3]) : ((-4749205761333638222 ? (arr_1 [i_2 - 3] [i_2 - 1]) : -767350495410502927))));
                        var_22 &= (var_18 / var_11);
                        var_23 = -2280882980044512609;
                    }
                }
            }
        }
        var_24 = (min(var_24, var_15));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        arr_25 [i_4] [i_4] [i_6] [i_6] [i_4] [i_7] = (((((min((arr_16 [i_4] [i_4]), (5678526527896094923 != var_0))))) <= ((18115 ? 1 : 18446744073709551615))));
                        var_25 = (min((min((((18446744073709551615 ? var_9 : 34359738367))), (1 & 0))), (arr_24 [i_4])));
                        var_26 = (((min((arr_24 [i_4]), (arr_24 [i_4])))) ? (min((min(18446744073709551612, -4749205761333638230)), -1)) : ((((0 && ((((-32767 - 1) & -2280882980044512622))))))));
                        arr_26 [i_5] [i_5] [i_6] = var_19;
                    }
                }
            }
        }
        arr_27 [i_4] = (((arr_24 [i_4]) % 7457589931459698447));
    }
    var_27 = (min(var_27, (((((min(1, var_19)))) | ((~(min(-4749205761333638240, var_11))))))));
    var_28 = (min(32739, (min(((-1 ? 0 : 17335957839266955749)), 4486244318058358417))));
    var_29 &= var_7;
    #pragma endscop
}
