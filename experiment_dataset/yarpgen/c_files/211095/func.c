/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211095
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
    var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) 7604427666743776705ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)42))) : (9621652316971487616ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)43))))), ((-(((/* implicit */int) var_7)))))))));
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)-43)), (var_11)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = arr_2 [i_1];
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */short) (signed char)-43)), (((short) (_Bool)1))));
                arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((int) ((_Bool) -5LL)))) + (max(((~(-4034427113309615284LL))), (((/* implicit */long long int) (signed char)112))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 4) 
        {
            {
                var_22 = ((/* implicit */int) arr_8 [(short)5]);
                var_23 = ((/* implicit */_Bool) var_3);
                arr_12 [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) (-((+(((unsigned long long int) var_13))))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) (+(var_3)))), (max((var_6), (((/* implicit */unsigned long long int) (signed char)-114))))))));
}
