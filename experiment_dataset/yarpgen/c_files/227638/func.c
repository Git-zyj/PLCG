/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227638
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
    var_14 |= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)54925))) < (8191LL))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) (~(var_7))))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) var_8)), (arr_5 [15U] [i_1])))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))) : (var_7)))));
                        arr_13 [i_2] [i_1 - 1] [i_1] [1] = ((/* implicit */long long int) var_4);
                        arr_14 [3U] [i_1] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */long long int) ((unsigned short) max((4294967295U), (((/* implicit */unsigned int) ((15036346031313906011ULL) < (15036346031313906011ULL)))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15036346031313906011ULL)))))) >= (15036346031313906011ULL)));
                        arr_17 [i_0] [(signed char)9] [i_2] [i_0] [i_1] = ((/* implicit */long long int) var_9);
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_12))));
                        var_18 *= ((/* implicit */unsigned char) ((unsigned short) ((signed char) arr_10 [i_0] [i_1 - 1] [2] [(unsigned short)6] [i_2] [i_4])));
                        arr_18 [i_0] [i_1] [i_1 - 1] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) max((3410398042395645605ULL), (15036346031313906011ULL)))) ? (((/* implicit */int) ((unsigned short) arr_7 [i_0]))) : (-1475051181))));
                    }
                }
            } 
        } 
    } 
}
