/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = (max(((min((max(-1, var_9)), ((max(172, 178)))))), (max(((max(53, var_6))), (max(55595, -4922527496866029911))))));
                var_14 -= (min((min((min((arr_6 [1]), (arr_4 [i_0] [i_0 - 3] [i_0]))), ((max((arr_6 [i_1]), (arr_5 [i_0] [4] [5])))))), (min(11346135234849372517, -1897166220))));

                for (int i_2 = 1; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0 + 2] = (max((max((max(0, (arr_6 [i_0]))), (min(172, var_10)))), (max(((min(var_4, -1897166220))), (max((arr_4 [i_0] [i_1] [i_2]), -1897166220))))));
                    arr_10 [i_0] [i_0] [i_0] [i_2] = (max((min((max(3, var_10)), ((min(var_12, var_8))))), ((max((min(3361268326, 55595)), -1897166220)))));
                }
                for (int i_3 = 1; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] [4] = (min(((max(((min(var_0, 3361268326))), (min(1, 0))))), (max(((min(var_4, var_7))), (min(1270799578, var_10))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                arr_21 [i_0] [i_1] [i_3 + 3] [i_4] [i_5] = (min((min((max((arr_12 [12] [i_3 + 2] [i_5]), 3361268317)), (min(var_4, (arr_5 [i_0 + 1] [i_0] [i_0]))))), (max((min(93, 933698985)), (min((arr_5 [i_0 - 3] [i_3 + 1] [i_3]), var_0))))));
                                var_15 ^= (min(((min((max(var_0, 39189)), ((min(150, var_6)))))), (min(((max(1048320, 163))), (min(106, (arr_11 [5] [i_5])))))));
                            }
                        }
                    }
                }
                for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_30 [i_0] [i_0] [i_6 + 3] [i_8] = (max((max((max(var_4, var_7)), (max(var_12, 933698979)))), ((max((max(24700, var_6)), ((max((arr_19 [i_7] [1]), 7))))))));
                                arr_31 [10] [8] [4] = (max(((max(((max(131, var_2))), (min(var_12, (arr_11 [7] [i_8])))))), (max((max((arr_24 [i_1] [i_6 - 1] [3] [i_8]), var_8)), ((max((arr_25 [i_0] [10] [8] [5] [i_8] [i_8]), var_2)))))));
                                arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = max(((max((max(768174806, var_6)), ((min(var_2, 172)))))), (min((min((-9223372036854775807 - 1), (arr_8 [i_0] [i_1] [i_7] [i_8]))), ((max(var_12, 1277))))));
                            }
                        }
                    }
                    arr_33 [i_6 + 1] [5] [i_0 + 3] = (max(((min(-1798648516, -6891010018176035735))), (max((max(var_8, (arr_7 [i_0] [10] [4] [4]))), (max(-7272656620651282733, 17705088406358313959))))));
                    arr_34 [1] [i_1] [9] = (max(((max((max((arr_20 [i_1] [i_1] [13] [i_1] [i_1] [i_1] [12]), var_8)), (max(var_9, var_5))))), (min((min(13182537638992917482, var_0)), ((min(var_6, var_4)))))));
                }
                arr_35 [i_0 + 3] = min(((max((min(var_0, var_4)), (min(var_12, var_1))))), (min(((max(var_3, (arr_17 [10] [10] [i_0] [9] [i_0 + 3])))), (max((arr_7 [i_0 + 3] [i_1] [i_0 + 3] [11]), var_3)))));
            }
        }
    }
    var_16 = (min((min((max(var_1, 45548)), (max(var_8, 1)))), (min((max(var_7, 19987)), ((max(180, 16827)))))));
    var_17 = (min(var_17, ((min((max((max(var_8, var_1)), (max(-16827, var_8)))), (min((max(53, var_7)), ((max(var_1, var_2))))))))));
    var_18 = (max(((max((min(var_5, var_3)), ((min(26616, var_0)))))), (max(((min(var_1, 24062))), (max(var_12, 3584))))));
    #pragma endscop
}
