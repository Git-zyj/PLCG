/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209270
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
    var_18 |= ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned int) (-(-1))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) (((_Bool)1) ? (31) : (31)));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */short) (~(((min((((/* implicit */int) (_Bool)1)), (var_5))) % (31)))));
                            var_20 = max((((((/* implicit */int) var_16)) << (((/* implicit */int) ((((/* implicit */long long int) -47)) == (-7919044072458845001LL)))))), (((/* implicit */int) (((~(((/* implicit */int) (short)6064)))) >= (((((/* implicit */_Bool) (short)-6064)) ? (arr_0 [i_0]) : (((/* implicit */int) var_11))))))));
                            var_21 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (0ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)255)), (4294967295U)))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (-8704290912839965867LL))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (-7919044072458845001LL))))))));
                        }
                    } 
                } 
                var_22 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (((~(((/* implicit */int) (signed char)29)))) >= ((~(((/* implicit */int) (short)-6073)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((-((((_Bool)1) ? (((/* implicit */unsigned int) -32)) : (var_13))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -32)) ? (((/* implicit */int) (_Bool)1)) : (var_12)))) ? (((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */int) (short)6058)))) : (((/* implicit */int) var_14)))))));
}
