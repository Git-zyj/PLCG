/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22891
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
    var_20 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)0))))) >= (((/* implicit */int) var_15)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_10) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1])))))) && (((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_0])))))) ? (((/* implicit */int) arr_4 [i_0] [i_2])) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (arr_0 [i_0]))) == (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551608ULL))))))))));
                    arr_10 [i_0] [i_0] [i_2] [0] = ((/* implicit */_Bool) (~(14040238784549059775ULL)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)-31743)))) ? (arr_2 [i_0] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))));
                                arr_15 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 14040238784549059794ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (242869790079284870LL)));
                                arr_16 [i_0] [i_3] [i_2] [i_0] [i_0] = ((((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_0] [i_3] [i_1]))))) / (arr_12 [i_0] [i_1] [i_2] [i_0] [i_4]));
                                arr_17 [22] [i_1] [22] [i_1] [i_0] &= ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) max((((short) var_11)), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)248)) / (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) ((var_8) ? (3341232466217749507ULL) : (var_0)))))))));
    var_23 ^= ((/* implicit */unsigned char) min((((((/* implicit */int) var_7)) >> (((((/* implicit */int) max((var_11), (((/* implicit */unsigned char) (_Bool)1))))) - (110))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : (var_3)))) ? (((var_6) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((unsigned char) var_16)))))));
    var_24 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((15105511607491802098ULL) >> (((var_4) - (12763337668672972570ULL)))))) ? (((/* implicit */int) ((var_13) <= (402653184)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (var_3))))))));
}
