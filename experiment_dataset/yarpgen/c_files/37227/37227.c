/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(~1004597843468507078)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = (max(((max(0, 2187702372))), ((max(0, ((min((arr_1 [11] [i_0]), (arr_0 [i_0] [i_0])))))))));
        var_13 = (max((max(((~(arr_0 [i_0] [i_0]))), (arr_0 [i_0] [i_0]))), ((-((min(21, 2)))))));
        var_14 = (min(var_14, (((!((!(~19))))))));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_15 = (max((max(((-(arr_1 [i_1] [i_2]))), (!21))), ((max(21, ((max(1, 1))))))));
            arr_6 [i_1] = (!((max(((min(137, 242))), (max(15545, 22))))));

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_16 |= (min(1, 48));
                var_17 = (min((min((min((arr_5 [i_1 - 1]), 130023424)), 0)), ((min((max((arr_5 [i_2]), var_3)), (max((arr_3 [i_3]), var_2)))))));
            }
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    arr_15 [i_1 + 1] [6] [i_2] [i_4] [i_2] [12] = (min((min(72057594037403648, 0)), ((((min(1, 13307)))))));
                    arr_16 [i_5] [i_4] [4] [i_1] [i_1] = (!254);
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    var_18 = min((max((max(var_9, (arr_17 [i_6] [i_4] [i_2] [i_1]))), (!253))), ((((min(var_10, -46))))));
                    arr_19 [i_1 - 1] [11] [i_4] [i_6] [i_4] [i_4] &= (max((max(4202735058213057144, 236)), ((-(min((arr_9 [i_1]), (arr_14 [i_1] [i_4] [i_4] [i_6] [i_2] [i_2])))))));

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_19 = (max(var_19, (~4)));
                        var_20 = (max(var_20, ((min(10, -170303276)))));
                        var_21 = (min((min(((min((arr_14 [i_1] [i_2] [i_4] [i_6] [i_6] [i_7]), (arr_7 [i_1] [i_1] [i_1 - 1] [i_1])))), 4976367504005130219)), ((max(-15, 253)))));
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_22 = (max(((((!(arr_23 [i_8] [i_6] [i_4] [i_2] [i_2] [i_1]))))), ((~((max(var_10, var_4)))))));
                        arr_24 [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1] = 140;
                        arr_25 [i_6] [i_2] [i_2] = (max((max(-97, (max(96, 594452542)))), (max(((min(48454, var_7))), 65396))));
                        var_23 = (min((min((max(var_0, var_1)), (max(2, 39526)))), (max(((max((arr_18 [i_4] [i_4] [i_4] [i_4]), 1))), (min(65525, 65525))))));
                        var_24 = (max(((((min(var_6, (arr_22 [i_1] [i_1] [i_1] [i_1] [i_1])))))), (max(((~(arr_4 [i_2] [i_6]))), ((min((arr_17 [i_4] [i_4] [i_4] [i_6]), (arr_5 [1]))))))));
                    }
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_25 = (max((((!((max(var_7, 1027058661)))))), (min((!29425), (max((arr_8 [i_1] [i_2] [i_4] [i_9]), 8823178452056491227))))));
                    arr_28 [i_1 + 1] [i_2] [i_4] [i_4] = ((!(~1590477507)));
                    arr_29 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1] = (max(((min((max((arr_13 [i_1 + 1] [i_2] [i_1 + 1]), (arr_27 [i_1] [i_2] [i_4] [i_9]))), ((max(1, 253)))))), (+-11475663620611562059)));
                }
                var_26 = ((~((~(min(5822372821500540108, 1))))));
                var_27 *= (~-11068);
            }
            var_28 = -15;
        }
        var_29 = (max(var_29, ((min(((min(240, 32767))), 7601706621645806106)))));
    }
    var_30 = min(43008, 5482);
    #pragma endscop
}
