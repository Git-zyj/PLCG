/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38009
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
    var_13 = ((/* implicit */_Bool) (signed char)42);
    var_14 = ((/* implicit */_Bool) var_1);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-43)) && (((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (var_11)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)66))) - (max((((/* implicit */unsigned long long int) 7020740429172923446LL)), (5138152014387716271ULL))))))));
                                var_16 = ((/* implicit */unsigned char) -2147483642);
                                var_17 = ((/* implicit */unsigned int) (!(((var_0) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50559)))))));
                                arr_11 [(short)5] [i_1] [i_2] [(unsigned char)9] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) (signed char)-42);
                            }
                        } 
                    } 
                    arr_12 [i_2] = (unsigned char)252;
                    arr_13 [i_0] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) (+((+(((/* implicit */int) var_7)))))));
                }
            } 
        } 
    } 
}
