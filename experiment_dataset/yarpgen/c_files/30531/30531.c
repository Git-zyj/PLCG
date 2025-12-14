/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (max((max((min(var_14, -4857890191697054915)), (min(var_7, var_15)))), (max(-4857890191697054915, (min(4857890191697054908, 4857890191697054914))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max((max(-4857890191697054915, 16404758442593699347)), ((min((min(var_14, var_6)), (max(-4857890191697054915, (-2147483647 - 1))))))));
                var_18 = (max((min((max(4857890191697054914, 1)), (max(0, -4857890191697054921)))), (max(((min(2147483641, 19384))), (max(4857890191697054908, (arr_2 [i_0] [i_0])))))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_19 = (max(-4857890191697054915, 3358714222683764947));
                    var_20 = (min((max(((max(var_9, var_16))), (min(33776997205278720, 9223372036854775807)))), (min((max(12872162133195722722, 18412967076504272875)), ((max(-4857890191697054908, var_6)))))));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_21 = (max((max((max(-1, 33776997205278720)), (min(var_2, var_6)))), ((min((max(var_12, var_0)), (max((arr_1 [i_0 + 1]), var_3)))))));
                    var_22 = (max(var_22, ((max((max(((min(64305, (arr_3 [2] [i_1 - 2] [i_3])))), (min(19179, (-9223372036854775807 - 1))))), ((min(((max(0, var_8))), (min(var_12, (arr_8 [i_0] [2] [i_0] [2])))))))))));
                    var_23 = (max(((max((min(4857890191697054907, 64315)), (max(var_5, (arr_0 [7])))))), (min((max((arr_11 [i_3] [i_3] [i_1 + 2] [i_0]), 14178414036403259399)), (min((arr_9 [i_0 - 1] [i_3] [4] [7]), (arr_10 [8] [i_1])))))));
                    arr_12 [i_0] = max((max((min((arr_7 [i_0] [1] [i_3] [i_0 - 1]), 8202998486492065511)), (max(var_7, (arr_11 [i_0] [i_1] [i_3] [i_0]))))), (min(((max((arr_1 [i_0 + 2]), 51))), (max(4857890191697054914, var_5)))));

                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 12;i_4 += 1)
                    {
                        var_24 = 1209;
                        var_25 = 37924;
                        var_26 = 1;
                        var_27 = 51;
                    }
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        var_28 = (max((max(((max((arr_6 [i_3]), (arr_6 [i_1])))), (max(4294967295, -7320907794776401173)))), ((max(((min((arr_11 [i_0] [i_1] [i_3] [i_3]), (arr_2 [i_0] [i_0])))), (min(var_8, var_5)))))));
                        var_29 = (max((min(33776997205278720, (min(1205188911834318619, 4857890191697054908)))), ((max(((min(var_9, var_10))), (max(var_0, var_6)))))));
                        var_30 = (max((max(((max(var_5, (arr_16 [i_0])))), (min(18446744073709551615, -9187056088457057338)))), ((max(((min(51, (arr_11 [i_5 + 4] [9] [i_5] [i_5])))), (max(1, var_4)))))));
                        arr_19 [i_0] [i_1 + 3] [i_0] [i_5] [i_0] = (max((max(18412967076504272895, 40652)), ((max((min(var_9, var_7)), (max(var_9, (arr_0 [i_0 + 1]))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
