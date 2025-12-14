/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2374
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
    for (long long int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 19; i_2 += 3) 
                {
                    for (int i_3 = 4; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */int) min((arr_10 [11] [i_0] [i_0] [i_0]), (min((arr_10 [18ULL] [i_0] [i_0] [18ULL]), (arr_10 [2ULL] [i_0] [i_0] [i_1 + 1])))));
                            var_16 = ((/* implicit */unsigned char) ((((unsigned int) min((134201344ULL), (((/* implicit */unsigned long long int) var_11))))) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */unsigned short) (+((+(((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0])))))))));
                var_17 = ((/* implicit */int) 9223372036854775807LL);
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (-9223372036854775807LL - 1LL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            {
                var_19 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_11)), (min((((/* implicit */unsigned long long int) arr_15 [i_4 + 4])), (((((/* implicit */_Bool) (short)6654)) ? (arr_13 [(unsigned short)11] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                arr_20 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-28889)) : (((/* implicit */int) var_14))));
            }
        } 
    } 
    var_20 = ((((/* implicit */int) var_14)) * (((/* implicit */int) var_7)));
    var_21 = ((((/* implicit */_Bool) max((-9223372036854775807LL), (((/* implicit */long long int) (unsigned char)105))))) ? (min((((/* implicit */long long int) (unsigned char)105)), (6074471658297564317LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_7))))));
}
