/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_0] = (min(10055243904495047517, (arr_0 [i_0] [i_0])));
            var_13 = ((~(8391500169214504098 % 10055243904495047517)));
            var_14 = (~63);
            var_15 = (min(var_15, (arr_0 [6] [6])));
        }
        var_16 = (((arr_3 [i_0] [i_0 - 1]) ? (max((arr_1 [i_0]), 1817228686896355957)) : (min(116, (arr_1 [i_0])))));
        var_17 = (((~(arr_4 [i_0]))));
        arr_6 [i_0] [i_0] = (~(min(0, 4028185071)));
        var_18 = (min(var_18, (((((((max(1, 1032192)) < (arr_4 [10])))) * (arr_0 [i_0 - 1] [8]))))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (~1);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_19 = (min(var_19, ((max((~-1578862955), (arr_13 [i_3] [i_3] [i_4]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_22 [i_2] [i_2] [i_3] [i_4] [i_5] [15] [i_6] = (((arr_8 [i_2]) ? (~8897658885943324512) : (((arr_18 [i_6] [i_6] [i_2] [i_2] [i_3] [i_2]) ? 8897658885943324504 : (arr_10 [i_2] [i_2] [i_4])))));
                                arr_23 [i_6] [i_6] [i_6] [i_2] [i_6] [i_6] [i_6] = ((-(min((-127 - 1), ((1 ? 233 : (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))))));
                            }
                        }
                    }
                    arr_24 [i_3] [i_3] [i_2] = ((1 ? (1 + 2634496977) : -912716495));
                }
            }
        }
        var_20 = ((~((-(arr_8 [i_2])))));
    }
    var_21 = 32640;
    var_22 &= 4150721214;
    #pragma endscop
}
