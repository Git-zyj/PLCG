/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53970
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned int) (-2147483647 - 1));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] = var_5;
                                arr_14 [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */signed char) ((((7016347309759197386ULL) > (((/* implicit */unsigned long long int) -823479306)))) || (((/* implicit */_Bool) (-(((long long int) arr_0 [4LL])))))));
                                arr_15 [3LL] [i_1] [i_2] [i_1] [i_4 + 2] [(_Bool)1] [i_3 + 1] = ((/* implicit */unsigned short) arr_6 [i_2]);
                            }
                        } 
                    } 
                } 
                var_11 ^= ((/* implicit */short) ((int) (~(((/* implicit */int) arr_1 [i_0])))));
                var_12 = ((((((/* implicit */_Bool) -2462131682610874486LL)) || (((/* implicit */_Bool) 7016347309759197386ULL)))) || (((/* implicit */_Bool) ((int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_1] [6]))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((int) 7016347309759197376ULL))));
    var_14 = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
}
