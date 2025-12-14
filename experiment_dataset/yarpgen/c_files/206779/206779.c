/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (var_2 >= -728036323);
    var_12 = ((!((max(var_3, 31)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 ^= ((((((arr_3 [i_1]) ? (arr_3 [i_0]) : (arr_3 [i_0])))) ? ((((-4070118365674597672 && var_6) ? (arr_1 [i_1] [i_0]) : (arr_3 [i_0])))) : ((var_5 ? -4070118365674597667 : (arr_3 [i_0])))));
                arr_5 [i_1] = (max((((!((((arr_1 [i_0] [i_1]) & 10041896689892762427)))))), (arr_4 [3] [i_1] [i_1])));
                var_14 = ((((max(((min((arr_1 [i_0] [i_1]), (arr_2 [i_0] [i_0])))), ((255 ? 224 : 18446744073709551599))))) || (((~-22) && (arr_2 [i_1] [i_0])))));
            }
        }
    }
    var_15 -= ((-((max((!var_5), var_6)))));
    #pragma endscop
}
