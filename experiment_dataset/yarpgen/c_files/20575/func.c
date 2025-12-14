/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20575
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
    var_17 = var_11;
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((unsigned int) (short)13168))))) ? (max((max((5287746631899880236LL), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) max((arr_9 [i_0] [i_0] [i_0] [i_0 + 2] [i_3 - 1] [5U]), (3700343264U))))));
                            var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)27)), (594624031U)));
                            arr_10 [i_0] = ((/* implicit */signed char) -710743252834448860LL);
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */short) var_14);
            }
        } 
    } 
    var_21 *= ((/* implicit */unsigned short) (-(min((((/* implicit */long long int) (!(((/* implicit */_Bool) 245239743298873852ULL))))), (9223372036854775807LL)))));
    var_22 += ((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) var_6))));
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 4) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            {
                arr_16 [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((unsigned long long int) (short)-26651))))) ? (((/* implicit */int) ((short) 2147483647))) : (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775797LL)))))));
                arr_17 [i_5] = ((/* implicit */_Bool) var_5);
                var_23 = ((/* implicit */unsigned long long int) max((min((arr_3 [i_5] [i_4 - 2] [i_5]), (((/* implicit */long long int) arr_9 [i_4 + 1] [i_5] [i_5] [i_5] [12LL] [(signed char)8])))), ((+(5086904835268476289LL)))));
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 4) 
                {
                    for (int i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 17; i_8 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
                                arr_24 [i_7] [i_5] [0U] [i_6] [0U] &= (-(arr_20 [i_4 + 1] [i_4 + 1] [i_6] [i_4]));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
