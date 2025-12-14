/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45755
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
    var_20 = ((/* implicit */_Bool) var_11);
    var_21 = ((/* implicit */int) var_0);
    var_22 += ((/* implicit */unsigned short) (+((~(((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))))));
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -7892140614473439138LL)) ? (((/* implicit */int) (unsigned char)37)) : (((/* implicit */int) (unsigned char)234)))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)30))));
        var_24 = ((/* implicit */_Bool) var_19);
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (~(min((((/* implicit */unsigned int) (unsigned char)88)), (arr_5 [i_1])))))), (((arr_6 [i_1] [i_1]) / (arr_6 [i_1] [i_1])))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            var_25 = ((/* implicit */_Bool) (+(arr_9 [11U] [(signed char)11] [i_1])));
            arr_11 [i_1] [i_1] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned char)89))))));
            /* LoopNest 3 */
            for (signed char i_3 = 4; i_3 < 23; i_3 += 2) 
            {
                for (unsigned short i_4 = 2; i_4 < 24; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        {
                            arr_21 [i_5] [(short)12] [i_5] [i_5] [i_5] [i_2] = ((/* implicit */unsigned short) ((((arr_15 [i_1]) % (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) - (475636893U)))))) | (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [(_Bool)1]))))) % (((/* implicit */int) var_7)))))));
                            arr_22 [i_1] [9U] [i_4] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_14 [(unsigned char)7] [(_Bool)1] [5] [i_4 - 2])) - (arr_17 [i_2] [i_3] [i_3] [i_4 - 2]))) - (((arr_17 [i_3] [i_3] [i_3] [i_4 - 2]) - (((/* implicit */int) (unsigned char)219))))));
                            var_26 += ((/* implicit */unsigned short) arr_16 [i_3] [i_4 - 2] [(signed char)1] [i_5]);
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_6 = 1; i_6 < 23; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned short i_9 = 3; i_9 < 24; i_9 += 2) 
                    {
                        {
                            arr_34 [i_9] [(signed char)17] [i_7] [i_8] [i_8] [i_9 - 3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)255))));
                            arr_35 [i_1] [i_1] [(_Bool)1] [i_7] [(unsigned char)2] = arr_24 [i_6 + 2];
                            var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_1]))));
                            var_28 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) var_8)) : ((-(((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
            } 
            var_29 = ((((((/* implicit */_Bool) arr_32 [i_1] [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (((-9223372036854775807LL - 1LL)) < (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_1]))))))) : (((((/* implicit */_Bool) (short)24532)) ? (arr_25 [(signed char)20]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [(unsigned short)12] [i_1]))))))) << (((((/* implicit */_Bool) arr_18 [i_1] [2U] [i_1] [i_6 - 1])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_1] [i_6 + 1]))))));
            var_30 = ((/* implicit */short) (unsigned char)255);
        }
        arr_36 [(signed char)16] = ((/* implicit */unsigned short) (unsigned char)37);
    }
    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) 
    {
        var_31 = ((/* implicit */unsigned char) (short)-5108);
        var_32 = ((((/* implicit */_Bool) (~(((/* implicit */int) min((arr_26 [(_Bool)1] [i_10] [i_10]), (((/* implicit */short) (unsigned char)37)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) arr_4 [i_10]))))) : (arr_13 [i_10] [(signed char)21] [i_10] [(signed char)21]));
    }
    for (signed char i_11 = 1; i_11 < 17; i_11 += 1) 
    {
        var_33 += ((/* implicit */long long int) arr_33 [i_11] [(unsigned short)2]);
        var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)255))));
        var_35 = ((/* implicit */signed char) (~(((arr_5 [i_11]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
    }
}
