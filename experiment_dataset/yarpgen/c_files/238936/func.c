/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238936
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
    var_12 = ((var_10) < (((/* implicit */long long int) ((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((long long int) ((((/* implicit */int) arr_8 [i_1])) << (((((/* implicit */int) (signed char)-43)) + (57)))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) != (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)7764)) : (((/* implicit */int) (short)120))))))))));
                            arr_13 [i_3] [i_1] [i_1] [i_0] &= ((/* implicit */long long int) ((((((/* implicit */int) arr_2 [i_1 + 1])) + (((/* implicit */int) var_6)))) > (((((/* implicit */int) arr_2 [i_1 + 1])) / (((/* implicit */int) arr_2 [i_1 + 1]))))));
                            arr_14 [(signed char)1] [(unsigned short)2] [(unsigned short)2] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((var_9), (((/* implicit */int) var_0))))) ? (((/* implicit */int) max((arr_6 [i_1] [i_2] [i_3]), (((/* implicit */short) arr_1 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0]))))))), (((/* implicit */int) ((max((((/* implicit */long long int) var_6)), (var_10))) < (((/* implicit */long long int) ((/* implicit */int) ((short) var_11)))))))));
                            arr_15 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-64))))) ? ((~(((/* implicit */int) arr_1 [(_Bool)1])))) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)(-127 - 1))), (var_1)))))) : (var_9)));
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (arr_3 [i_1] [i_1] [i_1 + 1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-58)) ^ (((((/* implicit */int) arr_1 [i_1])) ^ (((/* implicit */int) var_7)))))))));
                        }
                    } 
                } 
                arr_16 [i_1] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_1 [i_1 - 1])), (1842720342U))), (((/* implicit */unsigned int) arr_1 [i_1 + 1]))));
                var_14 *= ((/* implicit */signed char) ((((long long int) (short)-122)) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [(_Bool)1] [i_1 - 1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_11 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))))));
            }
        } 
    } 
    var_15 = min((min((min((var_3), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) (signed char)-64)))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)3482)) < (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))))));
}
