/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38090
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-26601))))), (max((var_8), (((/* implicit */unsigned int) var_3))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (15733162884185927616ULL)))) ? (((((/* implicit */int) var_11)) % (var_0))) : (((var_7) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) var_6)) ? (((17179868672ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1))))))));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4112242697U)) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (((((/* implicit */int) var_10)) * (((/* implicit */int) var_6))))))) ? (((((/* implicit */long long int) ((var_11) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_6))))) % (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_0)) : (var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 182724610U)) ? (((/* implicit */int) (short)13464)) : ((~(((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(((/* implicit */int) (_Bool)0)))) | (((/* implicit */int) arr_0 [i_0 + 1]))))) || (((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) != (arr_1 [i_1])))), (arr_0 [i_0]))))));
                var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (unsigned char)255))) ^ (((((/* implicit */_Bool) 16106127360ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_0] [i_1]))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_1])) / (((/* implicit */int) (short)13464))))), (var_8)))) : (((((/* implicit */_Bool) min((701852696638992119ULL), (((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_1 - 1]))))) ? (var_1) : (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0] [i_1])))))))));
                var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned short)11)) >> (((arr_1 [i_1]) - (2216274766U))))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0] [i_1])), (var_4))))))), (max((((/* implicit */unsigned int) (signed char)-77)), (3588837787U)))));
                var_19 &= ((/* implicit */short) (-(min((((((/* implicit */_Bool) 4203867950U)) ? (arr_2 [2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) * (((/* implicit */int) arr_0 [i_1])))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((var_11) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_2] [i_3]))) : (arr_6 [i_0 + 1] [i_1] [i_1 - 1] [i_1])))));
                            var_21 ^= arr_0 [i_3];
                            var_22 = ((/* implicit */long long int) max((((((/* implicit */int) arr_0 [i_0 + 1])) & (((/* implicit */int) arr_0 [i_0 + 1])))), ((~(((/* implicit */int) arr_0 [i_0 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
