/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20921
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                arr_4 [i_0] [(unsigned char)11] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25625))) / (3273299567070329514ULL)))))) | (9050335811593169778LL)));
                var_12 = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)5341))) | (arr_2 [i_1 - 1])))));
                var_13 ^= ((/* implicit */unsigned short) ((min(((-(0ULL))), (((/* implicit */unsigned long long int) (short)-24514)))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) (short)(-32767 - 1))), (arr_0 [i_0])))))))));
                var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(-2105557938)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (-1500041271))) | (((((/* implicit */int) (signed char)84)) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)-17241)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) (unsigned char)247);
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) >= (var_7))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2365)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (3059151201U)))) ? ((~(var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (114688U))))))));
    var_17 = ((/* implicit */long long int) (+(((unsigned long long int) var_5))));
}
