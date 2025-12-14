/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(var_1, ((min(53707, var_3))))) % ((max(var_3, var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1 + 3] = (((max(895034056808916559, (var_8 == var_15))) <= var_9));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((((min((arr_8 [i_0] [i_1 + 2] [12] [i_2] [i_3] [i_3]), 18104)))))));
                            var_19 = max((min(12373, 5498976395021770670)), (max((arr_9 [i_0] [i_0] [i_0] [i_0]), (min(var_15, 20837)))));
                            arr_10 [i_0] [i_1] [i_3] [i_1] = (max((max((18104 * 5498976395021770665), 15481685347367617309)), (max((arr_1 [i_0]), (arr_0 [i_2])))));
                            arr_11 [i_0] [i_1] [i_1] [i_2 + 2] [i_3] = ((7185457487371009726 > (((min((!1989), -23761))))));
                        }
                    }
                }
                arr_12 [i_1] = ((!(((min(137, 65398))))));
                arr_13 [i_1] [i_0] = min((min((max(18333220698567941980, (arr_9 [i_1 + 2] [i_0] [i_0] [i_0]))), var_5)), (15529 || 152));
                arr_14 [i_1] = (min(((max(47022, 12135348008239648813))), ((((min(15536969826526419425, (arr_2 [i_0] [i_1] [i_0]))) <= var_5)))));
            }
        }
    }
    var_20 = max(((~(max(3718679231624328417, var_7)))), ((-(5868235594151303225 - 8667290344315415622))));
    #pragma endscop
}
