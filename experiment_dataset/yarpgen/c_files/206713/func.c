/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206713
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
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_11))));
    var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)189))) / (var_7)))) ? (var_10) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12751))) : (var_10))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(0U)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (-1090513420))) : (((((/* implicit */int) var_5)) - (((/* implicit */int) (_Bool)1)))))))));
    var_20 = ((/* implicit */unsigned long long int) var_7);
    var_21 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((-1090513423), (((/* implicit */int) var_16))))) ? (((/* implicit */int) ((var_7) >= (((/* implicit */long long int) 9U))))) : (((((/* implicit */_Bool) var_14)) ? (var_17) : (((/* implicit */int) (short)(-32767 - 1))))))), (((/* implicit */int) ((((/* implicit */_Bool) -7514470883603625812LL)) && (((/* implicit */_Bool) (signed char)60)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) -2081333564))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [(short)7])) : (((/* implicit */int) arr_3 [i_0] [i_1])))) : (((((/* implicit */_Bool) 3019421559U)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_1])))));
                arr_6 [i_0] = ((/* implicit */signed char) arr_0 [i_1]);
                arr_7 [i_1] &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-11435)) && (((/* implicit */_Bool) (unsigned char)151)))))) + (6U)));
            }
        } 
    } 
}
