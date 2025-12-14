/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38390
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
    var_18 = var_6;
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 6; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (signed char)-49))))));
                                var_20 = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-8673673953675283660LL))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)119)) / (((/* implicit */int) (signed char)-95))))))), (((long long int) min((30397437498331166LL), (((/* implicit */long long int) (unsigned char)122)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned char) ((((long long int) (signed char)-31)) != (((/* implicit */long long int) (+(((/* implicit */int) var_15)))))))), (min((arr_9 [i_0 + 1] [i_0 + 4] [i_0 + 4]), (arr_9 [i_0 + 2] [i_0 + 1] [i_0 + 2])))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 8; i_5 += 2) 
                    {
                        for (signed char i_6 = 2; i_6 < 7; i_6 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0] [i_0])) & (((/* implicit */int) arr_15 [i_0] [i_0]))))) ? (((/* implicit */int) min(((unsigned char)64), (((/* implicit */unsigned char) (signed char)-74))))) : (((((/* implicit */int) (unsigned char)167)) | (((/* implicit */int) arr_15 [i_0] [i_6 + 3]))))));
                                var_23 = ((/* implicit */signed char) min((var_23), (arr_10 [i_2] [i_2] [i_6 - 2])));
                                var_24 = ((/* implicit */long long int) var_1);
                                arr_16 [i_0 + 2] [i_0] [i_0 + 3] [i_0 + 3] [i_0] = min((((/* implicit */unsigned char) ((signed char) arr_3 [i_0]))), (arr_5 [i_1] [i_1] [i_0 + 3]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 -= ((/* implicit */long long int) min(((signed char)18), ((signed char)-119)));
}
