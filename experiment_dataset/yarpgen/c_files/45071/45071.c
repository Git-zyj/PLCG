/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-1 | -1209340058130851353);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = -var_1;
        var_16 = (max(var_16, ((min((arr_1 [i_0]), (((arr_3 [i_0]) ? (min((arr_1 [i_0]), (arr_3 [i_0]))) : ((max((arr_0 [i_0] [i_0]), var_12))))))))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_8 [i_0] [i_0] [i_0] = ((((max(var_7, -1209340058130851354))) ? ((-1209340058130851359 ? var_2 : (arr_1 [i_0]))) : ((0 ? (arr_2 [i_0]) : ((164 ? 11062934974099619572 : 174))))));
            arr_9 [i_0] [i_0] = max(40596, (((arr_5 [i_0] [i_1] [i_0]) ? (arr_2 [i_0]) : ((157 ? 1062207257 : -79)))));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    {
                        var_17 = arr_2 [i_0];
                        arr_20 [i_0] = ((((min(-5, (max((arr_5 [i_0] [i_2] [i_0]), var_2))))) ? -15728640 : -3161500670485574042));
                        var_18 *= (min((min(((var_9 ? var_6 : 11062934974099619574)), (((-85 ? 170 : 2768684328))))), (arr_7 [i_0])));
                    }
                }
            }
            arr_21 [i_0] [i_0] = ((max(var_1, 997638081)));
            arr_22 [i_0] [i_2] = ((((min((arr_17 [i_0] [i_2]), (arr_17 [i_0] [i_0])))) | (max((arr_5 [i_0] [i_0] [i_0]), -63))));
        }
    }
    var_19 = ((((max(-21936, var_10)))) != var_8);
    var_20 = ((-(min(-1, ((2922339791 ? var_0 : var_0))))));
    var_21 = ((!((min(107, 123)))));
    #pragma endscop
}
