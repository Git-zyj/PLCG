/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223230
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) var_4);
                var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_4 [i_0])), (((unsigned long long int) arr_4 [0ULL]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        for (unsigned int i_3 = 2; i_3 < 16; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */int) var_13);
                            var_21 = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) == (2142608111))) ? (((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3] [(_Bool)1] [i_3 + 1] [i_3 - 2] [i_4]))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (17573394998645519249ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7)))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) 600954811)) ? (3279813142867433395ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)127))))));
                var_23 = ((/* implicit */signed char) ((_Bool) max((var_3), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_15)), (var_11)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) (~(min((((/* implicit */unsigned int) var_2)), (2106974948U)))));
}
