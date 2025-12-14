/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231527
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3340)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)238)))))) : ((-(arr_7 [i_0] [i_2 - 1] [i_2 - 1])))));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) (-((~(((arr_6 [i_0] [i_0] [i_2 - 2]) % (((/* implicit */unsigned long long int) arr_1 [i_1] [i_2 - 2]))))))));
                    var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) ((15245869345394957750ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) (unsigned short)65535))))))))) : (((/* implicit */int) (short)18170))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (((-(var_3))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    var_17 += ((/* implicit */int) ((((/* implicit */_Bool) (~((~(var_5)))))) ? ((~(((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_12))))) : (((/* implicit */unsigned long long int) var_7))));
    var_18 = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))))) * (((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (var_7))) - (1260322737U)))))));
}
