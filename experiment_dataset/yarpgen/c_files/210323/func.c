/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210323
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
    for (long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) ((long long int) max((((/* implicit */int) (_Bool)0)), ((+(((/* implicit */int) (_Bool)0)))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) (+((-9223372036854775807LL - 1LL))));
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (((-(arr_3 [i_0 - 1] [i_0 + 1] [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_0 - 1] [i_0 + 1] [i_0]) > (arr_3 [i_0 - 1] [i_0 + 1] [i_0]))))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) ((unsigned int) 9223372036854775807LL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0U))))) : (((/* implicit */int) (_Bool)0)))), ((~((~(((/* implicit */int) (short)(-32767 - 1)))))))));
                    var_19 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */unsigned long long int) arr_0 [1LL])) - (2147483520ULL))))), (max((((/* implicit */unsigned long long int) (short)32767)), (min((((/* implicit */unsigned long long int) (short)2048)), (7383876731361067096ULL)))))));
                }
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */short) (signed char)12)), ((short)2472))))))) ? (1234416896U) : (((/* implicit */unsigned int) var_10))));
                    var_21 -= ((/* implicit */_Bool) var_10);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 11; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_22 = var_12;
                                arr_22 [i_0 - 2] [11U] [11U] [i_0 - 2] [i_0] = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
                            }
                        } 
                    } 
                }
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((short) (+(((((/* implicit */_Bool) (short)-20712)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_5)))))))));
            }
        } 
    } 
    var_24 &= min(((short)24576), (((/* implicit */short) (!(((/* implicit */_Bool) var_2))))));
    var_25 = ((/* implicit */short) var_1);
}
