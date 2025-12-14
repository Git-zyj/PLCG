/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194311
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
    var_19 = ((/* implicit */_Bool) var_16);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_20 *= ((/* implicit */short) max((min((((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))), (arr_0 [i_0 - 1]))), (((/* implicit */unsigned int) var_7))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 12716008035890777269ULL))))) >> (((/* implicit */int) var_5))));
        arr_4 [i_0] [i_0] = var_17;
        var_21 = ((/* implicit */unsigned int) ((_Bool) var_8));
    }
    for (unsigned int i_1 = 2; i_1 < 17; i_1 += 4) 
    {
        var_22 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((long long int) arr_0 [i_1]))))), (((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? (((((/* implicit */_Bool) 12716008035890777255ULL)) ? (12716008035890777269ULL) : (((/* implicit */unsigned long long int) 3696237351U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_12), (((/* implicit */short) (unsigned char)128))))))))));
        arr_7 [i_1] = ((/* implicit */long long int) max((2288605098U), (67108863U)));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_23 *= ((/* implicit */_Bool) arr_1 [i_2] [i_2]);
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)12034)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)17682), (((/* implicit */unsigned short) ((((/* implicit */int) (short)127)) == (((/* implicit */int) arr_1 [i_2] [i_2])))))))))));
        var_25 = arr_5 [i_2] [i_2];
        arr_12 [i_2] [i_2] = ((/* implicit */signed char) var_7);
    }
    var_26 = ((/* implicit */unsigned int) (unsigned char)130);
    var_27 = ((/* implicit */short) max((min((((((/* implicit */int) (short)-32763)) - (((/* implicit */int) (unsigned short)65535)))), (((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_6)))))), (((/* implicit */int) ((signed char) (+(var_13)))))));
}
