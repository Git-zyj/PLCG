/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197105
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
    var_20 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -435633942)))))))), (((((/* implicit */_Bool) var_18)) ? (max((var_7), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) var_16))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [i_0]))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) min((max((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) var_13))))), ((-(((/* implicit */int) var_17)))))), ((~(((/* implicit */int) var_6))))));
    }
    var_22 = ((/* implicit */unsigned char) var_19);
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                {
                    var_23 = var_5;
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_10)) ? (arr_5 [i_3]) : (arr_5 [i_1]))), (((/* implicit */int) arr_14 [16LL] [i_2] [i_3] [i_2] [i_1])))))));
                                arr_16 [i_3] [i_1] [i_2] [i_3] [i_4] [i_5] = max((((/* implicit */int) arr_6 [i_1] [1U])), (-435633942));
                                arr_17 [i_1] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) max((var_15), (var_2)))), (max((var_8), (-435633946)))))) ? (((/* implicit */int) ((signed char) arr_10 [i_1] [i_2] [(unsigned char)14]))) : (((/* implicit */int) var_15))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_1] [i_1] [i_2]))))), (((unsigned long long int) var_18))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) -435633946)) ^ (var_16))))) : (((/* implicit */int) var_6))));
                                var_26 += ((unsigned long long int) arr_22 [i_2] [i_7]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
