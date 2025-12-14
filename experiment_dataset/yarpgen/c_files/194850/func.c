/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194850
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_10 = max((((/* implicit */int) ((unsigned char) (unsigned short)49152))), (min((((/* implicit */int) var_6)), (var_3))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) var_7);
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (-(((/* implicit */int) var_6)))))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_8 [(unsigned short)1] = ((/* implicit */short) (-(var_0)));
        var_12 = ((/* implicit */int) (((+(((/* implicit */int) var_5)))) > (((/* implicit */int) ((var_0) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
        var_13 ^= ((/* implicit */short) max(((-(min((((/* implicit */int) var_2)), (var_3))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_7))))))))));
    }
    for (signed char i_2 = 3; i_2 < 14; i_2 += 4) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) << (((((/* implicit */int) var_8)) >> (((var_9) - (10051098469342112354ULL)))))));
        var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */unsigned long long int) var_8)), (var_0))))), (max((var_0), (((/* implicit */unsigned long long int) var_2))))));
    }
    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (min((min((var_4), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_8)), (((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_8)))))))))));
        var_17 = ((/* implicit */unsigned char) ((((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)7668)) || (((/* implicit */_Bool) (unsigned char)174)))))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
    }
    var_18 = var_7;
}
