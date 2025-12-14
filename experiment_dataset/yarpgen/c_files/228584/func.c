/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228584
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 3; i_2 < 21; i_2 += 1) 
                {
                    arr_7 [i_0] [i_1] [i_0] [i_2] = (-(-4532161037316812765LL));
                    arr_8 [6LL] [8ULL] [i_1] [i_0] = ((/* implicit */long long int) ((1507551958U) | (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                    var_16 = ((/* implicit */_Bool) -4532161037316812765LL);
                }
                for (int i_3 = 3; i_3 < 21; i_3 += 1) 
                {
                    arr_11 [i_1] [i_1] [6ULL] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) -5296304021354653153LL)) : (7714671058606412572ULL)));
                    var_17 = min((min((arr_3 [i_0] [i_1] [19U]), (arr_3 [i_1] [i_1] [i_1]))), (((long long int) 10732073015103139036ULL)));
                    var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [(short)9] [(short)9] [9])) ? (var_5) : (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (2026937439)))))) >> (((((((/* implicit */unsigned long long int) 1702606700019553256LL)) - (16362115698679434859ULL))) - (3787235075049669983ULL)))));
                    var_19 &= ((/* implicit */long long int) 2147483647);
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_16 [(_Bool)1] [2ULL] [i_4] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((-3390637531991417074LL) + (9223372036854775807LL))) << (((7714671058606412572ULL) - (7714671058606412572ULL)))))))))));
                    arr_17 [i_4] [i_1] [i_4] = ((/* implicit */int) arr_13 [i_0] [i_0] [i_4]);
                    var_20 -= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (7714671058606412572ULL))))))) == (((((/* implicit */_Bool) 7714671058606412557ULL)) ? ((((_Bool)1) ? (((/* implicit */int) arr_12 [i_1])) : (((/* implicit */int) (short)31)))) : (((/* implicit */int) var_13))))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    arr_22 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_0] [i_1] [13U]))));
                    arr_23 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_5] [(short)16] [i_0])) ? (5305248408432304686LL) : (arr_3 [i_1] [i_0] [i_1])));
                }
                var_21 = ((/* implicit */_Bool) min(((short)-7857), (((/* implicit */short) (!(((/* implicit */_Bool) 10732073015103139044ULL)))))));
                arr_24 [(_Bool)1] &= ((/* implicit */long long int) (-((-(((/* implicit */int) min(((signed char)75), (((/* implicit */signed char) arr_15 [(short)10])))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((-184507280) + (2147483647))) << (((((((/* implicit */int) (signed char)-23)) + (25))) - (2)))));
}
