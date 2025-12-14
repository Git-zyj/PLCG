/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37215
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
    var_10 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_8)))))));
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) (unsigned char)224)))) * (((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) (_Bool)1);
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    arr_9 [i_2] [(short)6] [i_2] = ((/* implicit */unsigned int) arr_5 [i_1] [i_1] [i_1]);
                    var_13 += ((/* implicit */unsigned long long int) (_Bool)1);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned short)19]))) - (((((/* implicit */_Bool) arr_7 [i_0] [i_3] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 2] [i_0 - 1]))) : ((~(arr_2 [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 1; i_5 < 23; i_5 += 4) 
                        {
                            {
                                var_15 ^= ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_4 [i_0 - 1] [i_5 - 1]) : (((/* implicit */int) (unsigned char)182))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) (((_Bool)1) ? (arr_6 [i_1]) : (var_2)))) ? (3300419758U) : (((/* implicit */unsigned int) arr_4 [i_3] [i_3])))))))));
                                var_17 ^= ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)42660)), (((((/* implicit */_Bool) (short)-16564)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    var_18 = max(((-(((/* implicit */int) (!((_Bool)1)))))), (((((/* implicit */_Bool) max((var_5), (var_5)))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)72)) > (((/* implicit */int) (unsigned char)161))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) (+(min((var_8), (((/* implicit */unsigned int) var_1))))));
                                arr_23 [19LL] [i_7] [i_3] [i_7] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)188)) | (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)215))) : (929350327U)))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) max((var_20), (var_5)));
                }
            }
        } 
    } 
}
