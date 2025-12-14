/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217393
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))));
                    var_15 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)46)), (((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (signed char)62))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) arr_11 [i_1 - 1] [i_1 + 1]));
                                arr_16 [i_0] [(short)2] [i_0] [i_3] [i_4] [i_4] [i_4] = ((/* implicit */signed char) (-(409425897U)));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    arr_20 [(signed char)7] [(signed char)19] [i_5] = ((/* implicit */short) (unsigned char)52);
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            {
                                arr_26 [i_1] [i_1] [(signed char)1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned char) (signed char)122)), ((unsigned char)3))), (((/* implicit */unsigned char) (signed char)-64))));
                                arr_27 [i_0] [i_1] [i_0] [i_6] [i_7] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-1411)) ? (8U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)59)))));
                            }
                        } 
                    } 
                }
                arr_28 [i_0] [i_1] = ((unsigned long long int) (signed char)100);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
    {
        for (signed char i_9 = 1; i_9 < 9; i_9 += 4) 
        {
            {
                arr_36 [i_8] [i_9] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9] [i_9 - 1]))) : (12005618279790282697ULL))));
                arr_37 [i_8] [i_8] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))) : (1841287638749600506ULL))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)112))));
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 10; i_10 += 2) 
    {
        for (signed char i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    for (signed char i_13 = 4; i_13 < 7; i_13 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) min((var_17), (((signed char) (short)20640))));
                            var_18 = ((/* implicit */signed char) ((short) (unsigned char)49));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_14 = 1; i_14 < 8; i_14 += 2) 
                {
                    for (unsigned int i_15 = 0; i_15 < 10; i_15 += 3) 
                    {
                        for (signed char i_16 = 0; i_16 < 10; i_16 += 2) 
                        {
                            {
                                arr_59 [i_10] [i_11] [i_11] [i_14] [i_15] [8ULL] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)52))));
                                arr_60 [3ULL] [3ULL] [i_14] [i_15] [3ULL] [8ULL] [3ULL] = ((/* implicit */short) arr_48 [i_10] [i_10] [(signed char)2]);
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 409425897U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)62))) : (8126710429753409757ULL))))) ? (((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */int) (unsigned char)97)) : ((~(((/* implicit */int) (short)-32762)))))))))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-45)), ((unsigned char)210)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)32760)) && (((/* implicit */_Bool) (unsigned char)203))))) : (((/* implicit */int) (signed char)-106))));
                            }
                        } 
                    } 
                } 
                var_21 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)208))));
            }
        } 
    } 
}
