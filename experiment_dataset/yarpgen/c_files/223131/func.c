/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223131
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) / (((/* implicit */unsigned long long int) 1708374402))))) ? (var_0) : ((+(var_3)))))) ? (((/* implicit */long long int) var_6)) : ((+(var_13)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))));
                arr_6 [i_0] = ((/* implicit */int) var_12);
                /* LoopSeq 3 */
                for (unsigned char i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((int) min((((((/* implicit */_Bool) (short)3315)) ? (576459652791795712ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) arr_10 [19ULL] [i_2] [i_2 - 2])))));
                        arr_14 [i_0] [i_1] [i_2 - 2] [i_3 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24551))) : (var_3))))))) : (((((/* implicit */int) var_11)) << (((/* implicit */int) ((-2147483636) > (2147483609))))))));
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 2) 
                    {
                        arr_17 [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)27954)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_16 [i_0] [i_1] [i_0] [i_0] [i_2] [(unsigned char)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 2] [i_2 - 2] [i_2 - 2] [i_0] [i_0] [(unsigned char)15])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (min((var_2), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-3315)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [8] [i_1] [i_2] [i_0 + 2])) & (2147483609)))) ? (((/* implicit */int) (signed char)35)) : (((((/* implicit */_Bool) arr_19 [(short)8] [i_2])) ? (4485231) : (((/* implicit */int) var_12))))))));
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1708374420)) ? (((/* implicit */int) (short)27953)) : (((/* implicit */int) (unsigned short)46744)))))));
                        }
                    }
                    arr_21 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((short)-27914), ((short)-3322)))))))));
                    /* LoopSeq 2 */
                    for (int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0 + 1]))) || (((/* implicit */_Bool) ((unsigned short) (signed char)122)))));
                        var_18 += ((/* implicit */signed char) ((((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42608))))) << (((((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((arr_23 [i_0] [i_0] [i_0] [(signed char)14] [(unsigned short)8] [i_0]) ^ (var_3))) : (arr_3 [0LL] [i_0 + 2]))) - (6304258189575247160ULL)))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        arr_26 [i_0 - 1] [i_0] [i_2] [i_7] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [12U] [i_2 - 2] [12U] [i_2 - 1] [i_2]))) + (arr_23 [i_2 + 1] [i_0] [i_0 + 2] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_0] [i_0])))))));
                        arr_27 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (var_3)))) ? (max((var_13), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)34294)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2 - 2])) : (((/* implicit */int) arr_12 [i_0] [i_1]))))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)68))))) ? (((/* implicit */int) ((short) var_5))) : (((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [6])))))));
                        arr_28 [i_7] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_12 [i_0] [i_2])) : (((/* implicit */int) var_12))))));
                    }
                }
                for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    arr_32 [i_0] [i_0] [i_8] = ((/* implicit */unsigned int) max(((unsigned short)15129), ((unsigned short)35092)));
                    var_19 = ((/* implicit */int) ((1708374432) != ((~(((/* implicit */int) min((arr_22 [i_0] [i_1] [i_8] [i_8]), (((/* implicit */unsigned short) (signed char)-17)))))))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (((-(arr_16 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0]))) / (((/* implicit */long long int) (~(((/* implicit */int) arr_8 [(_Bool)1] [i_0] [(_Bool)1]))))))))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    arr_36 [10] [i_1] [i_9] [(unsigned short)4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_15 [i_0 + 1] [i_0] [i_0] [i_0]) ^ (var_6)))) ? (((/* implicit */long long int) max((1262814929U), (((/* implicit */unsigned int) (unsigned char)199))))) : ((~(arr_16 [6ULL] [i_0] [6ULL] [i_0 + 2] [(signed char)3] [i_1])))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_1))));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        for (int i_11 = 3; i_11 < 17; i_11 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) (short)-14904))))))));
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [(_Bool)1] [i_9] [(unsigned char)18] [i_11]))) + (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 2] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0 - 2] [i_0 + 1] [i_11 - 3] [i_11 + 2]))) : (arr_2 [i_0 - 2] [i_0 - 2] [i_10]))))))));
                                var_24 |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [8]))));
                            }
                        } 
                    } 
                    arr_42 [i_0] [i_1] [i_9] = ((/* implicit */long long int) ((((min((14345788366217378997ULL), (((/* implicit */unsigned long long int) var_4)))) >> (((((((/* implicit */int) var_9)) | (((/* implicit */int) var_7)))) - (33132))))) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8)))))));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) (unsigned char)57))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6801))) : (11114844498967536900ULL)))));
    var_26 -= ((/* implicit */signed char) var_13);
    var_27 = ((((((/* implicit */_Bool) ((unsigned short) var_13))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) - (var_3))) : (((/* implicit */unsigned long long int) var_13)))) + (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_9))))) ? ((+(685256972642663610ULL))) : ((+(var_0))))));
}
