/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231447
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
    var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) 1970897914U)) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) / (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)155)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_18 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (min((min((17592186044415ULL), (((/* implicit */unsigned long long int) (short)-6024)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)4032)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [(short)5] [i_2] [i_3] [i_4] [i_4])) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) var_4))))) ^ (var_1)))) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) (unsigned char)214)))))));
                                var_20 += ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_2 [i_0] [i_0])))) ? (((/* implicit */int) (unsigned short)36870)) : (((((/* implicit */int) (unsigned char)218)) << (((((/* implicit */int) arr_4 [i_2] [i_1] [i_1 + 1] [i_1])) - (16943)))))))), (min((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >> (((arr_1 [i_2]) - (919816205U))))))))));
                                arr_11 [i_0] [i_2] [i_0] [i_4 + 2] = ((/* implicit */int) (-(min((((/* implicit */unsigned long long int) arr_2 [i_1 + 1] [i_1 + 2])), (max((8367265323734337119ULL), (((/* implicit */unsigned long long int) (short)30107))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) var_9);
                }
            } 
        } 
    } 
    var_22 -= ((/* implicit */unsigned short) var_2);
    var_23 = ((/* implicit */short) min((((max((((/* implicit */unsigned int) var_13)), (643287426U))) * (var_14))), (((/* implicit */unsigned int) ((var_11) << (((((/* implicit */int) max((var_9), (((/* implicit */unsigned char) (signed char)101))))) - (253))))))));
}
