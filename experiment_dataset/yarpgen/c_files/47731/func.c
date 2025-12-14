/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47731
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
    var_10 = ((/* implicit */unsigned char) var_1);
    var_11 = ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned int) ((905480578) - (-1)))) - (var_4))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 905480596))));
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    var_12 = ((/* implicit */int) min((var_12), ((~(((/* implicit */int) (unsigned short)13140))))));
                    arr_9 [(signed char)10] &= ((/* implicit */unsigned long long int) var_3);
                }
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    var_13 |= ((((/* implicit */unsigned long long int) (~(var_2)))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)189)))))) ^ (max((((/* implicit */unsigned long long int) arr_1 [i_3])), (arr_11 [i_3] [i_3] [i_3] [i_3]))))));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_0 [i_0 + 1] [i_0])))))))));
                }
                for (signed char i_4 = 1; i_4 < 17; i_4 += 3) 
                {
                    var_15 = ((/* implicit */int) var_6);
                    arr_16 [i_0 + 1] [i_0] [i_0] = ((long long int) (-(((/* implicit */int) var_9))));
                    var_16 = ((/* implicit */short) ((unsigned short) (unsigned char)90));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (unsigned short i_5 = 1; i_5 < 13; i_5 += 4) 
    {
        for (long long int i_6 = 2; i_6 < 15; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        arr_30 [i_5 + 3] [i_6] [i_6] [i_6] = (-(((/* implicit */int) arr_19 [i_5 - 1])));
                        /* LoopSeq 4 */
                        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                        {
                            arr_34 [i_6] [i_6] [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6] = ((/* implicit */unsigned int) ((arr_24 [i_5 + 1] [i_5 + 1] [i_5 - 1]) ^ (arr_24 [i_5 + 3] [i_5 + 3] [i_5 + 3])));
                            arr_35 [i_6] [i_6 + 1] [i_6 + 1] [i_6] [i_7] [i_6] = ((/* implicit */signed char) (~(((unsigned int) arr_17 [i_9] [i_8]))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */signed char) (-(((/* implicit */int) arr_31 [i_5 + 1] [i_5 + 1] [i_5]))));
                            arr_38 [i_5] [i_6] [i_6 + 1] [i_6] [i_7] [i_7] [i_6] = ((/* implicit */short) ((unsigned long long int) -1));
                        }
                        for (unsigned int i_11 = 2; i_11 < 13; i_11 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned short) 917287705U);
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_17 [i_5] [i_5]))));
                            arr_43 [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-35))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 16; i_12 += 3) 
                        {
                            arr_47 [i_12] [i_6] [i_7] [i_6] [i_5] = arr_17 [i_5] [i_5];
                            var_21 += ((/* implicit */int) ((unsigned int) arr_42 [i_12] [i_8] [i_6 - 1] [i_6 - 1] [i_5 + 3]));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_13 = 0; i_13 < 16; i_13 += 1) 
                    {
                        arr_51 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((unsigned int) arr_50 [i_5 + 3] [i_6] [i_5] [i_5]));
                        var_22 = ((/* implicit */int) arr_18 [i_5]);
                        arr_52 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */int) var_0);
                    }
                    var_23 &= ((/* implicit */unsigned short) (+(-905480579)));
                    var_24 = ((unsigned char) ((short) (+(var_2))));
                }
            } 
        } 
    } 
}
