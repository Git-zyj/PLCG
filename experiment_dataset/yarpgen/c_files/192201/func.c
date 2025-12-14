/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192201
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
    var_17 -= ((/* implicit */signed char) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) * (var_14)));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0 + 1] [i_3 + 1] [i_3 + 1])) & (var_2)));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (unsigned short)53956))));
                    }
                    for (unsigned short i_4 = 2; i_4 < 23; i_4 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned short) var_16);
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) ((((33554416U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11582))))) & (1487651833U)));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_9)))))));
                        }
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_18 [3ULL] [i_1] [i_6] [(signed char)22] [i_6] [i_6] = ((/* implicit */int) ((arr_16 [i_6] [i_2] [i_1] [10ULL]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53956)))));
                        /* LoopSeq 3 */
                        for (int i_7 = 2; i_7 < 23; i_7 += 3) 
                        {
                            var_23 &= ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [i_0 + 1])))))));
                            var_25 = ((/* implicit */unsigned long long int) var_3);
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) arr_19 [(_Bool)1] [(_Bool)1]))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            arr_25 [i_0] [i_1] [i_6] [i_6] [i_0] [i_8] = ((/* implicit */unsigned short) var_6);
                            arr_26 [i_0 + 1] [i_0] [i_1] [i_6] [i_6] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4)))) : (((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                            arr_27 [i_8] [(signed char)9] [i_6] [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)10949);
                            arr_28 [(unsigned char)0] [i_6] [0U] [i_0 + 1] [i_6] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_23 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0])) | ((~(arr_21 [i_6] [i_6] [i_2] [i_1] [i_6])))));
                            var_27 *= ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_6))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            var_28 ^= ((/* implicit */unsigned int) (((+(var_14))) < (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_2] [i_2] [i_9])) ? (var_15) : (var_14)))));
                            arr_31 [i_6] [i_6] [i_2] [i_6] [i_1] [i_6] = ((/* implicit */signed char) (-(14249043556699500140ULL)));
                        }
                    }
                    for (signed char i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        arr_35 [i_0] [i_0] [i_1] [i_2] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_29 [i_10] [(unsigned short)11] [i_0 + 1] [i_0] [i_0 + 1])) + (((/* implicit */int) arr_22 [(signed char)10] [i_0 + 1] [i_0] [i_10] [i_0 + 1]))));
                        /* LoopSeq 2 */
                        for (short i_11 = 4; i_11 < 22; i_11 += 4) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (4197700517010051475ULL)));
                            arr_39 [i_11 + 1] [4U] [(unsigned short)2] [i_1] [(unsigned short)2] = ((/* implicit */unsigned int) arr_11 [i_0 + 1] [4ULL] [(signed char)23] [(signed char)23]);
                            var_30 = ((/* implicit */signed char) (unsigned short)16);
                        }
                        for (short i_12 = 4; i_12 < 22; i_12 += 4) /* same iter space */
                        {
                            arr_43 [i_0] [i_1] [i_1] [i_2] [i_10] [12U] = ((/* implicit */unsigned short) arr_23 [i_0] [i_12 + 1] [i_0 + 1] [i_0] [i_0]);
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) (unsigned char)240)))))));
                            var_32 &= ((/* implicit */signed char) arr_15 [i_12] [i_10] [i_10] [i_2] [i_10] [i_0] [i_0 + 1]);
                        }
                        var_33 = ((/* implicit */unsigned char) ((signed char) arr_22 [i_0 + 1] [i_0] [i_0] [i_10] [i_0]));
                        var_34 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)53956))));
                    }
                    var_35 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_6)))) ? ((+(var_3))) : (((/* implicit */int) arr_41 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [8U]))));
                }
            } 
        } 
        var_36 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2))) <= (var_5)));
        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1]))))));
        arr_44 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_24 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [(short)16]))));
    }
}
