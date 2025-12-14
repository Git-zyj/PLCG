/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_19 = (!-870687415311485427);

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_20 = ((~((((arr_3 [i_0 - 1]) == (arr_3 [i_0 - 1]))))));
            var_21 *= (min(8496, 870687415311485426));
            arr_6 [i_0 - 2] [i_1] = (min(((min(8955792475524146785, (arr_1 [i_0] [i_1])))), 0));
            var_22 = (max((arr_4 [i_0 - 3] [i_0 + 1] [i_0 - 3]), (max(1, 9223372036854775807))));
            arr_7 [i_0] [1] [10] = (min((max((arr_5 [i_0 + 1]), (min(var_7, 3147057281)))), ((-(max(1, 1394455462))))));
        }
        var_23 = 25061;
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_24 = var_8;
                    var_25 *= (((max(1756816376717374275, 2485574141)) & 1394455462));
                    var_26 = (((min((1 * var_12), ((min(0, 2147483647))))) / var_1));
                    var_27 = (min(var_27, ((max(var_5, var_0)))));
                }
            }
        }
    }
    #pragma endscop
}
