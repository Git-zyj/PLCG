/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5157
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
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? ((+(((arr_1 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U))))) : (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)64916)) && ((_Bool)1)))), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)64925)) : (((/* implicit */int) var_9))))))))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 4; i_4 < 12; i_4 += 4) 
                        {
                            arr_13 [i_2] = ((/* implicit */unsigned short) (((_Bool)1) ? (max((18ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)14), ((unsigned char)241)))))));
                            var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)24156)) ? (1387980100U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                        }
                        arr_14 [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((short) arr_4 [i_0] [i_1] [i_2])));
                        var_12 *= max((14667595576153138488ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967285U)) ? (((/* implicit */int) (unsigned short)14859)) : (2147483647)))));
                    }
                    for (short i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2030335256U)) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 2])) : (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)57297))))))) > (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1]))) : (1207013857613109612ULL)))));
                        arr_18 [i_0 - 2] [(signed char)5] [i_2] [i_5] = ((/* implicit */short) (unsigned char)22);
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((min((((/* implicit */int) (unsigned short)12977)), (((((/* implicit */_Bool) (unsigned short)49155)) ? (((/* implicit */int) (unsigned short)36945)) : (((/* implicit */int) (signed char)97)))))) - (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_3 [(_Bool)1])) & (((/* implicit */int) var_7)))))))))));
                    }
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((17239730216096442000ULL), (((/* implicit */unsigned long long int) 2147483645))))) ? ((-(((/* implicit */int) min((var_6), ((short)-22761)))))) : (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) var_4))))));
}
