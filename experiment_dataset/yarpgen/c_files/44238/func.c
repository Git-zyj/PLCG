/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44238
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
    var_18 = ((/* implicit */unsigned char) max(((-(max((((/* implicit */unsigned long long int) var_15)), (var_0))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_15)), ((~(((/* implicit */int) var_15)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */int) max((var_19), ((-(((((/* implicit */_Bool) arr_6 [i_0] [10U])) ? ((-(((/* implicit */int) arr_10 [8ULL] [i_1] [8ULL])))) : (((/* implicit */int) var_1))))))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (var_12)));
                            var_21 = ((/* implicit */short) max((((/* implicit */unsigned char) arr_12 [i_2] [i_2] [i_1] [i_1] [(unsigned char)3])), (min((((/* implicit */unsigned char) arr_1 [i_1 - 2])), ((unsigned char)181)))));
                            arr_13 [i_0] [i_0] [i_2] [(short)7] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (unsigned short)28085)) ? (((/* implicit */int) arr_6 [i_2] [i_0])) : (((/* implicit */int) (unsigned short)53659)))) != (((((/* implicit */int) (unsigned short)11880)) - (((/* implicit */int) var_16)))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((((/* implicit */_Bool) 954940612)) ? (((/* implicit */unsigned long long int) var_7)) : (10128898960787762601ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3] [i_2] [i_1] [i_0] [11ULL]))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((short) var_17)))) ? (((unsigned int) arr_1 [i_1 + 2])) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (signed char)-70)) != (((/* implicit */int) var_1))))))))));
                arr_14 [i_0] [(signed char)10] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_15)))) / (max((var_4), (((/* implicit */unsigned long long int) 1628210023)))))), (var_13)));
                var_23 ^= ((/* implicit */_Bool) max(((~(((((/* implicit */int) (unsigned short)11877)) ^ (var_8))))), (((/* implicit */int) min((min((((/* implicit */unsigned char) arr_3 [(_Bool)1])), (arr_5 [i_1 + 3] [i_0] [i_0]))), (((/* implicit */unsigned char) ((arr_0 [(unsigned char)12]) >= (((/* implicit */long long int) var_2))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) var_0);
    var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
}
