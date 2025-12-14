/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30354
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
    var_18 = ((/* implicit */int) (_Bool)1);
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_11)) ? (var_14) : ((-(830186218))))) : (((((/* implicit */int) (short)-32755)) % (var_4)))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) (short)32741);
        var_21 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_11 [i_2] [i_2]))));
                        var_23 &= ((/* implicit */unsigned char) 1923423300);
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_15 [i_1] [i_2] [12LL] [i_4] [i_5] [i_5] = (+(((/* implicit */int) (short)32740)));
                            arr_16 [i_1 - 1] [i_1] [(short)12] [i_4] [i_5] = ((((/* implicit */_Bool) (((-(var_17))) - (((/* implicit */long long int) arr_4 [i_1 - 1]))))) ? (((/* implicit */int) ((unsigned char) arr_8 [i_1 - 1]))) : (((int) 1996312514)));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_14 [i_1 - 1] [(unsigned char)1] [i_3] [(unsigned short)10])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_8 [i_2]))))));
                            arr_17 [i_1 - 1] [i_1] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 15528686881221888945ULL)) ? ((+(697642972))) : (((/* implicit */int) arr_0 [i_1 - 1] [i_2]))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) / (((((/* implicit */_Bool) arr_18 [i_1])) ? (((/* implicit */int) (short)-32760)) : (((/* implicit */int) arr_6 [i_1])))))));
                            var_26 = ((/* implicit */unsigned short) (~((((~(1996312498))) % (((/* implicit */int) arr_2 [i_1 - 1]))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 2; i_7 < 9; i_7 += 3) 
                        {
                            var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_7] [i_1] [i_7] [i_1] [i_7])) ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 - 1])))) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) ((unsigned short) var_15))));
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (short)-32760))));
                        }
                        for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 3) 
                        {
                            var_29 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_10 [i_8 + 1] [i_8] [i_8] [i_1] [i_8 - 1])) : (((/* implicit */int) arr_13 [i_1 - 1] [i_1] [i_1])))));
                            var_30 *= (((-(arr_14 [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_1 - 1]))) - (((/* implicit */int) (signed char)118)));
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */int) ((arr_12 [i_1] [i_2] [i_1 - 1] [i_8 - 1] [i_8] [i_8 - 1]) && (((/* implicit */_Bool) ((long long int) arr_18 [i_8])))))) == ((-(((/* implicit */int) ((short) (_Bool)0))))))))));
                        }
                    }
                } 
            } 
        } 
        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) (short)32740)))))))))));
    }
    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 2) 
    {
        /* LoopNest 2 */
        for (short i_10 = 2; i_10 < 15; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 17; i_11 += 2) 
            {
                {
                    var_33 = ((/* implicit */unsigned long long int) (-(arr_28 [i_10] [i_10])));
                    arr_33 [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-32764))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)52185)) != (((/* implicit */int) (unsigned short)41008))))) : (((/* implicit */int) ((unsigned short) arr_28 [i_9] [i_10])))));
                    var_34 = ((/* implicit */unsigned char) (((~(arr_25 [i_9]))) - (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-123)))))));
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 14; i_12 += 2) 
                    {
                        for (short i_13 = 1; i_13 < 14; i_13 += 3) 
                        {
                            {
                                arr_40 [(unsigned char)8] [i_10] [i_10] [3ULL] [i_10] = -705340284;
                                arr_41 [i_9] [i_10] [i_10] [i_12 + 1] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20879)) ? (arr_25 [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? ((+(((/* implicit */int) arr_31 [i_10] [i_10])))) : (((((/* implicit */_Bool) 19)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) (unsigned short)64208))))));
                                var_35 = ((/* implicit */signed char) 1938971115U);
                                var_36 = ((/* implicit */int) var_9);
                                var_37 &= ((/* implicit */unsigned short) ((unsigned char) var_13));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) (unsigned char)243))));
                }
            } 
        } 
        arr_42 [i_9] = ((/* implicit */short) ((15528686881221888922ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_38 [i_9] [i_9] [0LL] [11] [i_9])))) != (511LL)))))));
    }
}
