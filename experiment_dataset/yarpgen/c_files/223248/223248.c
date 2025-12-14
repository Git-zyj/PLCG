/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((-3084520362043876877 ? var_3 : (!var_2))) <= (((-((3084520362043876863 ? var_1 : -3084520362043876893)))))));
    var_16 |= ((((((max(7623, var_12))) ? (var_5 * -60) : ((max(-32, -118))))) > -var_0));
    var_17 = ((var_5 * (((var_8 || ((min(var_8, var_6))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_18 ^= (3084520362043876863 / 9679);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_19 = (min(((max((arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2]), (arr_7 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_2])))), (((-14375 + 2147483647) << (((var_11 + 1110374564970808560) - 19))))));
                            arr_9 [i_1] [i_3] |= (((((23 ? -3084520362043876890 : 29697))) ? ((((arr_2 [i_0]) > var_4))) : (((((-17 ? (arr_0 [i_3]) : (arr_3 [i_0] [i_0])))) ? (((var_12 == (arr_5 [i_0] [i_1] [i_2] [i_3])))) : ((var_12 * (arr_1 [i_1])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
