/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203908
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
    var_20 ^= ((/* implicit */int) (signed char)-40);
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? ((+(var_10))) : ((-((-(((/* implicit */int) var_13)))))))))));
    var_22 = ((/* implicit */unsigned int) ((signed char) min(((-(((/* implicit */int) (signed char)44)))), (((/* implicit */int) (signed char)-38)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((((/* implicit */_Bool) 17386368316187892818ULL)) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23634))))) << (((((/* implicit */int) ((short) arr_1 [i_3]))) + (2146)))))), ((-(arr_9 [i_4] [i_3] [i_2] [i_1] [1ULL] [i_0]))))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_3 [i_0] [i_0])), ((~(((/* implicit */int) arr_3 [i_3] [i_1]))))));
                                var_24 = ((/* implicit */signed char) ((arr_8 [(unsigned short)5] [20ULL]) >> (((((((/* implicit */_Bool) ((long long int) arr_5 [i_4]))) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)51139))) > (arr_9 [i_0] [i_1] [i_1] [19U] [i_3] [i_4]))))))) - (2980906276U)))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned short)1792)), (min((arr_10 [i_0] [11LL] [i_0] [i_0]), (((/* implicit */unsigned int) var_13)))))))));
                var_26 = ((/* implicit */int) min((((/* implicit */long long int) (signed char)99)), (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [(short)16] [i_0])) ? (((/* implicit */long long int) var_5)) : (arr_9 [i_1] [i_0] [19LL] [20] [i_0] [20])))));
            }
        } 
    } 
}
