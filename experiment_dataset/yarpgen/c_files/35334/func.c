/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35334
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
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_11 = ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) (short)-1))))) ? (6066119108331749002LL) : (((/* implicit */long long int) (-(arr_2 [i_0] [i_1] [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned char i_3 = 3; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */_Bool) (unsigned short)1536);
                            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((int) -24))))) ? (((/* implicit */unsigned long long int) max((((int) arr_6 [i_0] [i_1] [i_3])), (((((/* implicit */_Bool) -24)) ? (((/* implicit */int) (unsigned char)66)) : (arr_9 [i_3] [i_2] [i_1] [i_1] [i_0] [i_0])))))) : (((((((/* implicit */_Bool) 23)) || (((/* implicit */_Bool) -1351556425861288474LL)))) ? (((((/* implicit */_Bool) arr_6 [i_2] [3] [i_2])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) (-(2147483644)))))))))));
                            var_14 ^= ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_2 - 1] [(unsigned short)22]);
                            var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_9 [i_1] [i_2 + 1] [i_2] [i_2] [i_3 - 2] [i_3]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(9223372036854775803LL)))) ? (((/* implicit */int) arr_0 [i_4] [i_5])) : (max((arr_12 [i_4] [21] [i_4] [21]), (((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) 33)) : (7ULL))))));
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_14 [i_0] [i_1] [i_6] [i_5]))) ? (((arr_11 [i_1] [i_1]) ? (((/* implicit */unsigned long long int) arr_9 [i_6] [i_5] [i_1] [i_1] [i_1] [i_0])) : (arr_10 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) max((-905691995), (((/* implicit */int) (_Bool)1)))))))))))));
                                arr_18 [i_0] [i_4] [i_4] [i_5] [i_6] = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 292957979802739910LL)) ? (((/* implicit */int) (unsigned char)52)) : (-28)))) ? (max((arr_17 [i_0] [i_1] [i_1] [i_5] [i_6] [i_6] [i_4]), (((/* implicit */unsigned long long int) -2147483638)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))))), (((/* implicit */unsigned long long int) (+(arr_13 [i_6] [i_5] [i_1] [i_1]))))));
                                var_18 = ((/* implicit */unsigned short) var_5);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = (((!(((/* implicit */_Bool) -55)))) ? (2782952110352752663LL) : (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) != (4973927725402713595LL))))))));
    var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : ((-(-5823775461227655737LL)))))));
}
