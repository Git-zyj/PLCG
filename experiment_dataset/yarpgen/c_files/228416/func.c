/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228416
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
    var_20 *= ((/* implicit */_Bool) var_15);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    var_21 += ((/* implicit */unsigned int) ((((((/* implicit */int) var_19)) & (((((/* implicit */_Bool) 2301596942U)) ? (((/* implicit */int) arr_4 [i_1] [i_2])) : (((/* implicit */int) var_4)))))) << (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)62761)) : (((/* implicit */int) arr_7 [i_0] [i_1])))) & (((/* implicit */int) max((var_19), (arr_7 [(_Bool)1] [i_2 - 2]))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_22 *= ((/* implicit */unsigned short) arr_6 [i_0] [(unsigned char)4] [i_0] [i_0]);
                        var_23 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((signed char) var_11))))) ? (((((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_1 [i_0]))) * (((/* implicit */long long int) ((/* implicit */int) ((var_19) && (((/* implicit */_Bool) var_11)))))))) : (((/* implicit */long long int) ((((_Bool) var_17)) ? (((unsigned int) 641326358073487806ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) ((2147483640U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))))))));
                    }
                    for (unsigned int i_4 = 1; i_4 < 10; i_4 += 1) 
                    {
                        arr_14 [i_0] [(unsigned short)8] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_14);
                        var_24 = ((/* implicit */_Bool) ((((unsigned long long int) (_Bool)1)) - (min((((arr_13 [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0]))))), (((/* implicit */unsigned long long int) var_19))))));
                        var_25 = ((/* implicit */unsigned int) arr_2 [i_0]);
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) max((((/* implicit */signed char) var_5)), (var_18)))) : (((/* implicit */int) var_12)))) + (((/* implicit */int) ((((/* implicit */_Bool) max((var_18), ((signed char)52)))) || (((/* implicit */_Bool) var_7)))))));
    var_27 = ((((/* implicit */_Bool) var_16)) ? (max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (var_3))))) : (((/* implicit */int) var_10)));
}
