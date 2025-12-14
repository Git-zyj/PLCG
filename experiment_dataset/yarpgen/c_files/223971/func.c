/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223971
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_15 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (((((/* implicit */_Bool) -604334539)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18150)))))) : (10832923298903158557ULL)))));
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((-7368684911444272580LL), (((/* implicit */long long int) var_4))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_8 [i_0 + 1])))))) : (((7613820774806393034ULL) % (15069968086616034823ULL))))))));
                    var_17 = ((/* implicit */int) arr_8 [i_0]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16084)) ? (7613820774806393035ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7791)))))) ? (var_6) : (((((/* implicit */_Bool) var_0)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
    var_19 = ((/* implicit */unsigned long long int) var_4);
    var_20 = ((/* implicit */unsigned long long int) var_8);
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_4))));
}
