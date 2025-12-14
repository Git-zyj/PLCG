/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_14 ? ((max(((var_0 ? var_18 : var_8)), var_11))) : (((((212 ? var_12 : var_5))) ? var_17 : (var_15 * var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [10] [2] [16] = (arr_1 [i_0]);
                var_21 = (min((((arr_1 [i_0 + 1]) ? var_10 : (arr_3 [i_0] [i_0 + 1]))), (arr_1 [i_0 + 3])));
                var_22 = (((min(32762, 1))) ? (((((2197949513728 ? 123650654383027502 : 1786873856))) ? (((arr_1 [i_0]) ? 123650654383027502 : 65514)) : ((-123650654383027507 ? var_17 : 123650654383027502)))) : ((7532447555304183053 ? 3 : 2518448684)));
                var_23 -= 1776518618;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 7;i_3 += 1)
        {
            {
                arr_12 [8] = ((-((((arr_9 [i_3 - 2] [i_2 + 1]) < (arr_9 [i_3 - 2] [i_2 - 1]))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_24 = ((~((((arr_9 [i_4] [i_5]) && -118)))));
                            var_25 = (1353847797 && 5032);
                        }
                    }
                }
            }
        }
    }
    var_26 = -123650654383027528;
    #pragma endscop
}
