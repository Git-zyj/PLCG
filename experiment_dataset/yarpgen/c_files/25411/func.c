/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25411
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
    var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-27)), ((unsigned char)29))))) >= (min((((/* implicit */unsigned long long int) (unsigned char)38)), (9197072318833944702ULL)))));
    var_15 ^= ((/* implicit */unsigned short) ((max((var_2), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))))))) ^ (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_9))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)45)))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (9197072318833944702ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1])))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_12) : (((/* implicit */int) arr_1 [i_0])))) : (min((var_12), (((/* implicit */int) (short)-20330)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((9197072318833944712ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))))));
                arr_5 [i_1] &= ((/* implicit */signed char) arr_4 [i_0] [i_1]);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_2] [i_3]);
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((6034095988159880532LL) <= (-6034095988159880528LL)))) * ((((+(((/* implicit */int) (unsigned char)237)))) ^ (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_4]))))));
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((((((/* implicit */int) var_5)) < (arr_9 [i_0] [i_1] [i_2] [i_3]))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (min((((/* implicit */long long int) 2147483642)), (arr_11 [i_0] [i_1] [i_2] [i_3] [i_1]))))) + (((/* implicit */long long int) ((/* implicit */int) ((short) 0U))))));
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_7))));
                                var_20 = ((/* implicit */short) var_2);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((((/* implicit */int) ((21ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))) * (((/* implicit */int) ((short) 0))))) >> (((((/* implicit */_Bool) ((var_13) ^ (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (short)-6353)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (-6034095988159880533LL))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
}
