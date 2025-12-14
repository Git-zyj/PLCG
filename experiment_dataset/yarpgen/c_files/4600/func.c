/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4600
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((_Bool) var_9)) ? (((unsigned int) arr_3 [i_0] [i_1])) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_14 [i_1] [(unsigned short)9] = ((/* implicit */unsigned short) (-(((/* implicit */int) max(((signed char)-107), (arr_9 [i_1] [i_1] [(signed char)5] [(short)4] [i_4]))))));
                                var_20 |= ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned short)13236)) : (((/* implicit */int) var_13)))), (((/* implicit */int) ((unsigned char) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]))))) + (((((/* implicit */int) arr_8 [i_4 - 4] [i_1] [i_1] [i_3] [11LL] [i_3])) * (((/* implicit */int) var_17))))));
                                var_21 = ((/* implicit */_Bool) min((max((var_16), (((/* implicit */int) (signed char)-116)))), (((/* implicit */int) min((((/* implicit */short) (signed char)-99)), (var_1))))));
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (~(((((((/* implicit */int) arr_13 [i_4] [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 2] [i_4])) + (2147483647))) >> (((var_6) - (6166547695061534591LL))))))))));
                                arr_15 [i_0] [i_1] [11U] [i_3] [i_4] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) var_16)), (4294967295U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_4 + 1] [i_2])) && (((/* implicit */_Bool) arr_7 [i_4 - 1] [i_1] [(unsigned char)11]))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) max((max((arr_5 [i_2]), (((/* implicit */unsigned long long int) var_5)))), ((+(arr_5 [i_0])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        for (short i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            {
                var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) (-(arr_19 [i_5] [i_5] [i_6])))) ? (((/* implicit */int) var_14)) : (((((/* implicit */int) var_17)) | (((/* implicit */int) (signed char)109)))))) | ((-(min((((/* implicit */int) arr_20 [i_5] [i_5])), (var_16)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) min((var_5), (var_5)));
                                var_26 = ((/* implicit */signed char) var_3);
                            }
                        } 
                    } 
                } 
                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) ((var_17) || (((/* implicit */_Bool) 11583028744069563711ULL))))))))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) ((short) ((11583028744069563712ULL) < (((/* implicit */unsigned long long int) 5111484123702374674LL)))))))))));
                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) max((((/* implicit */unsigned long long int) (short)-18732)), (min((((unsigned long long int) var_12)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))))))))))));
            }
        } 
    } 
    var_29 |= var_1;
    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */int) min((((/* implicit */short) var_17)), (var_9)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))))));
}
