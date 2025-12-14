/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194446
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
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)25938)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */long long int) arr_5 [i_0] [i_0]);
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) arr_7 [i_0] [i_0] [22] [i_3]);
                        arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26955))) : (5907591362899188300LL)));
                    }
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            var_19 -= ((/* implicit */unsigned char) arr_19 [i_0] [i_0] [i_2] [i_2] [i_5] [i_0]);
                            var_20 = ((/* implicit */int) arr_0 [i_1]);
                        }
                        for (int i_6 = 1; i_6 < 22; i_6 += 3) 
                        {
                            arr_24 [i_0] [18] [i_1] [i_2] [i_0] [(short)10] = ((/* implicit */int) ((long long int) min((((/* implicit */unsigned char) (signed char)-56)), (arr_8 [i_1] [i_1] [i_0]))));
                            arr_25 [i_0] [i_1] [i_4] [i_1] [i_1] [i_0] = ((/* implicit */int) ((short) (short)-2514));
                        }
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            var_21 = var_12;
                            arr_29 [i_0] [(_Bool)1] [i_2] [i_4] [(short)0] = ((/* implicit */unsigned char) ((long long int) (+(((/* implicit */int) arr_28 [i_0] [i_1] [i_2] [i_0] [i_4] [i_1])))));
                            arr_30 [i_0] [i_0] [i_2] [i_2] [i_7] = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) arr_27 [i_0] [i_0] [i_2] [16U] [(unsigned short)16])), (arr_6 [i_0]))) - (arr_6 [i_0])));
                            arr_31 [i_2] [i_2] [i_2] [i_4] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 5465040483631213374LL)) ? ((~(arr_26 [i_4]))) : (min((((/* implicit */unsigned int) (short)30720)), (562430257U)))));
                        }
                        arr_32 [17] [i_0] [i_1] [i_1] [8ULL] [i_0] = ((long long int) -5907591362899188322LL);
                        var_22 = ((/* implicit */int) arr_9 [2]);
                        var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_7 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)38581))), (((/* implicit */unsigned short) ((short) (short)-31431))))))) : (((unsigned int) (signed char)0))));
                        arr_33 [i_4] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > ((~((-(4503599627370495LL)))))));
                    }
                    for (short i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        arr_36 [i_0] [i_1] [i_2] [i_8] &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_35 [i_0] [i_1] [i_0] [i_0] [i_0]), (arr_35 [22] [i_1] [i_2] [i_1] [i_0])))) ? (((unsigned int) (~(arr_9 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((unsigned char) -1993319532217065726LL)), (((/* implicit */unsigned char) arr_28 [i_0] [i_1] [16LL] [i_1] [i_2] [6]))))))));
                        arr_37 [i_0] [i_1] [i_1] [i_0] |= min((((/* implicit */unsigned int) var_1)), (arr_26 [i_0]));
                        arr_38 [i_0] [i_0] = ((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [i_0] [i_1]);
                        arr_39 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (~(((/* implicit */int) (short)15533)))))) ? ((~(((((/* implicit */long long int) ((/* implicit */int) (signed char)-20))) / (var_7))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (-4503599627370499LL) : (var_17)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)38567)) - (((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_1] [i_8] [i_8]))))) : (((((/* implicit */_Bool) arr_20 [i_0] [i_1] [(signed char)2] [i_2] [(short)7])) ? (-9223372036854775802LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)83)))))))));
                        var_24 &= ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)131)), ((unsigned short)49268)));
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */int) (-(min((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) / (((/* implicit */int) var_2))))), (var_16)))));
    var_26 = 1180967491;
}
