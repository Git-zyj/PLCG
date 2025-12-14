/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_11 ^= ((((((arr_1 [i_0] [i_1 + 2]) ? 879670500 : 879670528))) ? (((3854721150 ? 1435443074 : 2390510265))) : 6602903701377846059));
                var_12 = ((888097312 ? -879670496 : (879670507 > 3415296768)));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_13 ^= 6;
                    var_14 = (min(var_14, ((((min((arr_8 [i_1 + 1] [i_1 - 1]), (arr_8 [i_1 + 2] [i_1 + 2])))) ? (((((arr_8 [i_1 + 2] [i_1 - 1]) != 2218736387303206434)))) : (arr_8 [i_1 + 3] [i_1 + 1])))));
                    var_15 = (((((-53 ? (arr_6 [i_0] [i_1] [i_0]) : var_5))) ? (((((var_0 ? 63 : -422475143110236118))) ? 5207466479156189194 : ((max((arr_1 [i_2] [i_2]), 879670522))))) : ((((((min((arr_3 [10] [i_0]), 3415296796))) || (arr_6 [i_0] [i_0] [0])))))));
                }
                arr_9 [i_0] = ((((max(((15881341474415219524 >> (3415296800 - 3415296759))), (max(3415296795, 2305843009213693951))))) ? (((arr_2 [i_0]) ? ((((arr_0 [i_1 - 1] [i_0]) - var_9))) : (arr_5 [i_1 - 1] [i_1 - 2] [i_1]))) : (((~(max((arr_0 [i_0] [i_1]), (arr_6 [i_0] [i_0] [i_0]))))))));
            }
        }
    }
    var_16 = 2565402599294332092;
    #pragma endscop
}
