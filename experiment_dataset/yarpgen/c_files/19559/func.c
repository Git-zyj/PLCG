/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19559
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_17 = (-(((((/* implicit */_Bool) -5522151129991188554LL)) ? (arr_4 [i_0]) : (arr_4 [i_1]))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)59156))) & (6024177397629333230LL)));
            }
        } 
    } 
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_15))));
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                var_20 ^= ((/* implicit */long long int) (~(((/* implicit */int) ((short) (-(((/* implicit */int) var_6))))))));
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_3] [i_3])) : (2147482624)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_11)))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_11 [13ULL]))))), (max((((/* implicit */unsigned long long int) (_Bool)0)), (var_16))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))))));
                                var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? ((+(((/* implicit */int) (unsigned short)59140)))) : (((/* implicit */int) (!(arr_6 [i_4] [11U]))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_9 [i_3] [i_5]))));
                            }
                        } 
                    } 
                    arr_17 [i_2] [i_2] [i_2] [i_4] &= ((/* implicit */_Bool) var_6);
                    var_23 = ((/* implicit */unsigned long long int) var_1);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) var_10);
}
