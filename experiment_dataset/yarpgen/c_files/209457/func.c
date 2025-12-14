/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209457
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
    var_13 = ((/* implicit */long long int) var_8);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0 + 2] = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 3] [i_0 + 3])))))) : (((((/* implicit */unsigned long long int) arr_1 [i_0 + 2] [(signed char)2])) % (var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((1374533063U), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 3] [i_0 - 2]))) : (min((((/* implicit */unsigned int) var_11)), (arr_1 [i_0] [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (short)31949))))), (arr_1 [i_0 - 3] [i_0])));
    }
    for (short i_1 = 3; i_1 < 13; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((((max((((/* implicit */unsigned int) arr_5 [i_1])), (arr_1 [i_1] [i_1 - 2]))) << (((((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (arr_4 [0U]))) - (3762978181298860542LL))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_14 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (signed char)-15)))) % (((((/* implicit */int) arr_0 [i_1] [i_2])) + (((/* implicit */int) arr_5 [i_2]))))));
            arr_9 [i_1] [(short)0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_1 + 1] [(unsigned short)8]))));
        }
        for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            var_15 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_5 [i_3]))))));
            var_16 = ((/* implicit */unsigned int) ((var_3) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_7 [i_1] [i_3])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) : ((+(arr_7 [i_1] [i_3]))))))));
        }
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            arr_16 [i_4] [i_4] = ((/* implicit */short) min((max((((/* implicit */unsigned int) (!(arr_10 [1U])))), ((+(arr_7 [i_4] [i_4]))))), (((/* implicit */unsigned int) max(((+(((/* implicit */int) (short)-31950)))), (((/* implicit */int) max(((short)-31949), (((/* implicit */short) var_12))))))))));
            arr_17 [i_1] [i_1] [i_4] = ((/* implicit */int) arr_8 [i_1] [i_4]);
            var_17 = (+((-((+(((/* implicit */int) arr_5 [i_1])))))));
        }
        for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            arr_20 [(short)9] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (+((+(arr_11 [7U] [6ULL] [i_5])))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(arr_13 [i_1] [(short)4] [i_1])))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_1 [i_1 - 1] [i_1 - 1])))))) : (((min((((/* implicit */unsigned long long int) var_6)), (arr_18 [i_1]))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [(_Bool)1] [i_5])))))))));
            var_18 = ((/* implicit */short) (-(min((arr_1 [(unsigned short)11] [(unsigned short)11]), (((/* implicit */unsigned int) ((arr_15 [i_5] [3U]) + (((/* implicit */int) var_1)))))))));
            var_19 = ((/* implicit */_Bool) max((((/* implicit */long long int) min((((((/* implicit */_Bool) var_6)) ? (arr_1 [i_1] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31947))))), (max((((/* implicit */unsigned int) arr_11 [i_1] [(short)10] [i_5])), (arr_19 [i_5] [i_1 - 3] [i_5])))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) arr_10 [i_1]))))) ? (((/* implicit */long long int) ((((arr_15 [i_5] [i_5]) + (2147483647))) << (((((/* implicit */int) var_6)) - (117)))))) : (arr_4 [i_1 - 1])))));
            var_20 -= ((/* implicit */short) (-(((((arr_11 [i_1 - 1] [i_1 - 3] [i_1 - 2]) + (2147483647))) << (((arr_11 [i_1 - 1] [i_1 - 3] [i_1 - 2]) + (2017391283)))))));
            arr_21 [i_1] [i_5] [i_5] = ((/* implicit */_Bool) arr_11 [i_5] [8] [i_1]);
        }
        arr_22 [i_1 - 2] = ((((/* implicit */int) ((signed char) ((unsigned char) arr_5 [i_1])))) + (((/* implicit */int) ((signed char) max((arr_5 [i_1]), (((/* implicit */short) var_8)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
    {
        arr_27 [i_6] = ((/* implicit */unsigned long long int) arr_23 [i_6]);
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            for (short i_8 = 2; i_8 < 22; i_8 += 2) 
            {
                {
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (+((+(((/* implicit */int) var_12)))))))));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) var_1))))))));
                    arr_35 [i_8] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_30 [i_8 - 2] [i_8 - 1] [i_8 - 2]) : (arr_30 [i_8 - 2] [i_8 + 1] [i_8])));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_7] [(short)15]))))) ? ((-(((/* implicit */int) var_6)))) : ((+(((/* implicit */int) var_4))))));
                    var_24 = ((/* implicit */long long int) (-(var_5)));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (min((var_4), ((unsigned short)43282)))))), ((((+(((/* implicit */int) var_11)))) + ((+(((/* implicit */int) var_11))))))));
}
