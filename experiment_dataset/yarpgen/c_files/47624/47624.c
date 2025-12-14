/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    {
                        var_13 |= var_10;
                        var_14 = ((((max(var_3, (arr_1 [i_1 - 2])))) ? ((-(arr_6 [i_3 + 1]))) : ((~(arr_1 [i_1 - 2])))));

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_15 = ((((max(-2662569650010555483, 124))) ? (((((max(-1, -2662569650010555483))) && (-125 || 0)))) : (!13835058055282163712)));
                            var_16 = var_5;
                        }
                        var_17 = (max(((((arr_7 [i_1]) < ((-(arr_8 [i_0] [2] [i_2] [i_3])))))), ((~((min(-18254, var_4)))))));
                    }
                }
            }
        }
        var_18 = (min(var_18, (((-(max((max((arr_2 [i_0]), (arr_8 [i_0] [i_0] [7] [i_0]))), (arr_4 [i_0] [i_0] [i_0]))))))));
    }
    var_19 = (0 <= -5888709965136872864);
    #pragma endscop
}
