/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (min(-33554424, ((min(32768, 31)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((((((1 ? 8701634442361088404 : (arr_0 [i_0 - 1] [i_0 + 1])))) ? ((((arr_0 [i_0 + 1] [i_0 + 1]) || (arr_0 [i_0 - 1] [i_0 + 1])))) : (((arr_0 [i_0 - 1] [i_0 - 1]) ? 183 : 65535)))))));
                var_18 = (((~16611786457455480324) ^ (((max(1, 240))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_19 = ((var_10 ? 7 : (~var_10)));
                            var_20 = ((((((min(1, 1))) == (1 <= var_11))) ? ((max(((-(arr_4 [i_1]))), (min(-830521297, 1))))) : (arr_0 [i_0] [i_0])));
                            var_21 = 1;
                            var_22 *= (arr_5 [i_0] [1] [i_0] [i_0]);
                            var_23 = (min(var_23, ((max((min(((max(71, 6))), var_1)), (max((arr_3 [i_0]), ((min(690137730, var_10))))))))));
                        }
                    }
                }
            }
        }
    }
    var_24 = 622230756954438970;
    var_25 = 1;
    var_26 = var_3;
    #pragma endscop
}
