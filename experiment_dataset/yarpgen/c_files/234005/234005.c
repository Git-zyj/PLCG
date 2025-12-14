/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((min((5 > 66), ((var_4 ? var_10 : (arr_0 [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_1] = (arr_5 [i_0] [i_1]);
                            arr_13 [i_0] [i_1] = (-37 & var_9);
                        }
                    }
                }
                arr_14 [10] [i_1] = (((((224 ? 78 : -255))) ? var_4 : 125));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 13;i_5 += 1)
        {
            {
                arr_19 [i_4] = (min(((-(((!(arr_16 [i_4])))))), ((((var_8 ^ 172) || (var_7 / 168))))));
                var_11 = (max(var_11, (((~((((max(var_7, var_10)) != var_10))))))));
            }
        }
    }
    var_12 = var_1;
    var_13 = ((var_9 <= (var_5 ^ 8604178628432308950)));
    var_14 = (min((((((309605 ? var_2 : var_5)) | (var_9 || 2344540658)))), ((101 ? 56275 : 8604178628432308950))));
    #pragma endscop
}
