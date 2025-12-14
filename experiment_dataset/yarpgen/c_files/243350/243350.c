/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = -78574363;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                arr_7 [i_1] [i_1] [i_2] [i_1] = ((-(arr_5 [i_2] [i_2])));
                arr_8 [i_1] [i_2] = ((1 ? 65535 : 7386779595609618916));
                var_20 = ((!(arr_1 [i_2])));
                arr_9 [i_0] [i_1] [i_1] [i_2] = (!16446499524421234158);
            }
            var_21 = ((arr_6 [i_1]) % 1);
            var_22 = (max(var_22, (arr_3 [i_0])));
            var_23 += ((((((arr_1 [i_1]) ? -19198 : 1224))) ? ((-(arr_5 [i_0] [1]))) : (arr_0 [i_0])));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_12 [i_0] [i_3] = (!4294967273);
            arr_13 [i_0] = ((1206 ? 902439608216158536 : -1224));
            var_24 = ((~(arr_2 [i_3] [i_3])));
            arr_14 [10] [i_3] = (~16446499524421234158);
            arr_15 [i_0] [i_3] [i_3] = (((arr_2 [i_3] [i_3]) - (arr_2 [i_3] [i_3])));
        }
    }
    var_25 = var_13;
    var_26 = ((-var_15 * (min(var_5, (!902439608216158536)))));
    #pragma endscop
}
