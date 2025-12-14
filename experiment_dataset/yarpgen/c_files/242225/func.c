/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242225
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
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) min((var_14), (((/* implicit */int) var_2))))), (((3368306693047210826ULL) & (((/* implicit */unsigned long long int) -919569419259022246LL)))))) | (((4858450497950906607ULL) / (((/* implicit */unsigned long long int) ((var_15) >> (((var_1) - (7076339941338705956LL)))))))))))));
    var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)128)))))))) ? (((/* implicit */int) (short)-21308)) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) ((unsigned char) var_7))) : (((/* implicit */int) (unsigned char)157))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 919569419259022245LL)) ? (((/* implicit */int) (((~(arr_1 [i_0]))) >= (max((arr_1 [i_0]), (arr_1 [i_0])))))) : (min((max((((/* implicit */int) (short)(-32767 - 1))), (2147483647))), (((/* implicit */int) arr_0 [i_0]))))));
        var_20 -= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((int) -919569419259022246LL))), (((((/* implicit */unsigned long long int) var_14)) ^ (4858450497950906607ULL))))) << (((5349162852720227536ULL) - (5349162852720227535ULL)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) 1853914180);
        arr_6 [(short)7] [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (min(((-(var_12))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_7)), (arr_0 [i_1])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_9)), ((short)-32762)))) ? (max((((/* implicit */long long int) arr_0 [i_1])), (var_15))) : (min((var_15), (((/* implicit */long long int) arr_0 [i_1])))))))));
    }
}
