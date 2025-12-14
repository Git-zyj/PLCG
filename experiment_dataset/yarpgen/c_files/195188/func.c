/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195188
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
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) min((min((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_1))))), (((/* implicit */long long int) (((+(((/* implicit */int) var_4)))) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))))))));
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) var_3))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_14 *= ((/* implicit */unsigned char) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))))), (arr_2 [i_1])));
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) min((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (signed char)15)) : (((((/* implicit */_Bool) (short)-21687)) ? (1004767272) : (((/* implicit */int) arr_2 [i_0])))))), ((((!(((/* implicit */_Bool) (short)7282)))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_4)))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)63734);
                arr_5 [(unsigned char)5] [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_2 [i_0])) << (((((/* implicit */int) arr_0 [2LL])) - (81))))), (((/* implicit */int) ((short) var_9)))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((((((/* implicit */int) arr_11 [i_3] [i_2] [i_1] [i_0])) << (((((((((/* implicit */int) (signed char)-16)) + (2147483647))) << (((((var_11) + (1439311205))) - (27))))) - (2147483618))))), ((-(((/* implicit */int) arr_9 [i_2] [i_2] [i_2 + 1])))))))));
                                var_17 &= ((/* implicit */signed char) ((((/* implicit */int) var_2)) | (((/* implicit */int) max((arr_15 [i_1] [i_2] [i_2] [i_2] [i_2 - 1] [i_3]), (arr_15 [i_0] [i_2] [6U] [i_2] [i_2 + 1] [i_4]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_11)) ? (-242586067822728668LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */int) min((min((var_2), (var_10))), (var_0))))));
    var_19 = ((/* implicit */signed char) var_3);
}
