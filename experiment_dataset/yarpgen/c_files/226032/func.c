/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226032
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)116)), (var_1)))), (6128536136282027270ULL)))) ? (((/* implicit */int) ((short) var_3))) : (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned int) (((-((+(2499672276U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(6128536136282027270ULL))))))))));
                var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 2] [i_1]))))) : (max((((/* implicit */int) var_7)), (253952)))))) ? (((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [(unsigned short)4] [(unsigned short)4])), (var_0)))) - (((/* implicit */int) ((short) arr_2 [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3078227445378799187LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-36))) : (1795295020U)))) && (((/* implicit */_Bool) (~(arr_1 [i_0] [(unsigned short)22])))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        {
                            arr_15 [i_2] [(unsigned char)2] [i_4] [i_4] = ((/* implicit */_Bool) (+(((((/* implicit */int) ((signed char) arr_8 [i_2] [i_3] [8]))) / (((/* implicit */int) (short)(-32767 - 1)))))));
                            var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_4)))) ? (max((2499672276U), (((/* implicit */unsigned int) arr_2 [i_5])))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_2)) ? (-2147483642) : (((/* implicit */int) arr_13 [i_5])))))))));
                            arr_16 [i_2] [i_4] = ((/* implicit */long long int) (~(((unsigned long long int) ((arr_6 [i_2] [i_2]) | (((/* implicit */int) arr_11 [i_3] [i_3] [i_4])))))));
                        }
                    } 
                } 
                arr_17 [i_2] = ((/* implicit */unsigned int) ((long long int) (((_Bool)1) ? (arr_8 [i_2] [i_3] [i_3]) : ((-2147483647 - 1)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((-(var_4))) << ((((-(((/* implicit */int) var_5)))) + (49)))))) ? ((-(((/* implicit */int) ((var_14) == (((/* implicit */long long int) 2499672285U))))))) : (((/* implicit */int) (!(var_6))))));
}
