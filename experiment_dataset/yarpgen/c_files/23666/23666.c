/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (max(var_20, ((max((!37178), ((((max(156, 127))) && 4154909436)))))));
        var_21 = (((((0 ? (~var_5) : (arr_1 [i_0])))) || (((~(arr_2 [i_0] [i_0]))))));
        var_22 = ((((((arr_3 [i_0]) ? var_4 : (arr_3 [i_0])))) ? (~var_13) : (((!(var_11 >= var_3))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [8] [i_1] [i_2] [i_2] [i_2] = var_2;
                        var_23 += 4086387369445752684;
                    }
                }
            }
        }
        arr_15 [i_0] = (((arr_4 [i_0] [i_0] [i_0]) ? ((max(var_6, 140057851))) : -var_2));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_19 [i_4] = var_17;
        var_24 |= (min(((((var_14 == -6706443033054473657) == (!var_9)))), (arr_17 [i_4] [i_4])));
        var_25 = (min((((!((max(var_15, var_11)))))), var_13));
        var_26 *= var_19;
    }
    var_27 &= ((((max(var_16, var_2))) ? var_3 : ((((var_7 ? var_4 : var_11)) - -var_16))));
    var_28 = var_13;
    #pragma endscop
}
