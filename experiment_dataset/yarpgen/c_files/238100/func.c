/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238100
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 &= ((/* implicit */long long int) 0U);
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    arr_8 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) (+(max((((/* implicit */unsigned int) (signed char)0)), (387261569U)))))) ^ (((((/* implicit */long long int) (-(((/* implicit */int) (signed char)0))))) / (max((((/* implicit */long long int) var_0)), (arr_4 [i_2] [i_1])))))));
                    var_17 += ((/* implicit */signed char) (+(((/* implicit */int) (!(((((/* implicit */_Bool) arr_5 [i_0] [i_0])) && (((/* implicit */_Bool) var_7)))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) max(((((-(((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))) / (((/* implicit */int) arr_2 [i_0])))), ((-(((((/* implicit */_Bool) 387261569U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [1U] = ((/* implicit */short) (~(((/* implicit */int) arr_10 [i_4 + 1] [i_4] [i_4 - 2] [i_4 - 2] [i_4 - 1]))));
                                arr_14 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0] [i_0] = 3907705727U;
                                var_19 = ((/* implicit */unsigned char) var_15);
                                var_20 = ((/* implicit */unsigned char) ((unsigned int) arr_7 [i_4] [i_4] [i_4 - 1] [i_4]));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_0] [i_1]))))) ? ((-((+(((/* implicit */int) var_13)))))) : ((+((-(((/* implicit */int) var_9))))))));
                }
                for (signed char i_5 = 3; i_5 < 15; i_5 += 4) 
                {
                    arr_19 [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_9 [i_0] [i_0] [(signed char)4] [i_0]), (arr_9 [(short)3] [i_1] [i_5 - 1] [i_0])))) ? (((/* implicit */int) arr_7 [(unsigned short)2] [i_1] [i_5] [i_0])) : (max(((~(((/* implicit */int) arr_3 [i_1] [i_5 - 3] [i_5 - 3])))), (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))));
                    arr_20 [i_5] = ((/* implicit */short) (+(((/* implicit */int) max((arr_7 [i_5 - 2] [i_5 + 1] [i_5 - 1] [(signed char)12]), (((/* implicit */unsigned char) var_15)))))));
                    var_22 = (~(0U));
                    var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_16 [(unsigned char)2] [i_0]))));
                }
                for (int i_6 = 1; i_6 < 15; i_6 += 2) 
                {
                    arr_25 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
                    arr_26 [i_0] [i_0] [i_1] [(unsigned char)0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_17 [i_6]), (((/* implicit */short) (!(arr_18 [i_6] [i_6 + 1] [i_6 - 1]))))))) || (((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0]))));
                }
                var_24 = ((/* implicit */signed char) arr_12 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1]);
                /* LoopSeq 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_25 ^= ((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_7])) || (((/* implicit */_Bool) arr_6 [i_0])))), ((!(((/* implicit */_Bool) arr_22 [i_7] [i_1] [i_0])))))) ? (((unsigned int) ((((/* implicit */int) var_13)) | (((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */short) 4095U);
                        arr_31 [i_7] [i_7] [i_1] [i_7] = ((/* implicit */_Bool) (+(max((((/* implicit */int) arr_7 [i_8] [i_7] [i_1] [i_0])), ((-(((/* implicit */int) arr_9 [i_0] [4U] [(unsigned char)13] [i_0]))))))));
                        var_27 += ((/* implicit */signed char) max((arr_11 [i_0]), (max((max((((/* implicit */unsigned char) var_3)), (arr_1 [i_0]))), (((/* implicit */unsigned char) arr_30 [12]))))));
                    }
                    arr_32 [i_7] = ((/* implicit */signed char) arr_7 [(_Bool)1] [i_7] [i_1] [i_0]);
                }
                for (signed char i_9 = 1; i_9 < 15; i_9 += 2) 
                {
                    var_28 += ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_16 [i_0] [i_0])), (((((/* implicit */_Bool) max((((/* implicit */int) var_14)), (arr_23 [i_0] [(unsigned short)14] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_12)), (var_14))))) : (var_10)))));
                    arr_35 [i_0] [i_1] [i_9] [i_0] = ((/* implicit */unsigned short) ((min(((-(arr_33 [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (arr_23 [i_0] [i_1] [i_9])))))) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_9 + 1] [i_9 + 1])))))));
                    arr_36 [i_9] [(unsigned short)11] [i_9] = ((/* implicit */long long int) ((arr_33 [i_0] [i_1] [i_0] [i_0]) * (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_21 [i_0] [7LL] [2LL])))), (((/* implicit */int) min((arr_10 [i_9 + 1] [(signed char)13] [(signed char)13] [i_1] [i_0]), (var_5)))))))));
                    var_29 += ((/* implicit */short) arr_33 [i_0] [i_0] [i_1] [i_9]);
                }
                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) max(((-((+(arr_6 [i_0]))))), (((/* implicit */unsigned int) max((arr_23 [i_0] [i_1] [i_1]), (((/* implicit */int) var_0))))))))));
            }
        } 
    } 
    var_31 += var_2;
}
