/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_16);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 *= max((max(((8053091333400216167 ? 14792710815827363063 : (arr_10 [7] [1] [i_2] [i_3]))), (((59 ? 111723455 : (arr_9 [8] [i_1])))))), (arr_3 [i_0 - 3]));
                            arr_13 [i_0] [7] [i_1] [i_2] [i_3] = (((((((0 & (arr_11 [i_2] [i_1] [i_1])))) ? (((-(arr_1 [i_0])))) : (min(-6945891520340705364, 14792710815827363063)))) < ((((var_15 / -8704953270557814679) & (arr_0 [i_1 + 2] [i_0 - 2]))))));
                            var_19 = min((((!(3654033257882188552 > 0)))), ((3654033257882188553 << (((3654033257882188553 + 2251799780130816) - 3656285057662319308)))));
                        }
                    }
                }
                var_20 = (max(var_20, ((((((((!(arr_3 [i_0])))))) ? (((arr_0 [i_0 + 2] [i_1 + 1]) * 14792710815827363068)) : ((max((~var_8), (arr_0 [i_0 + 1] [i_1 + 2])))))))));
                arr_14 [i_0] = var_14;
            }
        }
    }
    var_21 = (((111723455 | (14792710815827363050 >> 1))));
    #pragma endscop
}
