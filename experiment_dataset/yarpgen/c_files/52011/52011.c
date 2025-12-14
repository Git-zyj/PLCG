/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_15 &= ((((((arr_4 [i_0] [i_1]) ? (arr_4 [i_0] [1]) : 5))) ? (max(var_11, (arr_4 [i_0] [i_1 + 1]))) : ((((arr_4 [i_1] [i_1]) ? (arr_4 [i_0] [i_1]) : 192)))));
                arr_6 [i_0] [i_0] [i_0] = ((65519 > ((var_5 | (((max((arr_5 [i_0] [i_1] [i_1]), var_10))))))));
                arr_7 [3] [1] [3] &= (((((220325951 ? -601161529637722975 : (-2147483647 - 1)))) ? (max((arr_3 [i_0] [i_1 - 2] [i_0]), (((arr_3 [i_0] [i_1] [i_0]) ^ (arr_2 [i_0]))))) : (~41183)));
            }
        }
    }
    var_16 = (((((var_10 & var_5) != ((26254 ? 13650383295196912218 : 1278646835)))) ? (((130 >> (var_14 + 16146)))) : (max(var_1, (max(12475802596820082600, 27841))))));
    #pragma endscop
}
