/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203245
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
    var_17 = ((/* implicit */short) var_9);
    var_18 = ((/* implicit */unsigned long long int) 1564503787);
    var_19 = ((/* implicit */signed char) var_1);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_5))) ? (((/* implicit */unsigned long long int) (+((((_Bool)0) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (_Bool)1))))))) : (973683758408262928ULL)));
                    var_21 &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((arr_1 [i_2] [i_1]) << (((((/* implicit */int) arr_3 [16ULL] [i_1] [i_2])) - (250)))))))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)20)))) : (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_2 [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) (~(((unsigned int) arr_3 [i_1] [i_1] [i_0]))));
                                var_23 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 - 1] [i_1])) ? (arr_9 [i_1 - 2] [i_1 - 2] [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_9 [i_1 + 1] [i_1 + 1] [7])))) : (((((/* implicit */_Bool) arr_9 [i_1 - 2] [i_1] [i_1])) ? (arr_9 [i_1 - 1] [i_1 - 3] [i_1]) : (arr_9 [i_1 - 1] [i_1] [i_1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            {
                var_24 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_6]))));
                var_25 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) arr_11 [i_6])))));
                /* LoopSeq 2 */
                for (unsigned int i_7 = 1; i_7 < 21; i_7 += 3) 
                {
                    var_26 &= ((/* implicit */unsigned char) arr_12 [i_5] [i_5] [i_7 - 1]);
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned int) var_9);
                        var_28 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_8] [i_5] [i_5]))) : (min((4129534418U), (((/* implicit */unsigned int) arr_14 [i_8] [i_5] [i_5])))))))));
                        var_29 -= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(var_12))))))) ^ ((+(((/* implicit */int) ((_Bool) arr_17 [i_5] [i_7])))))));
                    }
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) ^ (min((arr_12 [(signed char)0] [i_6] [i_7 - 1]), (arr_12 [i_5] [13U] [i_7 + 1])))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 1; i_9 < 21; i_9 += 2) 
                    {
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_9 + 1] [i_10 - 1] [i_10 - 1])))))));
                                var_32 = ((/* implicit */long long int) (-(((/* implicit */int) (!((!(var_2))))))));
                            }
                        } 
                    } 
                    var_33 ^= ((/* implicit */signed char) ((((((/* implicit */int) arr_14 [i_7 - 1] [i_7 - 1] [i_7])) - (((/* implicit */int) arr_14 [i_7 + 1] [i_7 - 1] [i_7 - 1])))) - (((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) arr_14 [i_7 + 1] [i_7 + 1] [i_7]))))));
                }
                for (unsigned short i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    var_34 *= arr_22 [i_5] [i_5] [i_5] [i_5];
                    var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((unsigned char) (signed char)(-127 - 1)))) ? (((((/* implicit */_Bool) arr_25 [i_5] [i_5] [(unsigned char)20] [i_6] [i_6] [i_11] [i_11])) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_3))))))));
                }
                var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_5] [i_6]))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (short)2334))))))) << ((+(((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
}
