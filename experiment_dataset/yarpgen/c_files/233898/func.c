/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233898
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (6045739105539346298ULL) : (((/* implicit */unsigned long long int) var_1))));
    var_16 = ((/* implicit */signed char) ((7927560769857170789ULL) + (((/* implicit */unsigned long long int) ((2869764792169244993LL) ^ (-8608742661524421991LL))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) var_10))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_17 = ((((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)1984)) ? (((/* implicit */int) (unsigned short)23339)) : (((/* implicit */int) (signed char)18))))))) <= ((~(9223372036854775805LL))));
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_3] &= ((/* implicit */signed char) arr_17 [i_0] [i_0] [i_2] [i_0] [i_4 - 2]);
                                var_18 += ((/* implicit */short) (~((-(((/* implicit */int) var_4))))));
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) var_0))) | (-8225671574031388103LL)))))) ? (var_7) : (((/* implicit */long long int) var_11))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_13 [i_0] [i_0] [i_0] [i_0]) - (8225671574031388103LL)))) ? (-8728229664333785703LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) var_3)) : (min((((/* implicit */int) ((unsigned short) -8728229664333785703LL))), (((((/* implicit */int) arr_0 [i_0])) << (((((-7521285990211777133LL) + (7521285990211777157LL))) - (18LL)))))))));
                            }
                        } 
                    } 
                    var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_14), (-8728229664333785714LL))) <= (((/* implicit */long long int) ((/* implicit */int) ((short) 0U)))))))) + (max((((/* implicit */unsigned long long int) (+(2492687574U)))), (((unsigned long long int) arr_19 [i_0])))));
                }
            } 
        } 
    } 
}
