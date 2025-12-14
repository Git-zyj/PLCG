/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207994
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) max((((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (arr_0 [i_0])))), (max((((/* implicit */long long int) (unsigned short)65535)), ((-(arr_1 [(unsigned short)1])))))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)56171)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) -7922069986276926222LL)) ? (((((/* implicit */_Bool) var_5)) ? (7780280426451042279LL) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) : (-7780280426451042280LL)))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_1))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (short)10576);
    }
    /* LoopSeq 1 */
    for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)0)))) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))))));
        var_23 = ((/* implicit */_Bool) var_10);
    }
}
