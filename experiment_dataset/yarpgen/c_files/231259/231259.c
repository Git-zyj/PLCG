/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_9;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_19 = ((-(arr_4 [i_0] [i_0 - 1] [i_0 + 1])));
                        var_20 = (((min(1537936643, (arr_2 [i_0 - 1]))) >> ((((((min(var_8, var_13))) ? ((min(var_1, (arr_7 [i_0] [i_1] [i_2] [i_3])))) : ((var_10 ? (arr_10 [i_0] [i_1] [i_2] [i_3] [i_2] [i_2]) : 45882)))) - 149))));
                        var_21 ^= ((~(((arr_9 [i_0] [i_0] [i_0] [2]) ? ((-(arr_2 [i_3]))) : (arr_10 [i_0 - 1] [i_1] [i_2] [i_0 - 1] [i_3] [i_0])))));
                        var_22 = (((((((((arr_4 [i_0] [i_2] [i_3]) | 88))) | 3682524592470072259))) ? (1 > 177) : ((~((2757030655 ? (arr_0 [i_0] [i_2]) : 88))))));
                    }
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        var_23 *= (!(((min(-12858, 1537936643)))));
                        var_24 += 97;
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_17 [i_0 - 2] [8] [i_0] = (((((2757030652 ? (arr_9 [i_0] [i_0 - 2] [9] [i_0]) : ((((arr_3 [i_0] [i_1]) != 31026)))))) || (((2757030652 ? 57743 : (!1947507403))))));
                        var_25 = (min(var_3, var_2));
                    }
                    var_26 = ((184 != (((arr_6 [i_0] [i_1] [i_1] [i_0]) << ((((3386835883 ? 11345076239110087064 : var_0)) - 11345076239110087053))))));
                }
            }
        }
    }
    #pragma endscop
}
