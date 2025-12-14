/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228548
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
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) ((short) arr_1 [i_0 - 1] [i_0]))), (min((((/* implicit */unsigned long long int) (unsigned short)15239)), (arr_1 [i_0] [i_0]))))), (((((((/* implicit */_Bool) var_12)) ? (18053159181688301062ULL) : (((/* implicit */unsigned long long int) var_12)))) + (((/* implicit */unsigned long long int) (+(3000380009U)))))))))));
        arr_2 [0U] [11ULL] &= ((/* implicit */unsigned short) ((unsigned char) (unsigned short)496));
        var_17 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)50296)) : (var_2))))))), (min(((+(var_15))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)32085))))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)15239))))) : (arr_1 [i_0 + 1] [i_0])))) ? (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)10]))) : (var_15))), (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned char) (_Bool)0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    }
    var_18 -= ((((/* implicit */_Bool) min((max((var_13), (((/* implicit */unsigned long long int) 1294587281U)))), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (min((((/* implicit */unsigned short) var_4)), ((unsigned short)44843)))))) : (max(((-(var_2))), (((/* implicit */int) var_4)))));
}
