/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((!22), (((var_14 || var_16) || ((max(-987, 1)))))));
    var_19 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (max(((35 << (((arr_9 [i_3 + 1] [i_0] [i_3 + 1] [i_1] [i_4]) - 15081)))), (((!(arr_9 [i_3 - 1] [i_0] [i_3 - 1] [i_3] [i_4])))))) : (max(((35 << (((((arr_9 [i_3 + 1] [i_0] [i_3 + 1] [i_1] [i_4]) - 15081)) - 19171)))), (((!(arr_9 [i_3 - 1] [i_0] [i_3 - 1] [i_3] [i_4]))))));
                                var_20 = (min(var_20, ((max((arr_9 [i_4] [2] [12] [2] [i_0]), (((((4 ? -858017723 : -1656872279)) <= var_9))))))));
                                var_21 = ((((((arr_6 [8] [i_3] [i_3 + 1] [i_3 + 1]) ? 2136897375 : 16617502370901741419))) ? (min((arr_6 [i_0] [i_0] [i_3 - 1] [i_3 - 1]), (arr_10 [7] [i_0] [i_3 - 1] [i_3 + 1] [4] [i_3 - 1] [i_4]))) : -120));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_22 += (1337919599 != 858017743);
                                var_23 = ((!((-32756 || (((3337642868 ? (arr_0 [i_0]) : 1)))))));
                                arr_16 [i_0] [i_0] [i_5] [i_6] = (min(((0 + (max(var_17, 77)))), ((+((((arr_12 [i_0] [i_2] [i_5]) == 717760098)))))));
                                var_24 += (max((((min(1073610752, 944919283)) * var_13)), (((var_11 && 1) / -45))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_25 = (min(var_25, -77));
                                arr_23 [i_2] [i_0] [i_2] [i_0] [i_0] = (((((((!var_8) != ((214 ? var_12 : 40)))))) % -3306586270));
                            }
                        }
                    }
                    var_26 = (min((-2147483629 - var_13), (((((arr_8 [i_0] [i_2] [i_1] [1] [i_0] [i_0]) - -40)) - 178))));
                }
            }
        }
    }
    var_27 = (min(var_27, ((max(((max((max(1, var_17)), var_3))), (max(((min(60, var_6))), ((var_3 ? var_14 : -75)))))))));
    #pragma endscop
}
