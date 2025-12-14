/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33629
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
    var_11 = ((/* implicit */_Bool) var_9);
    var_12 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) != (min((938820968), (var_10))))))) + (var_3)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */short) min((((unsigned int) ((((/* implicit */unsigned int) 938820999)) & (3U)))), (((/* implicit */unsigned int) -938820972))));
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) 938821001))));
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((((/* implicit */_Bool) 14417402317333583553ULL)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_5 [i_0] [i_0]))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) (unsigned short)47256)))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3 - 1] [i_3 - 1] [i_2] [i_2] [i_2] [i_2]))) : (max((1195048524U), (((/* implicit */unsigned int) 938820968))))));
                            var_16 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_5 [i_1] [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110)))))) ? (arr_5 [i_3 - 2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_12 [i_1] [2ULL] [(unsigned short)1] [(unsigned short)2] [i_1] [i_1] = ((/* implicit */signed char) (-(5765101U)));
                        }
                    } 
                } 
                var_17 = ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_9)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_1))));
}
