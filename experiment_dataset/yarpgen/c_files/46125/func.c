/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46125
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_18 ^= min(((-(arr_0 [i_0]))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_0 [i_0])) > (12398221582255229321ULL)))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_15)) * (max((6048522491454322295ULL), (((/* implicit */unsigned long long int) -4330217687497623961LL))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (+((-(arr_0 [i_0])))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) + (((314802985208074506LL) / (arr_2 [i_1])))))) ? (((max((var_17), (((/* implicit */unsigned long long int) arr_5 [6LL])))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) 542366609)) : (arr_0 [i_1])))))) : (((/* implicit */unsigned long long int) var_16))));
        arr_10 [(unsigned char)11] = ((max((((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_8 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned char)8]))))), (min((-8323290591300316817LL), (((/* implicit */long long int) (unsigned char)255)))))) & (((/* implicit */long long int) (+(arr_3 [i_1])))));
    }
    var_20 *= ((/* implicit */unsigned char) min((((long long int) ((((/* implicit */_Bool) -8323290591300316817LL)) ? (((/* implicit */unsigned long long int) var_6)) : (var_17)))), (var_6)));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(4094LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)28))) != (var_17))))) : (((((/* implicit */unsigned long long int) -847811956376900194LL)) * (18446744073709551613ULL)))));
}
