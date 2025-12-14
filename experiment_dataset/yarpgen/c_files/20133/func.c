/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20133
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
    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241))) / (var_6)))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) arr_1 [7ULL])) ? (((arr_1 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) (signed char)-114)) - (((/* implicit */int) var_10)))), (((/* implicit */int) arr_2 [i_0] [i_0])))))));
        var_17 = ((/* implicit */long long int) arr_0 [i_0]);
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min((((min((((/* implicit */unsigned long long int) (unsigned short)65535)), (arr_1 [i_0]))) >> (((((9161072772055557801ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65528))))) - (9161072772055564227ULL))))), ((~(7567710937010868494ULL))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [(unsigned short)3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */short) arr_2 [i_0] [i_0])), ((short)1454)))) * (((/* implicit */int) ((_Bool) 2272772504963738018ULL))))))));
        var_19 *= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)57085)) & ((~(((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_20 += ((/* implicit */short) ((((/* implicit */_Bool) max((7074595435362864534ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned short)36145)) : (((/* implicit */int) (unsigned short)34661)))))))) ? (((arr_4 [i_1]) + (((/* implicit */unsigned long long int) arr_5 [i_1])))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)30890)), (((((/* implicit */int) (signed char)-4)) + (((/* implicit */int) (unsigned char)15)))))))));
        var_21 = arr_4 [i_1];
        var_22 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1] [i_1])))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 20; i_2 += 3) 
    {
        var_23 &= ((/* implicit */unsigned long long int) 9LL);
        var_24 = ((/* implicit */unsigned short) (-(arr_10 [i_2 + 2] [i_2])));
        var_25 += ((/* implicit */unsigned long long int) ((unsigned short) ((arr_9 [i_2]) || (arr_9 [i_2 + 2]))));
    }
}
