/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227427
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_18 ^= ((/* implicit */long long int) ((min((max((arr_0 [i_0]), (((/* implicit */int) var_17)))), (((/* implicit */int) ((((/* implicit */int) (signed char)-99)) < (((/* implicit */int) (signed char)98))))))) * (((/* implicit */int) min((((/* implicit */unsigned short) (short)1292)), ((unsigned short)0))))));
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) (short)-14540)) > (((/* implicit */int) (unsigned short)65535))))), (((((/* implicit */int) var_6)) & (((/* implicit */int) arr_1 [i_0] [i_0]))))))) <= (min((((/* implicit */long long int) 2754630732U)), (-7837435809211599930LL))))))));
        var_20 += ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [(unsigned short)0] [i_0])) >= (((/* implicit */int) (short)514))))) > (((((/* implicit */int) (short)32767)) + (((/* implicit */int) var_9))))))), (((max((((/* implicit */int) (short)514)), (arr_0 [i_0]))) + (((var_1) + (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
    }
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) var_14)), (-268435456LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 4294967232LL)))))))) || (((/* implicit */_Bool) min((min((var_13), (((/* implicit */long long int) (signed char)-64)))), (((/* implicit */long long int) min((3004866775U), (0U)))))))));
}
