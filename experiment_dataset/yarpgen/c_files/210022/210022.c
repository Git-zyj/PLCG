/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_14 ? ((-(~104))) : 104));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = (104 <= 104);
                    arr_8 [i_2] [i_1] [i_2] = ((((-69 ? (arr_3 [i_2 - 2] [i_2 - 2] [i_2]) : var_10)) + (-1711361278 % 2147483636)));
                    var_18 = (arr_2 [i_0]);
                    arr_9 [i_0] [1] |= (((min(((max(-1413037254702140532, 67))), ((11 >> (((arr_4 [i_0]) - 895688031))))))) ? (arr_3 [i_2 + 1] [i_2 - 3] [i_2]) : var_13);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                arr_14 [i_3] [i_3] = (((arr_7 [i_4]) ? (min((min(1057399543, 101)), -var_8)) : ((((arr_13 [i_3 + 2] [i_3 - 3] [i_3 - 3]) >= (arr_1 [i_3 + 1] [i_3 - 1]))))));
                arr_15 [i_4] = ((((((9573998167034085348 ? 1413037254702140522 : (arr_2 [i_4]))) < var_6)) ? -var_12 : (arr_13 [i_3] [i_3] [3])));
            }
        }
    }
    var_19 = ((max(var_11, -105)));
    #pragma endscop
}
