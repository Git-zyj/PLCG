/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233282
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
    var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_10))) : (var_10)))) ? (max((((/* implicit */int) var_1)), ((+(((/* implicit */int) var_9)))))) : ((-(((/* implicit */int) var_8))))));
    var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((var_1), (var_15)))) ? ((+(var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24650))))))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_13)) : ((((-(var_10))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)255)) : (((/* implicit */int) var_6)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_0 + 1] [i_0] [i_1] &= (~(((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_2))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_12)))) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (arr_10 [i_0] [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3])))))))) : (((/* implicit */unsigned long long int) (-(min((3777351551U), (((/* implicit */unsigned int) (_Bool)1))))))))))));
                            var_20 += ((/* implicit */signed char) arr_7 [i_0 - 3]);
                            arr_11 [i_0 - 4] [i_0] [i_0 - 1] [i_0] [(short)2] |= ((/* implicit */unsigned short) min(((+(((/* implicit */int) var_15)))), (((/* implicit */int) max((arr_5 [i_0 + 1] [i_0 - 3]), (arr_5 [i_0 - 3] [i_0 + 1]))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((432039024U) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_0 [i_0 - 3])))))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : ((-((-(((/* implicit */int) var_1))))))))));
}
