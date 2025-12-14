/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233616
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned char) var_4))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-4754620660339947706LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))))) | (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((((/* implicit */_Bool) (unsigned short)1313)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))))));
                arr_4 [i_0 - 1] [i_0] [i_1] = ((/* implicit */short) min((max((((((/* implicit */_Bool) var_10)) ? (-5740642122417542911LL) : (((/* implicit */long long int) var_6)))), (var_12))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)56233)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) max((var_0), (var_8)))))))));
                var_17 = (~(max((((/* implicit */long long int) min((-1034987958), (((/* implicit */int) var_11))))), (-5475679079832609578LL))));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_5), (var_12)))) ? (((((/* implicit */_Bool) var_13)) ? (-9223372036854775801LL) : (var_12))) : (((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) 1034987958))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_11 [i_2] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned long long int) var_11))))) ? (max((var_12), (((/* implicit */long long int) (unsigned short)2)))) : (min((((/* implicit */long long int) (unsigned short)56233)), (var_3))))))));
                arr_12 [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_5), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) -470884727)) : (3693236141033289036LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned short)65535))))) ? ((~(((/* implicit */int) var_0)))) : (max((var_9), (var_6))))) : (((((/* implicit */int) var_0)) ^ (var_7)))));
                var_19 = ((/* implicit */signed char) -8208618813047546241LL);
            }
        } 
    } 
}
