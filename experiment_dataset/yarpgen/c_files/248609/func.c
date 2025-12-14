/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248609
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) <= (arr_2 [i_0] [i_1] [i_1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 36028762659225600LL)) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) -2631121223185654826LL)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_3))))));
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(2631121223185654831LL)))) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)123)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_4);
    var_14 += ((/* implicit */short) var_0);
    var_15 = min((((/* implicit */int) (signed char)6)), ((~(((/* implicit */int) var_10)))));
}
