/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4907
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_12 += ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (signed char)0))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) ((unsigned short) max((((((/* implicit */_Bool) 8235862624918265573ULL)) || (((/* implicit */_Bool) arr_5 [(short)16] [(short)16] [(signed char)1] [i_1])))), (((((/* implicit */_Bool) (short)9565)) || (((/* implicit */_Bool) (short)-9566)))))));
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) var_3)))))) ? (((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_6)))))) : (min((((/* implicit */int) ((signed char) (short)9564))), ((-(((/* implicit */int) (signed char)37)))))))))));
                }
            } 
        } 
        arr_8 [i_0] = ((short) ((((/* implicit */_Bool) var_0)) && ((!(((/* implicit */_Bool) 4845129631489362676ULL))))));
    }
    /* LoopNest 2 */
    for (short i_3 = 2; i_3 < 12; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            {
                arr_14 [(unsigned short)5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_3 [i_3] [i_3]))) && (((/* implicit */_Bool) max(((short)2789), (((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_3] [i_3]))))))))));
                /* LoopSeq 4 */
                for (short i_5 = 1; i_5 < 13; i_5 += 2) 
                {
                    var_15 = max((min((arr_4 [i_3 + 1] [i_5]), (arr_4 [i_3 - 1] [i_5]))), (max((arr_4 [i_3 + 2] [i_5]), (arr_4 [i_3 + 2] [i_5]))));
                    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551612ULL))));
                }
                for (unsigned short i_6 = 2; i_6 < 13; i_6 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 13; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            {
                                var_17 = (unsigned short)11368;
                                arr_27 [i_3] [i_3] [i_6] [i_6] [i_8] = ((/* implicit */short) (unsigned short)54164);
                                arr_28 [12ULL] [i_6] [i_7] [i_6] [i_8] [i_3] [(signed char)7] = (short)-9566;
                                var_18 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)5745))));
                                arr_29 [i_4] [i_6] [i_6] [i_4] [i_4] = ((/* implicit */signed char) max((var_9), (((/* implicit */unsigned long long int) (short)9566))));
                            }
                        } 
                    } 
                    arr_30 [i_6] = ((signed char) ((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (18446744073709551610ULL)));
                    var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */int) (unsigned short)47146)) << (((((/* implicit */int) (short)16309)) - (16300)))))));
                }
                for (signed char i_9 = 2; i_9 < 12; i_9 += 3) 
                {
                    var_20 = ((/* implicit */unsigned long long int) (short)-9565);
                    arr_33 [i_9] [i_4] [i_9] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) max((((/* implicit */short) var_5)), (var_2))))))));
                }
                for (short i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 14; i_12 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_5))))), ((short)-2075)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) max(((short)9564), (((/* implicit */short) var_5)))))))))))));
                                var_22 = ((/* implicit */unsigned char) min(((short)16384), (max((((/* implicit */short) (unsigned char)238)), ((short)(-32767 - 1))))));
                            }
                        } 
                    } 
                    arr_42 [i_3] [i_3] [i_10] = ((/* implicit */short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_7))))))) >= ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                    arr_43 [i_3] [i_10] [i_10] = max((max((((/* implicit */short) (signed char)10)), (min(((short)-8267), (((/* implicit */short) var_3)))))), (((/* implicit */short) (!(((/* implicit */_Bool) var_5))))));
                    arr_44 [i_10] [i_4] [i_10] = ((/* implicit */short) ((signed char) ((signed char) (unsigned short)48513)));
                    var_23 = ((/* implicit */short) (-(((/* implicit */int) ((short) (-(((/* implicit */int) arr_36 [i_3] [i_4] [(unsigned char)11] [i_10]))))))));
                }
            }
        } 
    } 
}
