/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242242
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
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned char)73))))) >> ((-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)10]))))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) || (arr_10 [i_1])))) - (((((/* implicit */int) (short)-437)) - (((/* implicit */int) (unsigned short)4797)))))) : (((/* implicit */int) arr_5 [i_0 + 1] [i_4]))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3595870239015227993LL)) ? (((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0]))) : (var_2))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_10)))))))) * (((max((((/* implicit */unsigned long long int) -974042341)), (17544167616044180286ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (-1648214296903143969LL))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) arr_2 [2ULL]))));
                    arr_15 [i_2] [i_1 + 2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (3326908353858741586ULL)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) (~(var_4)));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) var_16))))) % (((((/* implicit */long long int) 4294967295U)) - (-3595870239015227964LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_8)))))) : (-3595870239015227989LL)));
}
