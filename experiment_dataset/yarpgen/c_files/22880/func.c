/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22880
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
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_10 += min((((/* implicit */long long int) ((((/* implicit */_Bool) 3083821570U)) ? (((/* implicit */unsigned int) 8191)) : (1211145725U)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 1211145726U)) : (2ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (max((arr_3 [i_0]), (((/* implicit */long long int) arr_5 [i_0] [i_1])))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned int i_3 = 3; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1211145722U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_1] [i_3 - 1] [i_4] [i_4]))))), (min((min((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (1211145726U))), (((/* implicit */unsigned int) arr_4 [i_0]))))));
                                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) max((var_1), (((/* implicit */signed char) ((998206632) > (arr_12 [i_0] [15] [i_0] [15] [15]))))))) - (46))))))));
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2 + 4] [i_2] [i_2])) ? (((/* implicit */long long int) max((arr_12 [i_2] [i_2] [i_2 + 3] [18U] [18U]), (arr_12 [i_2] [i_2] [i_2 + 1] [i_2] [i_2])))) : (max((var_7), (((/* implicit */long long int) arr_12 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2] [i_2]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 1; i_5 < 20; i_5 += 3) 
                {
                    for (unsigned short i_6 = 1; i_6 < 17; i_6 += 3) 
                    {
                        {
                            var_14 ^= ((/* implicit */long long int) arr_10 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_1] [i_5 - 1]);
                            arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((_Bool) 13932081307454760213ULL));
                        }
                    } 
                } 
                var_15 *= ((/* implicit */unsigned char) var_4);
                var_16 *= ((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned char)153)) <= (((/* implicit */int) var_4)))), (((((((/* implicit */_Bool) 8538502856237574245LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (var_5))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50171)))))));
            }
        } 
    } 
    var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -1047173026)))) : (min((var_8), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_4)), (var_6))))))));
}
