/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47380
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
    var_16 = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)39696)) / (((/* implicit */int) (unsigned char)66))))) : (var_8))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((var_6) / (var_11)))), (((((/* implicit */_Bool) (unsigned short)42074)) ? (3632306800U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)174))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_17 = (((!(((/* implicit */_Bool) arr_2 [i_1])))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)41395))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)66))))) : (min((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)35111)))))) : (((/* implicit */unsigned long long int) min((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_0])))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)17304))))), ((~(arr_5 [i_1] [12] [(unsigned short)11]))))))));
                var_18 = ((/* implicit */unsigned long long int) min((var_6), (min(((+(((/* implicit */int) (unsigned char)189)))), (((/* implicit */int) var_0))))));
            }
        } 
    } 
}
