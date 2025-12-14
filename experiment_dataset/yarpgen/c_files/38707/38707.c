/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_10 = (((((((max(-2825149921541568857, 3934311981))) ? ((7635014007375734760 ? var_0 : var_2)) : (!var_1)))) ? 1196379868 : (max((((~(arr_0 [i_2])))), (min(3682396660610763422, var_2))))));
                    arr_7 [i_2] [i_1] [i_2] = (-((-(((arr_2 [i_0] [i_1] [i_2]) ? -1 : (arr_2 [i_0] [i_1] [12]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, ((min((((arr_5 [i_0] [i_2] [i_4] [i_3 + 2]) ? (((-(arr_9 [i_0] [i_0])))) : ((-1617109339 ? 58840 : 7635014007375734780)))), (min((!2), (max(143, 7635014007375734749)))))))));
                                arr_12 [i_0] [i_0] [i_3] [i_3 + 1] [i_4] = ((!((max((((arr_6 [i_0] [i_3] [i_4]) ? var_7 : 48)), ((min(var_3, (arr_3 [12])))))))));
                                arr_13 [i_0] [i_1] [i_0] [i_0] [16] = ((((min(-var_0, (((arr_2 [i_0] [i_2] [i_3]) ? (arr_4 [i_0] [i_1] [i_2] [i_3]) : (arr_4 [i_1] [i_0] [i_2] [i_3 + 1])))))) ? (min((((-(arr_5 [i_0] [i_0] [i_3 + 2] [i_4])))), (min((arr_8 [i_0]), var_5)))) : (((((min(243889312274197836, var_2))) ? (!-2231691814165313135) : var_5)))));
                                var_12 ^= ((((((265017217653647968 ? 11 : 24848)))) ? ((((max((arr_5 [i_0] [i_1] [i_2] [i_3]), (arr_11 [12] [i_1] [i_1] [i_3 - 1])))) ? (min((arr_4 [17] [i_1] [i_1] [1]), (arr_3 [i_4]))) : (((min(19, (arr_6 [i_0] [i_0] [i_2]))))))) : ((((!((min(23, (arr_0 [i_0]))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = (max((max((~2147483647), var_9)), ((((867864910 ? var_5 : var_5))))));
    #pragma endscop
}
