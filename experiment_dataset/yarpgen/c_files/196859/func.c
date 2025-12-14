/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196859
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
    var_14 &= ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((((/* implicit */int) ((signed char) min((((/* implicit */short) var_13)), (var_5))))) > ((-(arr_3 [i_1]))));
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_1] [i_0])) | (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0])))))));
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_13)), ((-(var_0))))))));
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) min((-3949501369142384804LL), (((/* implicit */long long int) -1504018216))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) var_8))));
                    arr_10 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_7);
                }
                for (int i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */short) min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) ((long long int) arr_6 [i_0]))) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_11))))))));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) -1504018216))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 1; i_5 < 18; i_5 += 2) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 1504018195)) ? (((/* implicit */int) (unsigned char)113)) : (1504018215))));
                                var_20 = ((/* implicit */short) max(((unsigned short)0), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (var_8)))))))));
                                var_21 |= ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_17 [i_5 + 1] [i_5 + 1] [i_5 - 1])))), ((~(((/* implicit */int) arr_17 [i_5 - 1] [i_5 + 2] [i_5 - 1]))))));
                                var_22 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned int) -1504018217)) <= (arr_6 [i_5 - 1]))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_6 = 4; i_6 < 19; i_6 += 3) 
                {
                    var_23 |= ((/* implicit */long long int) (unsigned char)17);
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 4; i_7 < 17; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 17; i_8 += 3) 
                        {
                            {
                                arr_27 [i_7] [i_1] [i_6] [i_7] [i_8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) min((((/* implicit */int) (short)-22340)), ((-2147483647 - 1))))))));
                                var_24 = ((/* implicit */short) min((((/* implicit */int) (unsigned char)0)), (1504018217)));
                                var_25 = ((((/* implicit */_Bool) max((var_3), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) : (max((arr_15 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]), (((/* implicit */long long int) (unsigned char)113)))));
                                arr_28 [i_1] [i_7] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) var_2)), (arr_6 [i_6 + 1]))), (((/* implicit */unsigned int) min((((/* implicit */int) var_9)), (arr_21 [i_7] [i_6 - 3] [i_6] [i_7]))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_9 = 1; i_9 < 19; i_9 += 3) 
                {
                    arr_33 [i_9] [i_0] [i_0] = ((/* implicit */long long int) (signed char)94);
                    var_26 &= ((/* implicit */_Bool) (unsigned short)15024);
                    var_27 = ((/* implicit */_Bool) -7007674337061229632LL);
                }
            }
        } 
    } 
}
