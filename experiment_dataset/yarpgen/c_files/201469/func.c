/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201469
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-71)) + (((/* implicit */int) (_Bool)1)))) == ((+(((/* implicit */int) (unsigned short)7894))))));
                            arr_13 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_2]);
                            var_13 &= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */int) arr_8 [i_2 - 1])) : (((/* implicit */int) var_6)))));
                            var_14 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0]))) + (((((/* implicit */_Bool) 4385443525240905493LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))) : (9602585757436978599ULL)))));
                        }
                    } 
                } 
                arr_14 [(unsigned char)10] [(unsigned short)5] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) -1504498738)), (((((-585749115352994694LL) - (((/* implicit */long long int) ((/* implicit */int) var_11))))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))));
                arr_15 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1527414928)), (16449198954771232827ULL)));
                arr_16 [i_0] [(_Bool)1] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)19))))))))) % (((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)251))) & (var_9))) << (((min((((/* implicit */long long int) arr_12 [i_0])), (arr_11 [i_0] [i_0]))) - (38569LL))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) min((var_15), (var_9)));
}
