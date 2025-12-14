/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249652
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
    var_14 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_13)), (var_5)));
    var_15 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_8 [i_0] [i_0] [(signed char)2] = ((/* implicit */short) (signed char)76);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_16 *= ((/* implicit */unsigned int) (signed char)-77);
                                var_17 = ((/* implicit */unsigned long long int) min((arr_6 [i_1] [(signed char)11]), (((/* implicit */unsigned short) arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [(short)11] [i_0]))));
                                var_18 &= ((/* implicit */_Bool) ((unsigned long long int) (short)26699));
                                var_19 = ((/* implicit */short) min((min((min(((unsigned short)65535), (arr_0 [i_0] [(unsigned char)9]))), (((/* implicit */unsigned short) arr_13 [i_0] [i_1] [i_2] [i_1] [(short)7] [i_0])))), (min((arr_6 [i_0] [(short)9]), (arr_6 [i_0] [i_0])))));
                            }
                        } 
                    } 
                } 
                arr_20 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1])) ? (((/* implicit */int) ((unsigned short) min((var_11), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_0])))))) : ((~(((/* implicit */int) (short)8616))))));
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            {
                                arr_27 [i_0] [i_7] [i_0] [i_6] [(unsigned short)0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) (short)-8616)) * (((/* implicit */int) (unsigned char)248))))), (min((arr_25 [i_0] [i_1] [i_5] [i_6] [i_6] [i_5] [i_7]), (((/* implicit */unsigned int) arr_2 [i_6]))))));
                                arr_28 [i_0] [i_7] [i_5] [i_7] [i_6] [i_6] = ((/* implicit */signed char) (~((~(1066338690U)))));
                                arr_29 [i_0] [(signed char)0] [i_5] [i_6] [i_7] [i_7] = ((/* implicit */short) min((((/* implicit */unsigned short) ((arr_19 [i_0] [(unsigned short)10] [(short)8]) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-8620)))))), (var_12)));
                            }
                        } 
                    } 
                } 
                var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_6 [11U] [i_1])), (((((/* implicit */_Bool) var_2)) ? (arr_25 [i_0] [i_0] [(signed char)0] [(signed char)0] [12U] [12U] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [(unsigned char)6])))))))) ? (((/* implicit */int) ((unsigned char) ((short) var_0)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [(short)1] [i_1])) : (((/* implicit */int) arr_15 [i_0] [(short)3] [i_1] [i_1]))))) ? ((-(((/* implicit */int) (short)-20480)))) : ((-(((/* implicit */int) var_0))))))));
            }
        } 
    } 
}
