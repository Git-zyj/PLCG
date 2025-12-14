/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217215
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                {
                    var_13 = ((((/* implicit */int) ((_Bool) ((arr_9 [i_0] [i_1] [i_2 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15383))) : (arr_4 [i_0] [i_1] [i_2]))))) < (((var_9) + (((/* implicit */int) (unsigned short)50152)))));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0] [i_1]))))) : ((((!(((/* implicit */_Bool) (unsigned short)50152)))) ? (arr_4 [i_2] [i_2 - 2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    var_15 = ((/* implicit */unsigned short) arr_1 [i_1] [i_2]);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [i_4 + 1] [i_4 + 1])) ? (((/* implicit */int) arr_12 [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) arr_12 [i_4 + 1] [i_4 + 1])))) ^ (((((/* implicit */_Bool) ((int) arr_10 [i_3]))) ? ((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_10 [i_4])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)15383)) > (((/* implicit */int) arr_14 [i_3])))))))));
            /* LoopSeq 2 */
            for (unsigned char i_5 = 2; i_5 < 20; i_5 += 1) 
            {
                var_17 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_3] [i_3] [i_4 + 1] [i_5]))))) ? (((((/* implicit */_Bool) (short)30438)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) arr_15 [i_3] [i_3] [i_3])))) : ((+(((/* implicit */int) (_Bool)1)))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_5 - 1])) ? (((/* implicit */int) arr_19 [i_3] [i_5])) : (((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_5 + 1]))))) ? (((/* implicit */int) arr_14 [i_3])) : ((+(((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_5])))))) - (37707)))));
                var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_14 [i_4 + 1])) : (((((((/* implicit */int) arr_10 [i_4 + 1])) + (2147483647))) >> (((((/* implicit */int) arr_15 [i_5] [i_3] [i_4])) - (45122)))))))) ? (((arr_13 [i_4 + 1] [i_4 + 1]) + (arr_13 [i_4 + 1] [i_4 + 1]))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [i_3] [i_5])) ? (77809304028940551LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-103))))) / (((/* implicit */long long int) ((var_6) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) arr_14 [i_5 - 2]))))))))));
            }
            /* vectorizable */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                arr_24 [i_3] [i_4] [i_4] = arr_12 [i_4 + 1] [i_4 + 1];
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_27 [i_3] [i_4] [i_6] [i_7] [i_7] [i_8]))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)98)) < (((/* implicit */int) (unsigned short)41469))));
                        }
                    } 
                } 
            }
            arr_31 [i_4] = ((/* implicit */unsigned long long int) (unsigned short)1);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
        {
            for (unsigned int i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((((((/* implicit */int) arr_10 [i_9])) < (((/* implicit */int) (unsigned short)13950)))) || (((/* implicit */_Bool) ((unsigned char) arr_10 [i_3])))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((max((arr_32 [i_3] [i_9]), (arr_32 [i_3] [i_9]))), (((/* implicit */unsigned short) arr_17 [i_3] [i_9] [i_9] [i_10])))))) + (max((max((arr_33 [i_3]), (((/* implicit */unsigned int) arr_14 [i_3])))), (((/* implicit */unsigned int) (unsigned short)24066))))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 22; i_12 += 2) 
                        {
                            {
                                arr_45 [i_3] [i_10] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)56128))))) ? (((((/* implicit */_Bool) arr_13 [i_9] [i_12])) ? (((/* implicit */int) arr_41 [i_3] [i_9] [i_10] [i_11] [i_12])) : (((/* implicit */int) arr_14 [i_3])))) : (((/* implicit */int) (unsigned char)6))))) & (((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_3] [i_10])) / (-492804955)))) ? (((long long int) (unsigned char)128)) : (((/* implicit */long long int) ((/* implicit */int) max((arr_38 [i_10] [i_9]), (((/* implicit */unsigned short) arr_17 [i_3] [i_3] [i_12] [i_11]))))))))));
                                var_23 = ((/* implicit */long long int) (~(((/* implicit */int) arr_41 [i_3] [i_9] [i_10] [i_11] [i_12]))));
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (_Bool)0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned short i_13 = 2; i_13 < 16; i_13 += 2) 
    {
        var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (arr_33 [i_13 + 3])))) ? (((((/* implicit */_Bool) arr_23 [i_13] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)41))) : (3870434617U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50154))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_13 + 4])))));
        var_26 = ((/* implicit */unsigned int) arr_49 [i_13 - 2] [i_13]);
    }
    var_27 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)74))))) << ((((~(var_10))) - (2077357268)))))));
}
