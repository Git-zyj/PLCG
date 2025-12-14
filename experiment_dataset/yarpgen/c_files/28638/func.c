/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28638
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
    var_10 &= ((/* implicit */unsigned long long int) min(((+(((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */int) var_0)))))), (((((((/* implicit */int) var_5)) & (((/* implicit */int) var_6)))) / (-1149251833)))));
    var_11 = ((/* implicit */short) min(((-(var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(523264LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) & (var_2)))) : (((((/* implicit */_Bool) 698205944629129555ULL)) ? (((/* implicit */long long int) var_2)) : (var_7))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) var_5))));
                arr_4 [i_0] [0ULL] [(_Bool)1] = ((/* implicit */unsigned char) var_0);
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)123)), (17748538129080422061ULL))))));
                    var_14 = min((var_4), (min((-64479197), (((/* implicit */int) var_5)))));
                    var_15 ^= ((((/* implicit */_Bool) min((min((17748538129080422060ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))), (((/* implicit */unsigned long long int) var_9))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) 10808407483514992194ULL)) ? (2684770883U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) -967815506204499763LL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */long long int) ((var_3) >> (((-967815506204499763LL) + (967815506204499764LL)))))));
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_8))));
                }
            }
        } 
    } 
}
