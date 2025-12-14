/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52157
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_3] [i_0] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)87)) ? (6333730189052351604ULL) : (((/* implicit */unsigned long long int) 2078450561))));
                                arr_13 [i_0] [i_1] = ((18014398509481983ULL) % (12113013884657199994ULL));
                                var_10 *= ((/* implicit */int) ((((var_3) ? (((((/* implicit */_Bool) (unsigned short)127)) ? (12113013884657200012ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14491))))) : (((/* implicit */unsigned long long int) 1790316065)))) == (((((((/* implicit */unsigned long long int) -2078450562)) * (12113013884657200011ULL))) * (((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))))));
                            }
                        } 
                    } 
                    var_11 = ((/* implicit */unsigned long long int) ((12113013884657199994ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 10323456682265602567ULL))))));
                    arr_14 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) -189911279);
                    arr_15 [i_2] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) var_1)))));
                }
            } 
        } 
    } 
    var_12 = var_9;
}
