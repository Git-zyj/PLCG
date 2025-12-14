/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202627
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
    var_13 = ((signed char) ((((/* implicit */_Bool) ((unsigned char) 507904U))) && (((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((/* implicit */int) var_5)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max((0U), (4294967290U)));
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned int) 4294967277U));
        var_14 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [23U])))), (((((/* implicit */int) (short)(-32767 - 1))) & (((/* implicit */int) var_3)))))) >> (((max((((/* implicit */unsigned int) (!(var_11)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_4) : (var_9))))) - (4168545483U)))));
    }
    for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((short) 2035328132U));
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (+(((/* implicit */int) (((~(((/* implicit */int) var_3)))) < (((/* implicit */int) ((unsigned char) (unsigned char)184)))))))))));
    }
    var_16 = ((/* implicit */unsigned int) max((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((6038406668455945219LL), (((/* implicit */long long int) var_6))))) ? (((((/* implicit */_Bool) (signed char)-26)) ? (3439039456U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-1))))))))));
}
