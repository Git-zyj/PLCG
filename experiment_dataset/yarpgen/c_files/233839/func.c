/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233839
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
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-27843))));
        var_20 = ((/* implicit */unsigned char) var_15);
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16352))) : (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_0 [20ULL]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_1 [i_1] [i_1]))))));
        var_22 = ((/* implicit */int) min((((/* implicit */long long int) 4294967295U)), (min((min((((/* implicit */long long int) (unsigned char)171)), (arr_3 [i_1] [i_1]))), ((~(arr_3 [i_1] [i_1])))))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((3790197967U) > (504769332U))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(signed char)20])))))) : (min((var_0), (3790197985U))))) : (arr_0 [16LL])));
    }
    var_23 *= min((((/* implicit */long long int) ((min((((/* implicit */int) var_16)), (var_4))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))), (((((/* implicit */_Bool) var_4)) ? (max((5764300276764933720LL), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) (-(((/* implicit */int) var_14))))))));
    var_24 = ((/* implicit */short) (-(504769301U)));
    var_25 &= ((/* implicit */short) (((!((!(((/* implicit */_Bool) 4294967295U)))))) ? (((/* implicit */long long int) min((((3790197985U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((20U) / (504769297U)))))) : (min(((-(var_1))), (((/* implicit */long long int) min((var_19), (3790197995U))))))));
}
