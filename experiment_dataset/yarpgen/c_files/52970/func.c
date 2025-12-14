/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52970
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_13 ^= ((/* implicit */signed char) arr_0 [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned short) (-((~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [(_Bool)1]))))))));
        arr_3 [i_0] = ((/* implicit */int) ((70516119U) ^ (((2596305561U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) arr_1 [i_0])))) ? ((-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-45)) % (((/* implicit */int) (signed char)125))))) ? (((((/* implicit */_Bool) (unsigned short)15936)) ? (((/* implicit */int) arr_0 [20U])) : (((/* implicit */int) (signed char)-36)))) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)-97)))))))))));
    }
    for (long long int i_1 = 2; i_1 < 22; i_1 += 1) 
    {
        var_15 = ((/* implicit */long long int) max((var_15), ((-(((((/* implicit */_Bool) (-(-6325275101426393987LL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)26))))) : (max((arr_5 [i_1]), (((/* implicit */long long int) (signed char)45))))))))));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((short) arr_5 [i_1 + 3]))))))))));
    }
    /* LoopNest 3 */
    for (signed char i_2 = 1; i_2 < 20; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) (-((-((-(((/* implicit */int) (_Bool)1))))))));
                    var_18 *= ((/* implicit */short) (~(((((/* implicit */_Bool) (~(-1)))) ? (min((8262249421413166552LL), (9223372036854775787LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_9 [i_2] [i_2])))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
                        {
                            arr_19 [i_6] [i_5] [i_4] [i_4] [i_3] [i_2] = ((/* implicit */short) arr_7 [i_3]);
                            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)32746))))) * (((((/* implicit */long long int) ((/* implicit */int) (signed char)45))) / (-1607008356671446903LL))))))));
                        }
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */int) arr_1 [i_2]);
                            arr_24 [i_2] [i_3] [i_4] [i_5] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) arr_17 [i_3] [i_4] [i_7]);
                            var_21 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_20 [i_2 + 1] [i_4 + 1] [i_4] [i_5 - 1] [i_5 - 1])))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)29)) - (((/* implicit */int) (_Bool)0)))) / ((-(((/* implicit */int) arr_15 [i_2]))))))) : (max(((-(arr_11 [i_2]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0)))))))));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (short)11956)) ? (((/* implicit */int) arr_10 [2] [i_2 + 1])) : (((/* implicit */int) (signed char)-97))))))));
                            var_23 = ((/* implicit */short) (((((-(((/* implicit */int) arr_9 [i_4 + 1] [i_3])))) + (2147483647))) >> (((((arr_14 [i_4 + 1] [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (2806537183U)))));
                        }
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_2] [i_3] [4LL] [i_4] [(signed char)10]))))) >= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))) > ((-(1607008356671446903LL)))))))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
                        {
                            arr_27 [i_8] [i_2] [i_2] [i_4] [i_4] = ((/* implicit */_Bool) (signed char)-45);
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2])) ? (((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2 + 1] [i_8] [i_8])) ? (((/* implicit */long long int) -535304376)) : (arr_20 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_4 + 1] [i_2 - 1]))) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) arr_8 [1LL]))))))))))));
                            arr_28 [19LL] [19LL] [i_4 + 1] [4LL] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-36))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
                        {
                            var_26 *= ((/* implicit */long long int) max(((~((~(((/* implicit */int) (signed char)-19)))))), (((((/* implicit */_Bool) ((unsigned short) arr_8 [i_4 + 1]))) ? ((~(arr_23 [i_5] [i_9] [i_4 + 1]))) : (25)))));
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (-(min((((/* implicit */unsigned int) (unsigned short)40866)), (3947243151U))))))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 22; i_10 += 2) /* same iter space */
                        {
                            arr_36 [i_2] [(unsigned char)20] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_32 [i_3] [i_4 + 1] [i_4 + 1] [i_3] [1]))));
                            var_28 = ((_Bool) ((-1336295054) - (((/* implicit */int) ((short) (signed char)15)))));
                            arr_37 [i_3] [i_3] [i_3] [(short)14] [i_3] [i_3] [i_4] = ((/* implicit */signed char) arr_14 [i_2] [i_3]);
                        }
                    }
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        arr_41 [3LL] [i_3] [i_3] [i_4] [(unsigned short)14] [i_11 - 1] = ((/* implicit */signed char) (-(((((((/* implicit */_Bool) arr_17 [i_11] [(_Bool)1] [i_3])) ? (((/* implicit */long long int) -393041536)) : (arr_17 [i_2] [i_3] [i_11]))) ^ (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_2] [i_2] [i_2 - 1])))))))));
                        var_29 *= ((/* implicit */long long int) arr_11 [i_2]);
                    }
                    for (int i_12 = 1; i_12 < 20; i_12 += 1) 
                    {
                        arr_45 [i_4] [11LL] [(_Bool)1] [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)19))));
                        arr_46 [i_2] [i_2] [i_4] [i_2] [i_12] [i_4] = ((/* implicit */long long int) (((-(((((/* implicit */_Bool) arr_14 [i_2] [i_2])) ? (1336295043) : (((/* implicit */int) arr_10 [i_3] [(short)18])))))) / ((-(((/* implicit */int) arr_12 [i_2] [20] [i_2 + 2]))))));
                    }
                    var_30 *= ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_8 [i_4 + 1])))) || (((((/* implicit */int) max((arr_0 [i_4 + 1]), (((/* implicit */unsigned char) (_Bool)1))))) > (((/* implicit */int) arr_34 [i_4] [i_4] [i_3] [i_3] [i_2] [i_2]))))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((~(var_12)))))) ? (var_5) : (((((/* implicit */int) ((unsigned char) var_11))) * (((/* implicit */int) ((short) (_Bool)0)))))));
    var_32 = ((/* implicit */unsigned short) max(((-(-8033119699264125300LL))), (((((/* implicit */_Bool) 3094299606U)) ? ((-(var_0))) : (var_10)))));
}
