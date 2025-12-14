/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = 39;
                var_13 = ((((!((((arr_2 [i_0]) & 9223372036854775784))))) || ((max((-1828769002 - 32750), (((arr_2 [i_0]) ? 3848290697216 : 3848290697216)))))));
                arr_5 [i_0] [i_1] [i_0] = (min((((!((!(arr_1 [i_0])))))), -50));
                arr_6 [i_0] [i_0] [i_0] = (960877739 >= 97);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                arr_13 [i_3] [i_3] = (((arr_7 [i_3] [5]) ? ((((arr_11 [i_2]) ? (arr_11 [i_2]) : (arr_11 [i_2])))) : (min((arr_12 [i_2] [i_3]), (arr_12 [i_2] [i_3])))));
                arr_14 [i_2] [i_3] = 35;
            }
        }
    }
    #pragma endscop
}
