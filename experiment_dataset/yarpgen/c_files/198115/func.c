/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198115
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
    var_19 = ((/* implicit */signed char) ((int) (_Bool)0));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) var_10);
        var_21 ^= ((/* implicit */int) (~(max((var_16), (((/* implicit */unsigned long long int) ((signed char) arr_0 [i_0])))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((min((var_0), (((/* implicit */unsigned int) var_7)))) >= (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || ((_Bool)0)))))))) * (((/* implicit */int) arr_1 [i_0] [14LL]))));
    }
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (max((var_1), (((/* implicit */int) var_15)))) : (((/* implicit */int) var_13))))) ? (min((var_3), (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) max(((~(var_1))), (var_7))))));
    var_24 = ((/* implicit */long long int) max((18446744073709551611ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
    /* LoopNest 3 */
    for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                {
                    var_25 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))) : (var_11)))));
                    var_26 = ((/* implicit */unsigned short) max((((((/* implicit */int) ((signed char) var_0))) ^ (max((((/* implicit */int) arr_7 [i_1] [i_2] [i_3])), (var_17))))), (min(((-(((/* implicit */int) var_15)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
                    var_27 = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) ((short) var_11))), ((~(var_7))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_2 [(unsigned char)4]), (arr_2 [i_1])))))))));
                }
            } 
        } 
    } 
}
