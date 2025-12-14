/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46103
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (+(((((unsigned long long int) var_8)) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) 2119675230)) : (arr_1 [i_0])))))))))));
        arr_3 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)12531)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((min((var_0), (((/* implicit */short) (unsigned char)250)))), (((/* implicit */short) ((-18014398509481984LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)10467)))))))))) : (((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4975))) : ((+(arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_15 = ((/* implicit */_Bool) arr_5 [i_1]);
        arr_7 [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)251))));
        var_16 *= ((/* implicit */unsigned int) arr_4 [i_1]);
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    var_17 ^= ((/* implicit */long long int) arr_14 [(_Bool)1]);
                    var_18 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3))))) < (268435328U)));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_2] [i_3]))) : (arr_11 [i_1] [i_1] [(_Bool)1] [i_1]))) * (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_3] [i_2] [i_1])) ^ (((/* implicit */int) arr_12 [i_2] [i_2] [i_3]))))))))));
                }
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 1; i_5 < 13; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 3) 
                        {
                            arr_29 [i_4] [(short)14] [i_6] [i_6] [i_5] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_9))))), (var_3)))) ? (min((2955810476U), (((/* implicit */unsigned int) (_Bool)0)))) : (var_8)));
                            var_20 ^= ((/* implicit */long long int) min(((((~(arr_16 [i_8]))) & (1735497092U))), ((~(max((4026531968U), (((/* implicit */unsigned int) (unsigned short)45379))))))));
                            arr_30 [i_4] [i_4 + 1] [4] [i_5] [i_6] [(_Bool)1] [i_8] = ((/* implicit */unsigned int) (short)19056);
                            arr_31 [i_8] [i_4] [i_6] [i_4] [i_4] = ((/* implicit */_Bool) (+(268435328U)));
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) (_Bool)1);
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)108)))))));
                        }
                        var_23 *= ((/* implicit */int) max(((short)-10443), (((/* implicit */short) (unsigned char)7))));
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            arr_36 [i_6] [i_4] [i_10] = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) ^ (-1000779624081729005LL))), (((/* implicit */long long int) (!(((((/* implicit */_Bool) -1317444730)) && (((/* implicit */_Bool) var_0)))))))));
                            var_24 = max((((/* implicit */int) var_9)), ((+(((/* implicit */int) arr_6 [i_4 + 1])))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            arr_39 [i_4] [i_5 + 2] [i_6] [i_7] [i_4] = ((/* implicit */short) (+(((16711361252572577507ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_4] [i_5 - 1] [i_6] [i_7])))))));
                            var_25 = ((/* implicit */short) max(((-(arr_25 [i_7] [i_5 + 2] [i_4] [i_4] [i_5 - 1] [i_5]))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) >= (arr_25 [i_5] [i_5 + 2] [i_4] [i_4] [i_5] [(_Bool)1]))))));
                            var_26 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) (signed char)-7)) || (((/* implicit */_Bool) -9223372036854775805LL))))));
                        }
                    }
                    arr_40 [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */_Bool) (short)16)) ? (((/* implicit */int) var_6)) : (2008166498))) >= (((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */int) arr_35 [i_4 + 1] [i_4 + 1] [i_5 - 1] [i_5] [i_6] [11LL])) : (((/* implicit */int) var_1))))))) / ((((-(((/* implicit */int) arr_34 [i_4] [i_6] [i_4] [i_5 + 2] [i_4])))) | (((((/* implicit */_Bool) 772058746)) ? (((/* implicit */int) var_0)) : (arr_37 [i_4] [i_4] [(short)9] [i_5 + 2] [i_6] [(_Bool)1] [i_6])))))));
                }
            } 
        } 
        var_27 = ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_32 [i_4] [i_4] [i_4] [i_4 + 1])))) < ((~(2008166498))));
    }
    var_28 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))) : (var_8)))));
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)248))))) ^ (((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    for (unsigned short i_12 = 0; i_12 < 18; i_12 += 2) 
    {
        arr_44 [i_12] = ((/* implicit */_Bool) var_10);
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(arr_8 [i_12])))) & (((((/* implicit */_Bool) arr_8 [i_12])) ? (arr_11 [(unsigned short)8] [i_12] [i_12] [i_12]) : (arr_11 [i_12] [i_12] [i_12] [i_12])))));
    }
}
