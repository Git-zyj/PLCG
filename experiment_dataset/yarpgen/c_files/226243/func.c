/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226243
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
    var_19 |= ((unsigned long long int) var_10);
    var_20 = ((/* implicit */unsigned char) var_13);
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_21 = (i_0 % 2 == 0) ? ((-(((max((18014398509481728LL), (-8889135905031319446LL))) >> (((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_0 [i_0] [i_2]) : (((/* implicit */unsigned long long int) -12)))) - (15728578783575007069ULL))))))) : ((-(((max((18014398509481728LL), (-8889135905031319446LL))) >> (((((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_0 [i_0] [i_2]) : (((/* implicit */unsigned long long int) -12)))) - (15728578783575007069ULL))) - (10373376015900031163ULL)))))));
                    var_22 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned char) (-(arr_4 [(signed char)9] [i_1]))))), (max((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1])))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (int i_4 = 4; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_23 = ((int) (~(((arr_0 [i_0] [(_Bool)1]) + (((/* implicit */unsigned long long int) -4413130115946818621LL))))));
                                arr_13 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((unsigned char) max((arr_1 [i_0 - 2]), (8378661775581851340LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
