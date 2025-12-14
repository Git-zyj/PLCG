/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220029
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 += ((/* implicit */unsigned int) ((short) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) % (arr_4 [i_0]))));
                    var_16 += ((/* implicit */unsigned int) arr_3 [i_2]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_17 += ((/* implicit */signed char) (((!(((/* implicit */_Bool) (-(var_5)))))) ? (((/* implicit */long long int) (-((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)96))))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (996224329U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))), (arr_9 [i_2] [i_1] [i_2] [i_3 - 1])))));
                                var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_4] [i_2] [i_3 - 1] [i_0])) ? (((/* implicit */unsigned long long int) 3926330163U)) : (((((/* implicit */_Bool) min((var_1), (((/* implicit */short) (_Bool)1))))) ? (arr_10 [i_3 - 1] [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                                var_19 += ((/* implicit */_Bool) var_2);
                                var_20 = ((/* implicit */unsigned long long int) (-((+(((((/* implicit */int) (_Bool)1)) | (var_8)))))));
                                var_21 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : ((((~(((/* implicit */int) (signed char)-29)))) | (((((/* implicit */int) var_14)) ^ (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_7 = 1; i_7 < 22; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            {
                                var_22 ^= (~(((((/* implicit */int) arr_23 [i_5 - 1] [i_7 + 3] [i_9] [i_9])) - (((/* implicit */int) arr_23 [i_5 - 1] [i_7 + 3] [i_9] [i_9])))));
                                var_23 -= ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) var_5)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    for (unsigned short i_11 = 0; i_11 < 25; i_11 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) ((unsigned char) arr_19 [i_5 - 1] [i_5 - 1] [i_5]));
                            arr_30 [i_6] [i_6] [i_10] = ((/* implicit */_Bool) -752277441);
                            arr_31 [i_11] [i_6] [i_6] [i_5] = ((/* implicit */_Bool) arr_28 [i_5] [i_6] [i_10] [i_11]);
                            var_25 ^= ((/* implicit */_Bool) max((arr_13 [i_10]), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ ((~(((/* implicit */int) arr_23 [i_11] [(unsigned char)22] [i_6] [i_11])))))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (((!(((/* implicit */_Bool) var_12)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_5 - 1] [i_5 - 1])) ? (((/* implicit */int) arr_22 [i_5 - 1])) : (((/* implicit */int) (_Bool)1))))))))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 25; i_12 += 2) 
                {
                    for (long long int i_13 = 0; i_13 < 25; i_13 += 2) 
                    {
                        {
                            var_27 ^= ((/* implicit */short) ((((_Bool) ((((/* implicit */int) (unsigned short)62363)) | (((/* implicit */int) arr_37 [i_5] [(unsigned short)14] [i_6] [i_12] [i_13]))))) ? (max((var_3), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((((/* implicit */int) arr_37 [i_5] [i_5 - 1] [i_6] [i_12] [i_13])) % (((((/* implicit */_Bool) arr_19 [i_6] [i_12] [(unsigned short)3])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10)))))))));
                            arr_39 [i_5 - 1] [i_6] [i_6] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_35 [i_5] [i_5 - 1] [i_5 - 1])) ? (arr_14 [i_5 - 1]) : (arr_35 [i_5] [i_5 - 1] [i_5 - 1])))));
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) var_14))));
                        }
                    } 
                } 
            }
        } 
    } 
}
