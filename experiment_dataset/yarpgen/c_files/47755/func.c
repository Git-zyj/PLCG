/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47755
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
    var_14 = ((/* implicit */signed char) var_1);
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (var_4) : (((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1392976157U)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) var_5)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_16 &= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) ? (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 2231083450153059793ULL)))) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) (short)-1965))))) : (((((/* implicit */_Bool) (signed char)69)) ? (4294967295U) : (135777851U)))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) ((short) var_7))), (((((/* implicit */int) arr_0 [i_0])) << (((var_6) - (1928942595)))))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))) : ((~(36028796750528512ULL))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)60))))))))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_18 = ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) -772523456423803402LL)) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) -8430243774744420483LL)))) > (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_4 [i_1]) : (var_12))))))) - (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_0)))) + (max((((/* implicit */long long int) var_0)), (arr_2 [i_1] [9]))))));
        arr_5 [4ULL] = ((/* implicit */long long int) min((((/* implicit */short) arr_3 [i_1])), (((short) (_Bool)1))));
        arr_6 [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (2251524935778304ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4875764433399210408LL)) ? (((/* implicit */int) (short)16799)) : (((/* implicit */int) (short)16787))))) ? (((var_9) / (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_6)) : (var_1)))))) : (((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) arr_1 [i_1] [i_1]))))))));
    }
}
