/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37480
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
    var_19 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-126)) ? (268434432U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49824))))))));
                    var_21 &= (unsigned char)171;
                    arr_8 [i_0] |= ((/* implicit */unsigned short) (signed char)119);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min(((unsigned short)17028), (((/* implicit */unsigned short) (_Bool)0)))))));
                                var_23 = ((/* implicit */signed char) (-(arr_11 [i_4] [i_1] [i_2] [i_4] [i_4])));
                                var_24 |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 - 1] [i_3 - 1] [i_4 + 1] [i_4 + 1]))) / (((((/* implicit */_Bool) 4294967279U)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)92))))))))));
                                var_25 = ((/* implicit */int) max((((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (2598501084665184847ULL))) : (max((((/* implicit */unsigned long long int) 3471155469U)), (1048574ULL))))), (18446744073708503041ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
