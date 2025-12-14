/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248330
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
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) var_5);
                    var_17 = ((/* implicit */int) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)11108)) : (((/* implicit */int) (unsigned short)49424))))), ((-(1923024675707846277LL))))) <= (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)54413), ((unsigned short)17367)))))));
                    var_18 = max((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)54397)), (-706223712)))), ((~(((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11107))) : (18446744073709551607ULL))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) (short)-32756)) ^ (((/* implicit */int) ((short) (unsigned short)65535)))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16114))) : (min((var_2), (((/* implicit */long long int) var_15))))))));
    /* LoopSeq 2 */
    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                {
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_8 [i_3] [i_3] [i_5])) : (((/* implicit */int) arr_7 [i_4] [i_3])))) <= (((/* implicit */int) arr_9 [i_3] [i_3]))))))));
                    arr_14 [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                    var_21 = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4] [i_4]))))));
                }
            } 
        } 
        var_22 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_3 [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)64997)) ? (((/* implicit */int) (unsigned short)23)) : (((/* implicit */int) arr_12 [i_3] [i_3])))), (((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_12 [i_3] [i_3]))))))) : (((((/* implicit */_Bool) (unsigned short)16112)) ? (((((/* implicit */_Bool) arr_8 [(signed char)5] [9ULL] [i_3])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [6LL] [6LL] [i_3] [i_3])) ? (((/* implicit */int) arr_7 [i_3] [i_3])) : (((/* implicit */int) (unsigned short)54413))))))));
        /* LoopSeq 2 */
        for (unsigned short i_6 = 2; i_6 < 10; i_6 += 2) 
        {
            var_23 = ((/* implicit */short) var_13);
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (arr_3 [i_3] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */int) (unsigned short)49421)) : (((/* implicit */int) ((unsigned short) arr_1 [i_6])))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_6 - 1] [i_3] [i_3] [i_3]))) % (((long long int) (unsigned short)26)))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_6])) ? (arr_2 [(_Bool)1] [i_6] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_6 + 1] [i_6 - 1] [i_6])))))), ((+((-9223372036854775807LL - 1LL))))))));
        }
        for (int i_7 = 4; i_7 < 11; i_7 += 3) 
        {
            arr_20 [i_3] [i_7 - 2] = ((/* implicit */long long int) (-(((/* implicit */int) ((short) (unsigned short)26)))));
            var_25 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_16 [i_7 - 4])))), (((/* implicit */int) max(((unsigned short)26553), (((/* implicit */unsigned short) arr_16 [i_7 + 1])))))));
            arr_21 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? ((-(((/* implicit */int) arr_12 [i_3] [i_3])))) : (((((/* implicit */_Bool) (short)4174)) ? (((/* implicit */int) (unsigned short)22149)) : (986224659)))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2361657595130514491LL)) ? (var_9) : (-442012194)))) ? (arr_0 [i_3]) : (((/* implicit */int) ((8891329760106958731ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(unsigned short)0] [i_3]))))))))));
        }
    }
    for (long long int i_8 = 1; i_8 < 9; i_8 += 4) 
    {
        var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_8] [i_8])) ? (((/* implicit */int) arr_23 [i_8])) : (((/* implicit */int) arr_13 [i_8] [i_8] [(unsigned char)4] [(_Bool)1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_8 - 1] [0] [0] [i_8]))) : (((unsigned int) arr_11 [4U] [i_8] [i_8] [i_8 + 2]))))) ? (max((2147483647), (arr_4 [(unsigned short)12] [(unsigned short)12] [(unsigned short)12]))) : (((((((/* implicit */int) (short)19795)) / (((/* implicit */int) arr_12 [(unsigned short)0] [2])))) * (((/* implicit */int) arr_7 [i_8] [i_8]))))));
        var_27 = ((-413997059) & (((/* implicit */int) arr_19 [i_8 + 1])));
    }
}
