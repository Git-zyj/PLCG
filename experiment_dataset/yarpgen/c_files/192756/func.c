/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192756
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
    var_20 = (!(((/* implicit */_Bool) var_1)));
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(var_2)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_6)))))))) ? (((/* implicit */int) var_11)) : (((int) var_0)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [4ULL] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_12)))) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((var_8) ^ (((/* implicit */int) (signed char)90)))))))) ? (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_1 [(short)3]))))))) : (arr_2 [i_1 + 3])));
                arr_5 [i_0] [i_1 + 3] = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) max((2996612358U), (1414537933U)))), (max((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_13)))))) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16)))))));
                var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) - (arr_0 [i_0]))), (((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)55)), (var_5))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_15)), (var_3))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((signed char) (short)-10832))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 1]))) : (min((((/* implicit */unsigned long long int) var_15)), (var_3))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))) ? (((/* implicit */int) ((((/* implicit */int) var_17)) != (var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [(unsigned char)12] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((unsigned long long int) (unsigned char)0))))) ? (((((/* implicit */int) var_16)) - (((/* implicit */int) var_13)))) : ((+(((/* implicit */int) var_0))))));
                            var_23 = (((-(((/* implicit */int) arr_1 [i_3])))) + (((/* implicit */int) ((signed char) arr_2 [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */short) var_19)), (var_14)))), (((((/* implicit */_Bool) (short)11930)) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) (unsigned short)21168))))))) - ((+((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2880429363U)))))));
}
