/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191849
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_17 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-32579)) + (((/* implicit */int) var_14))))) ? (((((/* implicit */int) (short)252)) >> (((var_15) - (3353644782790185521LL))))) : (((/* implicit */int) ((arr_5 [i_2] [i_2 + 2] [i_2 + 4] [i_2 + 3]) < (3924833454827007869LL))))));
                    arr_7 [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-14908))))))), (((/* implicit */int) ((unsigned char) var_1)))));
                    var_18 = ((/* implicit */unsigned char) min((var_18), ((unsigned char)34)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) 9187343239835811840ULL);
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) (short)-18960))))))));
}
