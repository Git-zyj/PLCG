/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225529
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
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((short) ((((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) var_15))))) ? ((-(var_14))) : (((long long int) var_3))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned long long int) max(((-(((((/* implicit */_Bool) var_2)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)66))))))), (((/* implicit */unsigned int) max((arr_6 [i_0] [i_0]), (arr_6 [i_2] [i_2]))))));
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((int) ((((((-1075049738) + (2147483647))) >> (((var_2) - (4984382970517401265ULL))))) >> (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))) + (10115)))))))));
                                var_21 = ((/* implicit */unsigned long long int) arr_12 [i_2] [i_3] [i_2] [i_2] [i_2] [i_1] [(_Bool)1]);
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((unsigned long long int) 14312628543178440546ULL);
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) ((4134115530531111055ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11924)))));
            }
        } 
    } 
}
