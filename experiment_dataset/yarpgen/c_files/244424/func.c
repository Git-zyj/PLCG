/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244424
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [15LL] [i_0] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [18U] [i_0] [i_0]))) : (var_8)))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (unsigned char)4)))))))));
                    var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)-32746)) : (((/* implicit */int) (unsigned char)252))));
                }
            } 
        } 
        var_21 = arr_6 [5] [i_0] [5] [i_0 - 1];
    }
    for (signed char i_3 = 1; i_3 < 19; i_3 += 4) 
    {
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_14)) > (((/* implicit */int) (unsigned char)9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))) : (((((/* implicit */_Bool) (unsigned char)4)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3])))))))) ? ((~(arr_11 [i_3 + 4] [i_3]))) : (((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)56940)))))))));
        arr_12 [i_3 + 4] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (max((arr_9 [i_3]), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)252), ((unsigned char)4))))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        for (short i_5 = 2; i_5 < 14; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                {
                    arr_23 [i_5] = ((/* implicit */unsigned char) arr_9 [i_5]);
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_7 = 4; i_7 < 14; i_7 += 4) 
                    {
                        var_23 = ((/* implicit */long long int) ((unsigned int) arr_3 [i_6] [i_5 + 3]));
                        arr_27 [i_4] [i_5] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5]))) / (arr_15 [i_5 + 2] [i_7 + 2])));
                    }
                    for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        var_24 -= ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) min((arr_3 [i_6] [i_6]), (((/* implicit */int) arr_6 [i_4] [i_4] [i_4] [i_4]))))) / (((((/* implicit */_Bool) (signed char)127)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63297))))))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)241)) - (((/* implicit */int) (unsigned char)252))))) ? (var_6) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)32767)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34599))) : ((-(min((var_6), (((/* implicit */unsigned int) var_2))))))));
                        var_26 = ((/* implicit */unsigned short) min((arr_3 [i_5 + 3] [19ULL]), (min((arr_3 [i_5 + 3] [i_5 + 3]), (arr_3 [i_5 + 3] [(short)6])))));
                        var_27 = ((/* implicit */long long int) (unsigned char)255);
                    }
                    for (long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        var_28 |= ((/* implicit */signed char) ((unsigned int) arr_25 [i_5 + 1] [i_5 + 3] [i_5 + 1]));
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5 - 1] [i_4])) ? (arr_15 [i_5 - 1] [i_5]) : (((/* implicit */long long int) 2771691118U))))) ? (((((/* implicit */int) arr_25 [i_4] [(unsigned char)10] [i_5 + 3])) - (((/* implicit */int) arr_25 [i_5] [(unsigned char)8] [i_5 - 2])))) : (((/* implicit */int) var_2))));
                        var_30 -= ((/* implicit */long long int) arr_26 [i_9] [i_4] [i_5 - 1] [i_9]);
                        var_31 *= ((/* implicit */_Bool) (signed char)120);
                    }
                    for (signed char i_10 = 2; i_10 < 16; i_10 += 2) 
                    {
                        arr_35 [(unsigned short)4] [i_6] [i_6] [(unsigned short)4] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(arr_18 [i_5 + 1] [(unsigned short)12]))) | (((/* implicit */unsigned int) ((2147483647) / (((/* implicit */int) var_13)))))))) ? (((/* implicit */long long int) var_4)) : (min((arr_21 [i_10] [i_4] [i_10 - 2]), (((/* implicit */long long int) var_15))))));
                        var_32 = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) (unsigned char)255)), ((+(var_10))))), (((/* implicit */long long int) ((((/* implicit */int) var_13)) >> ((((+(((/* implicit */int) (unsigned short)34594)))) - (34565))))))));
                    }
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */_Bool) var_14);
}
