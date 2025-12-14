/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 65534;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_21 = (arr_1 [i_0]);
        var_22 ^= (~(((arr_0 [i_0 + 1]) << (65523 - 65518))));
        var_23 = ((!(((127 * 0) <= ((var_11 >> (((arr_2 [i_0]) - 2048923269985613836))))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_2] = max((-489181770 || -2147483647), (arr_2 [i_2 + 2]));
                    var_24 = (max(var_24, (arr_5 [i_1] [4] [12] [2])));
                }
            }
        }
        var_25 = ((((((-5354 ^ (-9223372036854775807 - 1))) % (arr_4 [i_0] [i_0]))) * (((arr_4 [i_0 - 1] [i_0 - 1]) ^ (arr_4 [i_0 - 1] [i_0 + 1])))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_26 = (((((arr_12 [i_3]) < (var_16 * 120)))) > ((max((arr_9 [i_4]), (min((arr_3 [i_3] [i_4] [i_3]), var_13))))));
            arr_13 [8] [i_4] = (6994848864847437913 + 1);
        }
        var_27 = (max(var_27, ((max((((((min((arr_0 [18]), (arr_9 [i_3])))) * (arr_10 [8])))), (-9223372036854775807 - 1))))));
    }
    #pragma endscop
}
