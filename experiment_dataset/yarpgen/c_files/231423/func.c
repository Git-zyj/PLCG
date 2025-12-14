/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231423
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
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))));
    var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) 5345680440374913029LL))))) ? (var_16) : (var_1)))) : (((unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)177)))))));
    var_22 = ((/* implicit */long long int) ((var_12) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)177))))))))));
    var_23 *= ((/* implicit */unsigned char) ((var_0) - (((((unsigned long long int) var_6)) << (((((/* implicit */int) (unsigned char)93)) - (46)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] = (unsigned char)115;
                        arr_10 [7ULL] [i_1] [i_0] [i_3 - 1] = ((/* implicit */unsigned char) var_1);
                        arr_11 [i_0] [(unsigned char)6] [i_1 - 1] [i_0] = ((/* implicit */long long int) ((unsigned long long int) min((arr_4 [i_3 + 2] [i_0] [i_0] [i_1]), (arr_4 [i_1] [i_0] [i_0] [i_0]))));
                    }
                } 
            } 
        } 
        var_24 ^= var_4;
    }
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        var_25 = arr_12 [i_4];
        var_26 = var_10;
    }
}
