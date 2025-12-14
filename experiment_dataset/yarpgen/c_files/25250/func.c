/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25250
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0]))))) != (((((/* implicit */_Bool) 3682396999543763675LL)) ? (((((/* implicit */_Bool) 2112218158993037003LL)) ? (4410672102546701601ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))) : (max((14036071971162849986ULL), (((/* implicit */unsigned long long int) -317128556))))))));
                    arr_10 [i_0] = ((((/* implicit */_Bool) (~(min((((/* implicit */int) (_Bool)1)), (var_11)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [i_0] [i_1])) <= (((((/* implicit */_Bool) 4410672102546701601ULL)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_13)))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))) % ((-(arr_2 [i_0] [1ULL]))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (signed char)110))));
    var_18 = ((/* implicit */signed char) var_8);
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)37)) : (((/* implicit */int) var_5)))) & (((/* implicit */int) var_7))));
}
