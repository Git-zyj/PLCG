/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = (max((arr_3 [i_0 - 1]), ((max(((!(arr_4 [i_0 - 1] [12] [12]))), (var_6 <= 566257832038131174))))));
                    var_14 = (min(var_14, ((max(((-566257832038131174 ? 566257832038131174 : 0)), (((((max((arr_6 [i_0 + 1]), 1))) || (((-(arr_3 [i_2]))))))))))));
                    var_15 = ((((((var_0 ? var_3 : 18446744073709551615)) & (arr_3 [i_0 - 1]))) + ((((arr_6 [i_0 - 1]) ^ -566257832038131175)))));
                }
            }
        }
    }
    var_16 = ((31562 ? (((182 ? var_10 : (97 != 1613002384)))) : (~-5528814027969003376)));
    var_17 *= (!64638916);
    #pragma endscop
}
