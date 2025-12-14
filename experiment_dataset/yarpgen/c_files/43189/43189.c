/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = var_10;
                    var_21 = 16091;
                    arr_7 [i_0] [i_0] [i_1] = (max((((arr_4 [i_1]) ? (-16083 >= -1666310362166723671) : ((min((arr_4 [i_1]), var_16))))), (((((~(arr_6 [i_0] [i_0] [i_0] [i_0])))) ? (57 && var_18) : (((arr_5 [i_0]) ? 25364 : -48))))));
                    arr_8 [i_0] [i_1] [i_0] [i_0] = (((((((-1214121296848307517 + 9223372036854775807) >> (237 - 186))))) <= (((min(8646911284551352320, 4278190080)) | 136326867))));
                }
            }
        }
    }
    #pragma endscop
}
