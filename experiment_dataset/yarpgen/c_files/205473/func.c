/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205473
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
    var_12 = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (8750362453095960837LL)))) ? (((((/* implicit */int) (short)-24086)) - (var_7))) : ((-(((/* implicit */int) (signed char)41)))))), ((-(min((var_7), (((/* implicit */int) (_Bool)1))))))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)-24062)))) : (max((((/* implicit */long long int) (_Bool)1)), (9168073141098621606LL)))))) ? ((~(((/* implicit */int) (signed char)-127)))) : (((/* implicit */int) ((unsigned char) max((var_7), (((/* implicit */int) (unsigned short)42226))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [(unsigned short)9] = ((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)42226))) - (arr_2 [i_0] [i_2]))));
                    var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                    var_15 = ((max((((/* implicit */long long int) (_Bool)1)), (max((var_5), (((/* implicit */long long int) (_Bool)1)))))) ^ (((/* implicit */long long int) min(((~(((/* implicit */int) arr_3 [i_2] [i_0])))), (((/* implicit */int) arr_3 [i_1] [(signed char)11]))))));
                }
            } 
        } 
    } 
}
