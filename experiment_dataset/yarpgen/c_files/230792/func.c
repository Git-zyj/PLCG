/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230792
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
    for (int i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) (unsigned char)37);
                    var_19 *= ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_2]);
                    var_20 = ((/* implicit */short) min(((unsigned char)81), ((unsigned char)223)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 1; i_3 < 12; i_3 += 4) 
    {
        for (long long int i_4 = 3; i_4 < 12; i_4 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (short)-19268))) ? (((/* implicit */int) var_8)) : ((-(((/* implicit */int) (unsigned char)7))))));
                var_22 = ((/* implicit */unsigned char) min((max((arr_4 [i_3 - 1] [i_3] [i_3 - 1]), (((/* implicit */short) arr_6 [i_3] [i_3 + 4] [i_3])))), (((/* implicit */short) arr_15 [i_3]))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (short)1022))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        for (signed char i_7 = 1; i_7 < 15; i_7 += 3) 
                        {
                            {
                                var_24 = ((unsigned long long int) arr_9 [i_4 - 2] [i_3 - 1]);
                                var_25 = ((/* implicit */unsigned long long int) arr_6 [i_3 + 1] [i_4 - 2] [i_6]);
                            }
                        } 
                    } 
                    var_26 = ((unsigned long long int) 7164716444721174155LL);
                    var_27 -= ((/* implicit */short) (-(((/* implicit */int) arr_18 [i_5] [i_4 + 1] [i_3 + 1]))));
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        arr_27 [i_3] [i_4] [i_4] [i_4] [i_3] = ((unsigned char) arr_3 [i_3 + 4]);
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((arr_10 [i_3 + 4] [i_4]) ? (((/* implicit */int) arr_10 [i_3] [i_4 - 2])) : (((/* implicit */int) arr_10 [i_3] [i_4 - 3])))))));
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 3417033551U)))) : (arr_7 [i_3] [i_5])));
                    }
                }
                for (int i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned long long int) (signed char)15);
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 6332285784116521159LL)) ? (((/* implicit */int) (short)-16146)) : (((/* implicit */int) (unsigned char)239)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_10 [i_3 + 3] [i_3 + 3])))) : (min((arr_21 [i_9] [i_9] [i_4 + 3] [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3]), (((/* implicit */unsigned int) arr_8 [i_3] [i_4] [i_3 + 2]))))));
                }
                for (unsigned short i_10 = 1; i_10 < 15; i_10 += 1) 
                {
                    var_32 = ((((/* implicit */_Bool) arr_29 [i_3] [i_4 + 4] [i_4 + 4])) ? (((((/* implicit */_Bool) ((long long int) 5119943738999299134ULL))) ? (((((/* implicit */_Bool) 877933730U)) ? (arr_33 [i_4] [i_3] [i_3] [i_4 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))))) : (((long long int) 4033402771U)))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_20 [i_3 + 1] [i_3 + 1] [i_4 - 1] [i_10 + 1]), (arr_20 [i_3] [i_3 + 1] [i_4 - 1] [i_10 + 1]))))));
                    /* LoopSeq 2 */
                    for (long long int i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        arr_39 [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)243)) >= (max((-1078353835), (((/* implicit */int) arr_25 [i_10] [i_4])))))))));
                        var_33 *= ((signed char) (+(arr_24 [i_3] [i_3] [i_3 + 3] [i_10 + 1] [i_3])));
                    }
                    /* vectorizable */
                    for (long long int i_12 = 0; i_12 < 16; i_12 += 2) 
                    {
                        var_34 -= ((/* implicit */short) ((9768327555951846327ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)104)) | (((/* implicit */int) (unsigned char)252)))))));
                        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-89)) > (((/* implicit */int) (unsigned char)57)))))));
                        var_36 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_3 + 2] [i_3 + 4] [i_3 + 3])) ? (arr_22 [i_10 + 1] [i_10 - 1] [i_12] [i_12] [i_3] [i_3]) : (((((/* implicit */_Bool) 2994601092900946616ULL)) ? (2229734113U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28)))))));
                        var_37 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 16278542189568056437ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3]))) : (arr_0 [i_4])))));
                    }
                }
                var_38 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_4 + 3]))));
            }
        } 
    } 
}
