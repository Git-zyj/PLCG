/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23284
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
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -224239474))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((int) ((short) ((((/* implicit */_Bool) arr_3 [i_0] [5] [i_1])) ? (524287) : (((/* implicit */int) (signed char)94)))))))));
                                var_22 *= arr_4 [i_3];
                                arr_13 [i_0 + 1] [i_1] [i_2] [i_0 + 1] [i_4] = ((/* implicit */short) max((((/* implicit */long long int) min((((/* implicit */int) var_15)), (544156544)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7690788323928430043LL)) ? (-1432695305) : (-336757495)))) ? (((((/* implicit */_Bool) arr_3 [0U] [i_0] [i_0])) ? (7690788323928430048LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)122))))) : (((/* implicit */long long int) -1259964409))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((long long int) ((_Bool) arr_12 [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1] [i_1]))))));
                var_24 = ((/* implicit */short) ((int) ((short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_17)) : (-1259964422)))));
                var_25 = ((/* implicit */int) 5408177750600372297ULL);
                var_26 &= max((((((/* implicit */_Bool) (signed char)54)) ? (arr_6 [i_0 + 1] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))), (-2303258833870386736LL));
            }
        } 
    } 
}
