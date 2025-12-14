/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54553
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) var_13);
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */int) max((var_16), ((-(((int) var_15))))));
                                var_17 -= ((/* implicit */short) ((2320105067U) == (1934816139U)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        for (unsigned int i_6 = 2; i_6 < 16; i_6 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 2; i_9 < 16; i_9 += 3) 
                        {
                            {
                                arr_32 [i_5] [i_6 - 2] [i_6] [i_9] [i_8] [i_8] [i_9 - 2] = ((/* implicit */unsigned short) -1LL);
                                var_19 = ((/* implicit */unsigned short) (+(((unsigned int) -2LL))));
                                arr_33 [i_5] [i_9] [i_9 - 2] [i_8] = ((/* implicit */int) var_2);
                            }
                        } 
                    } 
                } 
                arr_34 [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_14))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((unsigned char) (short)-30468))))))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) var_12))) - (var_8)))))) : (((unsigned long long int) (((-2147483647 - 1)) | (((/* implicit */int) (unsigned short)65535)))))));
                arr_35 [i_5] [i_5] [i_5] = ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (var_13))))) - (((unsigned long long int) 2161727821137838080ULL)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_2);
}
