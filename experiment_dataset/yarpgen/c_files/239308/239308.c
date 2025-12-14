/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2] = max(((max((arr_8 [i_0 - 1] [i_0 - 1]), var_16))), (((arr_8 [i_0 - 1] [i_0 - 1]) ? (arr_8 [i_0 - 1] [i_0 - 1]) : (arr_5 [i_0 - 1] [i_0 - 1]))));
                    var_18 += (max(((890453137 + (min(4631922789322099995, 16)))), -25066));
                    var_19 = (((arr_1 [i_0 - 1] [i_0 - 1]) >> ((((-((201824304 ? 550479568 : 36)))) - 3744487696))));
                }
                for (int i_3 = 3; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    var_20 = (min((arr_5 [i_0 - 1] [i_3 - 2]), (((~(var_10 >= var_11))))));
                    var_21 ^= ((((max((arr_13 [i_1]), (arr_7 [i_0] [1] [i_0] [i_0 - 1])))) ? (((-(arr_3 [i_0] [i_0 - 1])))) : (max(6, var_2))));
                }
                for (int i_4 = 3; i_4 < 10;i_4 += 1) /* same iter space */
                {
                    var_22 = (max(var_22, ((min(62, (((!983085370) ? var_0 : ((min(127, var_0))))))))));
                    arr_16 [i_4] [i_1] [i_0 - 1] = (((((arr_1 [i_0] [6]) <= -37)) ? ((((arr_11 [i_1]) ? (arr_8 [i_0] [i_4]) : (((arr_5 [i_4] [i_4]) ? (-2147483647 - 1) : (arr_12 [i_0] [i_0] [i_0] [i_4])))))) : (max(((max(var_4, 377))), (max(var_5, (arr_11 [i_1])))))));
                    var_23 = ((21 == ((((max(1, 4209321365)) >= (-17395 <= 0))))));
                    var_24 = (min(var_16, ((-((min((arr_7 [5] [i_1] [i_1] [0]), (arr_7 [i_0] [i_0] [3] [i_4]))))))));
                    var_25 = (max(((((arr_1 [i_4 + 1] [i_0 - 1]) + (arr_4 [i_4 + 1] [i_0 - 1])))), (min(((1 ? (arr_3 [i_0] [i_0]) : (arr_11 [i_1]))), (arr_8 [i_0 - 1] [i_4])))));
                }
                var_26 ^= (10513265802950086591 < 4496);
                arr_17 [i_0] = max((max((min((arr_12 [i_0] [i_0] [i_0] [i_1]), var_17)), ((13139740825629794313 ? -1703092102 : 4)))), (arr_7 [i_0] [i_0] [i_0] [i_0]));
                arr_18 [i_1] = (min(((min((arr_1 [i_1] [9]), ((25890 ? var_17 : var_7))))), (((max((arr_13 [i_1]), var_6)) + (arr_3 [i_0 - 1] [i_0 - 1])))));
            }
        }
    }
    var_27 = (max(var_27, (((~(((3349977363550226253 || var_11) ? ((141 ? 38 : var_1)) : ((max(var_9, -70))))))))));
    #pragma endscop
}
