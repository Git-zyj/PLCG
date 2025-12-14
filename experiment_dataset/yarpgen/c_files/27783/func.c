/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27783
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 2; i_2 < 23; i_2 += 1) 
                {
                    var_19 += arr_7 [i_2 + 2] [i_1] [i_0];
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_20 ^= ((/* implicit */unsigned short) min((arr_3 [i_1] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) (unsigned short)48326)) + (((/* implicit */int) arr_0 [i_2 + 2])))))))));
                        arr_11 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */signed char) max((max((((/* implicit */int) arr_6 [i_3] [i_3] [i_2] [i_2 - 1])), (var_17))), (min((((/* implicit */int) arr_6 [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 1])), (var_17)))));
                    }
                    for (unsigned int i_4 = 3; i_4 < 24; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (short)-10132));
                        arr_16 [i_1] = 542937437U;
                        var_21 = ((/* implicit */unsigned char) var_5);
                        var_22 -= ((/* implicit */unsigned char) ((((_Bool) (unsigned char)249)) ? (((/* implicit */long long int) (+(((/* implicit */int) min((var_2), ((short)10152))))))) : (((((/* implicit */_Bool) ((unsigned char) (signed char)31))) ? (arr_5 [i_0] [(short)4]) : (((/* implicit */long long int) 2007696754U))))));
                        arr_17 [(signed char)22] [i_2 + 2] [i_1] [(signed char)22] &= ((/* implicit */_Bool) (((-(min((((/* implicit */unsigned int) (short)-32746)), (4012888823U))))) ^ (min((arr_7 [i_2] [i_1] [i_0]), (((unsigned int) 2007696754U))))));
                    }
                }
                for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    var_23 -= ((/* implicit */unsigned int) ((var_9) % (((/* implicit */long long int) 2007696761U))));
                    var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (-(((/* implicit */int) (signed char)115)))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_14)))))))));
                    var_25 ^= ((/* implicit */unsigned long long int) min((((short) (unsigned char)233)), (((/* implicit */short) var_0))));
                }
                for (short i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    arr_22 [i_0] [i_0] [i_1] [i_6] = ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_2 [i_1] [i_0])), (((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3))) : (var_13)))))) > (min((((/* implicit */unsigned long long int) arr_12 [i_6] [i_1] [i_6])), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_1])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_6]))))))));
                    arr_23 [i_1] [i_1] [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (arr_2 [i_6] [i_6]))))));
                }
                for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        for (int i_9 = 1; i_9 < 24; i_9 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) ((((465701229U) >= (arr_7 [i_8] [i_7] [i_0]))) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)115)))) : (((/* implicit */int) (signed char)-112))));
                                var_27 = (_Bool)0;
                                arr_31 [i_9 + 1] [i_8] [i_7] [i_7] [i_1] [i_0] |= ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_28 [i_0] [i_9 + 1] [i_7] [i_8] [i_9 - 1])))));
                            }
                        } 
                    } 
                    arr_32 [i_7] [i_1] = ((/* implicit */unsigned char) arr_29 [i_1]);
                }
                arr_33 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((min((121930713U), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)22))))))), (((/* implicit */unsigned int) arr_19 [i_0]))));
                var_28 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)26516))));
                arr_34 [i_1] = ((/* implicit */unsigned char) ((long long int) (+(((/* implicit */int) ((unsigned short) (short)32767))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_10 = 3; i_10 < 10; i_10 += 3) 
    {
        for (short i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            {
                var_29 -= (!(((_Bool) (!(((/* implicit */_Bool) var_8))))));
                arr_41 [i_11] = ((/* implicit */unsigned char) arr_2 [i_11] [i_11]);
                /* LoopNest 3 */
                for (long long int i_12 = 2; i_12 < 9; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 11; i_14 += 1) 
                        {
                            {
                                arr_48 [i_10 - 1] [i_11] [i_12 + 2] [i_11] [i_14] = ((((/* implicit */_Bool) min((((arr_7 [i_13] [i_13] [i_13]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_10 - 2]))))), (((/* implicit */unsigned int) arr_28 [i_12 - 1] [i_11] [i_10 + 1] [i_14] [i_14]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_47 [i_13] [i_11] [i_12 + 2] [i_11] [i_11]), (((/* implicit */short) var_5)))))) : (arr_25 [i_11]));
                                var_30 = ((/* implicit */int) (+((~(arr_8 [i_12 - 2] [i_10 - 1] [i_12] [i_12])))));
                                arr_49 [i_10 - 1] [i_11] [i_12 - 2] [i_13] [i_13] [i_13] [i_14] = ((/* implicit */int) ((min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)3))))), (var_13))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_10 + 1] [i_11] [i_14])))));
                                var_31 = ((/* implicit */unsigned char) arr_43 [i_14] [i_13] [i_12 - 1] [i_11]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_32 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (+(var_15)))) && (((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) (signed char)-41)))))));
    var_33 = ((/* implicit */unsigned int) var_1);
}
