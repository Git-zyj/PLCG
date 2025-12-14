/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [10] [i_1] |= (min(((~(((arr_1 [6] [2]) ? 1036187951 : 13786184310684849985)))), (((27150 ? 994910221430114567 : 994910221430114586)))));
                var_18 = (max(var_18, ((var_17 ^ (arr_0 [0] [i_1])))));
                arr_7 [i_0] [i_1] = (((((-994910221430114590 - (arr_3 [8])))) ? (-994910221430114567 >= 994910221430114567) : ((((~994910221430114577) || -994910221430114567)))));
            }
        }
    }
    var_19 = (-994910221430114567 == 994910221430114567);
    #pragma endscop
}
