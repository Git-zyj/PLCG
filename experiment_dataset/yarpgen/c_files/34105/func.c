/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34105
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
    var_16 = var_7;
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15476)) ? (((/* implicit */int) (short)28168)) : (((/* implicit */int) (short)28180))))) ? (max((((/* implicit */int) min(((short)-28169), (var_11)))), ((+(((/* implicit */int) (short)-28168)))))) : (((/* implicit */int) ((((1783981191871226178LL) >= (((/* implicit */long long int) ((/* implicit */int) var_2))))) && (((/* implicit */_Bool) min((((/* implicit */int) var_11)), (var_1)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_18 *= ((/* implicit */short) max((((/* implicit */long long int) (short)28179)), (var_5)));
                                var_19 = ((/* implicit */unsigned short) min((min((min((arr_9 [i_4] [i_2]), (var_7))), (var_11))), ((short)-28169)));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? ((~(arr_0 [i_1 - 3]))) : (min((((/* implicit */int) arr_7 [i_0] [i_2] [i_2] [i_3 - 4])), (arr_0 [i_1 - 1])))));
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_0 [i_1 + 2]) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned short)59216)) % (((/* implicit */int) (unsigned char)251)))) == ((~(((/* implicit */int) var_11)))))))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_1] [i_0]))) | (var_0))), (((/* implicit */unsigned long long int) max((173293809), (((/* implicit */int) (short)-28168))))))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_13 [(signed char)0]))) >= (var_13))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_4))))) : (((((/* implicit */_Bool) var_11)) ? (128923918U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) / (((((/* implicit */_Bool) ((unsigned long long int) (short)-28168))) ? (((/* implicit */long long int) var_1)) : (((((/* implicit */_Bool) var_11)) ? (-864156179808577024LL) : (var_13)))))));
                }
            } 
        } 
    } 
}
