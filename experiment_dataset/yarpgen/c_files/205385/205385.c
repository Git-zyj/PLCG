/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((111 - -93), (min(var_2, var_11))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_19 = (min(((max(var_7, (2345259479426738956 && -123)))), ((-123 - (((arr_1 [i_0]) ^ (arr_1 [i_0])))))));
                            arr_9 [i_0] [i_0] [i_2] = (((((max(1, 230)))) < (max((arr_1 [i_0 - 3]), (arr_7 [i_3] [i_1 + 1] [i_0 + 3] [i_0])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_20 = (min((max(26, 26)), ((min((min(-111, var_17)), ((((arr_6 [6] [i_4] [i_1 - 1] [2]) && -123))))))));
                            var_21 = ((max((min(27, -117)), ((((-9223372036854775807 - 1) - -30318))))) ^ (min((min(17113292897063240381, 1)), ((((arr_13 [i_0] [5] [5] [i_5] [i_5]) <= 26))))));
                            var_22 = (max(((((max(2143057739, -30318))) * (min(var_14, var_9)))), ((min(6, (max(var_8, 13357)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
