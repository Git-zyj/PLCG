/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~1);
    var_13 = ((-27177 ? (var_5 % 1) : (((((-1 ? -1065552146 : 1054))) ? ((2147483647 ? 3240959040 : 63354)) : 2237))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (((((min(63298, -2028136015))) ? (~999857901) : ((2237 >> (((-127 - 1) + 149)))))))));
                    var_15 = ((((65535 + ((999857901 ? 40532 : (-2147483647 - 1))))) << (((3616693069299594777 | -217) + 195))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, (max((((149562801 ? 0 : 150634072))), ((min((96 * 1), -8704301490882865021)))))));
                                var_17 = (min(var_17, ((((!(((1 ? 3152749287292182829 : 37)))))))));
                            }
                        }
                    }
                    var_18 = (max(var_18, 98));
                }
            }
        }
    }
    var_19 = (!1);
    #pragma endscop
}
