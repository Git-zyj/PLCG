/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223096
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
    var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))))));
    var_12 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((var_9) / (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? ((((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */unsigned long long int) (short)12263)), (0ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 2; i_2 < 12; i_2 += 1) 
                {
                    arr_10 [i_0] [i_1] [i_2 - 2] = ((/* implicit */short) (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25032))) : ((((((_Bool)1) || (((/* implicit */_Bool) (-2147483647 - 1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)-22143)))) : (1520642547591146447ULL)))));
                    var_13 = ((/* implicit */int) min((var_13), ((~(((((/* implicit */_Bool) arr_9 [i_2] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)12733))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_0] [i_0])) && ((!(((/* implicit */_Bool) 1991791689253709869LL))))));
                                arr_17 [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_5 [i_0]);
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) (short)4095))))));
                                var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_1])) : (0)))))) && (((/* implicit */_Bool) max((arr_7 [i_3] [i_1] [i_3]), (arr_7 [i_3] [i_2 - 2] [i_3]))))));
                            }
                        } 
                    } 
                }
                var_15 -= ((/* implicit */_Bool) arr_12 [i_1 - 2] [i_1] [i_0]);
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_13 [i_0] [i_1]))));
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((11783619537861074372ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [(short)0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_6) | (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_1])))))) ? (((/* implicit */int) arr_12 [(unsigned char)1] [(signed char)5] [(unsigned char)1])) : ((~(((/* implicit */int) arr_3 [i_1]))))))) : ((+(arr_4 [i_1] [i_1 - 2]))))))));
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 10; i_7 += 2) 
                        {
                            {
                                arr_28 [i_0] [i_0] = ((/* implicit */signed char) var_8);
                                arr_29 [i_5] [i_5] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_0);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
