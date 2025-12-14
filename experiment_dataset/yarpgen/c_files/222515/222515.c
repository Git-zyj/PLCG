/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1 + 2] [17] = 13233;
                var_18 = 7168;
                arr_6 [i_1] = -273558042;
                var_19 += var_17;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_20 = (min((min(273261950, -13256)), 60));

                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        var_21 |= (min(13246, 13255));
                        var_22 = ((249 ? ((((((0 ^ -104) + 9223372036854775807)) << (var_3 - 53639)))) : 3592453417));
                        var_23 = ((-((13247 ? 13255 : 13446581255980959561))));
                    }
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        arr_21 [i_2] [i_3] = (min(18446744073709551615, 1152921504606846976));
                        var_24 = (min(((((1874854772 + 724799847) > -13248))), (~13247)));
                        var_25 = 270505031;
                        var_26 = ((-13234 ? 1056445156 : -2221807155555187902));
                    }
                    var_27 = ((((32688 >> (13255 - 13239))) % 13256));
                }
            }
        }
    }
    #pragma endscop
}
