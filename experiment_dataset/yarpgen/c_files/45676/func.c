/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45676
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
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((max((2237784969458194384ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_1]))))))) % (((((/* implicit */unsigned long long int) arr_8 [i_0 + 1] [i_0 - 2] [i_2])) | (var_8))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) (-(((max((arr_1 [i_2]), (((/* implicit */unsigned int) (unsigned char)235)))) | (((/* implicit */unsigned int) ((int) (unsigned char)123)))))));
                    var_15 ^= ((/* implicit */_Bool) var_0);
                }
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
                    arr_13 [i_0 + 1] [i_0] |= ((/* implicit */long long int) ((((((2372738812954884704ULL) - (18446744073709551614ULL))) & (arr_4 [i_0 - 2] [i_0 + 1] [i_1]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(6359123589735137778LL))) < (((/* implicit */long long int) ((/* implicit */int) (!(arr_0 [i_0])))))))))));
                }
                for (unsigned short i_4 = 3; i_4 < 16; i_4 += 3) 
                {
                    var_16 = ((/* implicit */_Bool) ((arr_0 [i_1]) ? (max((arr_2 [i_4 + 1] [i_4 - 2] [(unsigned short)16]), (arr_2 [i_4 - 3] [i_4 + 4] [i_4]))) : (((/* implicit */unsigned long long int) ((int) ((arr_11 [i_0] [i_1] [i_0] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2])))))))));
                    arr_16 [i_0] [i_1] [i_0] [i_0] |= ((/* implicit */long long int) (+(16208959104251357208ULL)));
                    /* LoopSeq 2 */
                    for (long long int i_5 = 2; i_5 < 19; i_5 += 3) /* same iter space */
                    {
                        arr_21 [i_1] [i_4 - 3] [i_1] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) < (var_9))))) : ((+(var_7))))), (((max((16208959104251357232ULL), (((/* implicit */unsigned long long int) var_5)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_0 [i_4])))))))));
                        arr_22 [i_0 + 1] [16U] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_0 [i_0]))))), (max((16208959104251357208ULL), (18446744073709551615ULL)))))));
                        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 16208959104251357228ULL))));
                    }
                    for (long long int i_6 = 2; i_6 < 19; i_6 += 3) /* same iter space */
                    {
                        var_18 = var_6;
                        var_19 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) 2211879856246141171LL)) / (16074005260754666912ULL)))));
                    }
                }
                /* LoopNest 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (-(max((16208959104251357225ULL), (16506165418077361735ULL)))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (arr_7 [i_0] [i_0] [i_7])));
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max(((-(((/* implicit */int) ((short) 2ULL))))), ((-((-(((/* implicit */int) arr_3 [i_8])))))))))));
                                var_23 = ((/* implicit */unsigned int) ((((max((((/* implicit */long long int) (unsigned char)24)), (-7647388877984156245LL))) - (((/* implicit */long long int) (+(((/* implicit */int) arr_23 [i_0 - 1] [i_1] [i_1] [(_Bool)1] [i_9]))))))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4932)))));
                            }
                        } 
                    } 
                } 
                var_24 += ((/* implicit */short) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (arr_7 [i_0] [i_0 - 2] [i_0]) : (var_10))) < (((/* implicit */unsigned long long int) (-(arr_27 [i_0] [i_0] [i_0] [i_1])))))))));
            }
        } 
    } 
    var_25 = var_0;
}
