/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197333
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (+(arr_0 [i_0])));
        var_18 = ((/* implicit */signed char) (-((+((~(((/* implicit */int) arr_2 [i_0]))))))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) arr_0 [i_3]);
                            arr_14 [i_0 - 1] [i_3 + 1] [i_1] [i_0 - 1] [(unsigned short)8] = ((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_2] [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            arr_19 [i_0] [i_0 - 1] [i_1] = ((/* implicit */_Bool) arr_10 [i_1] [i_3] [i_1] [i_1] [i_1] [i_0]);
                            var_21 = ((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_3] [i_5] [i_5]);
                            var_22 = arr_11 [i_3] [i_3] [7ULL] [i_3 + 1] [i_3 + 1];
                        }
                        arr_20 [i_0] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned char)241)) ? (((((/* implicit */_Bool) -2067362665)) ? (arr_11 [i_3] [i_3] [i_2] [i_1] [i_0]) : (((/* implicit */int) (unsigned char)250)))) : (((((/* implicit */_Bool) arr_18 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_3] [i_3] [i_1])) ? (((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [2U] [i_1] [(unsigned short)11] [i_1])) : (((/* implicit */int) (unsigned short)65528))))))));
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned int) (-((+((-(arr_1 [i_0])))))));
                            arr_24 [i_0] [i_1] [i_3] [(signed char)8] = ((/* implicit */signed char) (~(arr_11 [i_0] [i_0] [i_0] [i_3] [i_0])));
                        }
                        for (int i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
                        {
                            var_24 |= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2 - 1])))))));
                            var_25 = (+((-(((int) arr_25 [i_0] [i_0] [4] [i_0] [i_3] [i_1] [i_1])))));
                        }
                        var_26 += ((/* implicit */signed char) (+((-(((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))));
                        var_27 &= ((/* implicit */short) (+(((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_3] [10ULL] [i_2] [4ULL]))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        var_28 = arr_1 [i_0];
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_22 [i_0] [i_0] [i_0] [i_1] [i_2] [i_8])))) ? ((-((-(-828001901785969297LL))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_28 [i_1] [i_1] [i_2 - 3])))))));
                    }
                    var_30 = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [(signed char)1] [i_0 - 1] [7] [(unsigned char)11] [i_0 - 1] [11LL] [i_1]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 1; i_9 < 10; i_9 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned char) ((short) (-(arr_22 [i_0] [(unsigned char)5] [i_2 + 2] [i_1] [i_1] [i_9]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
                        {
                            arr_37 [i_10] [i_0] [i_1] [i_1] [i_10] [5U] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_2 [i_9])) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_12 [i_0]))))))));
                            arr_38 [i_0] [i_0] [i_0] [i_1] [i_2 + 2] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_4 [i_1])))))))));
                            arr_39 [i_0 - 1] [i_1] [i_0 - 1] [i_2] = (-((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_1] [i_1] [i_9 + 1] [(_Bool)1] [i_1]))))))));
                            var_32 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned short) (+(((/* implicit */int) arr_17 [i_0 + 1] [i_1] [i_9 + 1] [i_10]))))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
                        {
                            var_33 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))) ? ((+(arr_41 [i_2 + 1] [i_2 - 1] [i_2] [(signed char)7] [i_2] [i_2 - 1] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15)))));
                            arr_42 [i_0] [i_1] [i_0] [(_Bool)1] [i_11] [2ULL] &= (~(arr_40 [i_2] [i_2] [i_2] [i_2 + 1] [10] [(unsigned char)8] [i_2]));
                            arr_43 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1])))))));
                            var_34 = ((/* implicit */unsigned int) (short)-19532);
                            arr_44 [i_0] [i_1] [i_2] [i_11] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_0]))))));
                        }
                        var_35 &= ((/* implicit */int) (+(arr_34 [i_2 - 3] [(short)10] [(unsigned short)2] [i_2] [i_2] [(unsigned char)4] [i_2])));
                    }
                    var_36 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)130))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        for (signed char i_13 = 1; i_13 < 10; i_13 += 1) 
                        {
                            {
                                arr_50 [i_1] [i_1] [i_1] [i_1] [i_12] |= ((/* implicit */signed char) (-((+((~(7638948373803072332LL)))))));
                                var_37 = ((/* implicit */unsigned char) (~((-((+(((/* implicit */int) arr_21 [(unsigned char)4] [(unsigned char)4] [i_0] [i_12] [i_13] [i_12]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_38 &= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_3))))))))));
}
