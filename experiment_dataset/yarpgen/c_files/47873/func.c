/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47873
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_20 = ((signed char) ((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3 - 2])) ? (((/* implicit */int) arr_8 [i_3 - 2] [2U] [(short)6] [i_3] [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) arr_8 [i_3 + 1] [(signed char)3] [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 2]))));
                                var_21 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)7))) < (min((arr_0 [i_1]), (arr_1 [i_3]))))));
                                var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)29)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (3082711095U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (((unsigned long long int) arr_0 [i_2]))))));
                                var_23 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) (short)13))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                arr_18 [i_2] [i_1] [i_2] [i_1] [i_1] = arr_17 [i_0] [i_5] [i_2] [(signed char)9] [(signed char)2] [i_2];
                                var_24 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) ((short) (short)26)))))), ((-(var_2)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */signed char) ((unsigned int) var_3));
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 2; i_7 < 9; i_7 += 1) 
    {
        for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    for (signed char i_10 = 4; i_10 < 11; i_10 += 1) 
                    {
                        for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
                        {
                            {
                                var_26 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_8 [i_7 + 3] [i_7] [i_7] [i_7 + 2] [(short)14] [i_10 - 1]), (((signed char) var_14))))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_7] [i_8] [i_10] [i_8] [i_10] [i_10 - 4])))))));
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-27)) == (((/* implicit */int) (signed char)-1))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    for (signed char i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        for (unsigned int i_14 = 2; i_14 < 11; i_14 += 2) 
                        {
                            {
                                arr_38 [(signed char)7] [i_8] [i_12] [i_13] [i_13] [0U] = ((/* implicit */signed char) max((((unsigned int) arr_21 [i_7 - 1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_7 - 1] [i_7] [i_7] [12U] [i_7] [i_7])) ? (arr_17 [i_7 - 1] [i_12] [i_12] [i_7 - 1] [i_14] [i_13]) : (var_18)))) ? (max((var_6), (((/* implicit */unsigned int) var_15)))) : (((var_6) | (var_5)))))));
                                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (~((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_19))) == (arr_0 [(signed char)8])))))))))));
                                var_29 = ((/* implicit */signed char) max((max((var_6), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-37))))))), (((/* implicit */unsigned int) var_0))));
                                var_30 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)65)) ^ ((+(((/* implicit */int) arr_25 [i_14] [i_13] [i_8] [i_7 + 2]))))));
                                var_31 -= max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (signed char)-86))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)38))))), (arr_23 [i_7] [i_8]));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 12; i_15 += 1) 
                {
                    for (signed char i_16 = 2; i_16 < 11; i_16 += 4) 
                    {
                        {
                            var_32 += var_3;
                            var_33 = ((unsigned int) ((((/* implicit */_Bool) (-(var_12)))) ? (((((/* implicit */_Bool) arr_15 [i_7] [i_8])) ? (arr_39 [3U] [6ULL] [i_15] [i_16 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_7] [i_8] [i_15] [i_15] [i_16]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), (((/* implicit */short) arr_4 [i_15] [i_15]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
