/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20898
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */_Bool) ((signed char) ((signed char) (unsigned char)140)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_17 [15LL] [i_1] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) max((((max((arr_7 [i_0] [i_2] [13U]), (((/* implicit */unsigned long long int) arr_3 [i_3 - 2] [i_1])))) % (((/* implicit */unsigned long long int) var_2)))), (((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3])), (-2135266778)))) - (var_0)))));
                                arr_18 [i_0] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((int) ((((-2135266772) + (2147483647))) >> (((var_11) - (14213282321222636409ULL))))))) == (max((((/* implicit */unsigned long long int) arr_4 [i_0 + 2] [i_3 - 2])), (((arr_12 [i_4] [i_4] [i_3] [i_4]) << (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) + (130)))))))));
                                arr_19 [(signed char)14] [i_4] [i_1] [i_1] [i_1] [i_0] &= ((/* implicit */unsigned short) max(((+(((unsigned long long int) arr_1 [i_0 + 3])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0 + 2] [0U])) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2135266750))))) : ((+(((/* implicit */int) var_4)))))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)62)) : (902792084))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 2; i_5 < 24; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) 2135266787))));
                arr_24 [i_6] = ((/* implicit */unsigned long long int) var_12);
            }
        } 
    } 
}
