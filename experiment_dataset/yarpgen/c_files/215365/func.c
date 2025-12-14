/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215365
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) var_13);
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) (~((~(min((((/* implicit */int) (signed char)93)), (-372619548)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            {
                var_21 |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_10)) ? (arr_13 [i_4] [4] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                arr_16 [(short)13] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_4])))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        {
                            arr_21 [i_6] [i_5] [i_4] [i_5] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_14 [i_4])) - (((/* implicit */int) arr_14 [i_3])))), ((~(((/* implicit */int) arr_14 [i_4]))))));
                            arr_22 [i_5] [(unsigned short)1] [(unsigned short)1] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (16886748512575471372ULL)));
                            var_22 = ((/* implicit */long long int) (signed char)(-127 - 1));
                        }
                    } 
                } 
                var_23 = ((((/* implicit */_Bool) max((8431954184554087758LL), (((/* implicit */long long int) arr_15 [i_3] [i_3] [i_4]))))) ? (((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [i_3])) : ((~(((/* implicit */int) (signed char)0)))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) ((short) var_8));
    /* LoopNest 3 */
    for (signed char i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            for (unsigned int i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                {
                    arr_30 [i_9] [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) arr_24 [i_7])))));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) var_18)), (12296572022983390654ULL)))))) ? (((((/* implicit */_Bool) arr_25 [i_7])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_19 [i_9] [i_8] [(unsigned short)7] [i_7])))) : (((((-372619546) <= (((/* implicit */int) var_12)))) ? (((1166339222) & (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_26 [i_7] [i_7] [i_9]))))));
                    var_26 = ((/* implicit */long long int) 2176355581U);
                }
            } 
        } 
    } 
}
