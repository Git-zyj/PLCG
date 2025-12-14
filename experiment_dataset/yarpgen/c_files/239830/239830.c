/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = (min(((((-29612 + (arr_8 [i_2] [i_1] [i_1] [i_1]))) < (-9292 | 50))), (((2147483644 | -29625) == (var_7 > 1023)))));
                                var_19 = (min(var_19, ((((((((((var_10 * (arr_1 [i_4] [i_4 - 3])))) && ((max(8191, 7511))))))) / (min((max((arr_9 [i_0]), (arr_7 [i_2] [i_4 + 2]))), (-32743 ^ -29625))))))));
                            }
                        }
                    }
                    var_20 += ((max((max(var_7, 11094810737857283642)), (min((arr_9 [i_0 - 4]), 7519)))) ^ (max((min(var_3, 1)), (min((arr_9 [i_2]), (arr_7 [i_1] [i_2 - 1]))))));
                }
                arr_12 [i_1] [i_0] = (max(((max((1 <= 27743), (max(1, 0))))), (((((-1619971600 - (arr_1 [i_1] [i_0])))) * (((arr_7 [i_0 - 4] [i_0 - 4]) % (arr_11 [i_0] [i_1] [7])))))));
            }
        }
    }
    var_21 = (min(var_21, ((((max(((max(1, 1))), 17)) & ((((var_3 >> (2147483647 - 2147483636))) * (var_2 <= 255))))))));
    var_22 = (min((((((var_2 + 2147483647) << (((var_11 + 33) - 26)))) << (((var_3 % 17) - 3)))), (2 / 1)));
    #pragma endscop
}
