/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32549
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
    var_13 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-4696843825259507522LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_2))))))) ? (((((/* implicit */_Bool) ((-4696843825259507522LL) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (max((-4696843825259507524LL), (-4696843825259507524LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_7)))))) : (((((4696843825259507521LL) | (((/* implicit */long long int) ((/* implicit */int) var_6))))) | (((/* implicit */long long int) ((/* implicit */int) var_5))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) | (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (-4696843825259507524LL)))))) ? ((~(((/* implicit */int) (signed char)-122)))) : (((/* implicit */int) ((_Bool) var_1)))));
        var_14 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) (signed char)-95))))), ((+(((/* implicit */int) (signed char)94)))))))));
        var_15 = ((/* implicit */short) ((unsigned int) ((unsigned short) (~(var_0)))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 4) 
                {
                    {
                        var_16 *= ((/* implicit */unsigned char) max(((_Bool)1), ((!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) (signed char)0)))))))));
                        var_17 += ((/* implicit */unsigned char) 4696843825259507521LL);
                    }
                } 
            } 
        } 
    }
    var_18 = -1LL;
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_8))));
}
