/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (((min(511, var_11)) / ((~((min(var_4, var_9)))))));
    var_13 = ((1 - (((~(!var_6))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = (((((-0 - (17921931801411126832 <= 252)))) ? ((((((17921931801411126816 || (arr_0 [i_0]))) && (arr_0 [i_0]))))) : (max(((((arr_0 [i_0]) <= (arr_0 [9])))), ((16312661063679864862 ? 255 : 17921931801411126827))))));
        var_15 = (max(var_15, ((min((arr_1 [i_0] [i_0]), (arr_0 [i_0]))))));
        var_16 = (((((arr_0 [i_0]) <= (arr_1 [i_0] [i_0]))) ? (((248 ? (arr_0 [i_0]) : (arr_1 [i_0] [1])))) : (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_17 = (+(((9086303999262729006 ^ 9086303999262729006) ? (((~(arr_0 [i_1])))) : (min(7905152592446712635, 10541591481262838977)))));
        var_18 = (arr_2 [3]);
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_2] [i_4] [i_5 - 1] [i_6] [4] = 0;
                                var_19 = (min((~9360440074446822609), ((min((10 > 1), (!10541591481262838981))))));
                            }
                        }
                    }
                    var_20 ^= (arr_12 [i_3] [16] [i_3] [i_3]);
                }
            }
        }
    }
    #pragma endscop
}
