/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43981
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */signed char) ((unsigned long long int) var_3));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) arr_0 [i_1]);
                    arr_11 [i_0] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_0 [i_0]))))))) ? ((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (max((((/* implicit */long long int) arr_7 [(unsigned short)19] [i_0] [i_0])), (arr_2 [i_2]))) : (arr_2 [i_0 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (max((arr_2 [i_0 - 2]), (((/* implicit */long long int) var_0)))) : (min((((/* implicit */long long int) (short)2924)), (arr_2 [i_0])))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_1])), (2090555803)))) ? (((/* implicit */int) min((arr_6 [i_2] [i_1] [i_0 - 2]), ((unsigned char)48)))) : (((/* implicit */int) arr_6 [i_0 - 1] [7ULL] [i_0 - 2])))) : ((+(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)38))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        arr_14 [9] [11U] [i_1] [i_3] [i_0] [i_3 - 2] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_5 [i_0])))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) arr_0 [i_0])))))));
                        arr_15 [i_3] [i_3] [i_2] [i_3] [i_3] [i_3] = ((((/* implicit */long long int) ((/* implicit */int) (signed char)20))) <= (arr_8 [i_3 - 2] [i_1 - 2]));
                        arr_16 [i_0] [19U] [i_2] [i_1] = ((/* implicit */unsigned short) ((unsigned int) (short)2940));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        var_21 &= (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)49)));
                        var_22 &= ((/* implicit */int) var_2);
                    }
                    for (unsigned short i_5 = 2; i_5 < 22; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (+(((arr_3 [i_0] [i_0 - 2]) ? (((/* implicit */int) arr_3 [i_1 + 2] [18U])) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0])))))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_6 = 4; i_6 < 20; i_6 += 3) 
                        {
                            var_24 &= ((/* implicit */int) var_14);
                            arr_25 [i_6 + 1] [i_6] [i_6] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (unsigned char)48)))))), (((((/* implicit */_Bool) arr_24 [i_0] [(_Bool)1] [i_2] [(_Bool)1] [i_0] [(unsigned char)6])) ? (((((((/* implicit */int) (short)-2961)) + (2147483647))) >> (((arr_8 [i_2] [i_1]) + (5117686849640992675LL))))) : (((/* implicit */int) ((arr_2 [i_0 + 1]) > (((/* implicit */long long int) var_0)))))))));
                        }
                        for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            var_25 ^= ((/* implicit */long long int) var_7);
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_24 [i_0 - 1] [i_1 - 1] [i_1 - 2] [i_1 + 3] [i_5 - 1] [i_5 + 1])) ? (arr_24 [i_0 - 1] [i_1 - 1] [i_1 - 2] [i_1 + 3] [i_5 - 1] [i_5 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2924))))), (((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) (short)2939))))))))));
                        }
                        for (signed char i_8 = 1; i_8 < 20; i_8 += 1) /* same iter space */
                        {
                            arr_32 [i_2] [i_0] [i_2] [i_0] [i_0] &= ((/* implicit */unsigned char) (-((~((+(arr_27 [i_2])))))));
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) var_15))));
                        }
                        for (signed char i_9 = 1; i_9 < 20; i_9 += 1) /* same iter space */
                        {
                            arr_36 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15769391978117133060ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-32))) : (-4611686018427387904LL)));
                            arr_37 [i_9] = ((/* implicit */long long int) max((min((((((/* implicit */_Bool) arr_8 [i_1 + 2] [i_1 - 3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))), (((/* implicit */int) arr_29 [i_5 - 1] [i_0 - 1])))), (((/* implicit */int) (unsigned char)47))));
                            arr_38 [(_Bool)1] [(_Bool)1] [i_9] [i_0] [i_9] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((arr_21 [i_0 - 1] [i_0] [9LL] [i_1] [i_0 - 1] [i_1 - 3]) >= (min((var_16), (((/* implicit */unsigned int) var_7))))))), (((((/* implicit */_Bool) ((short) arr_2 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) (signed char)49)))))) : (((long long int) var_16))))));
                        }
                        arr_39 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = arr_30 [i_0] [i_0 + 1] [i_1] [i_2] [i_5];
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        arr_42 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_23 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [i_10] [i_10]);
                        arr_43 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_0 + 1] [22] [(_Bool)1] [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_12 [i_1 + 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0]))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)(-32767 - 1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (min((var_11), (((/* implicit */unsigned int) var_19))))))) ? ((((!(((/* implicit */_Bool) (unsigned char)223)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)223)) || ((_Bool)0)))) : (((var_13) ? (-2090555792) : (((/* implicit */int) var_13)))))) : (var_3)));
    var_29 = ((/* implicit */short) var_10);
    /* LoopNest 3 */
    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
    {
        for (long long int i_12 = 0; i_12 < 22; i_12 += 3) 
        {
            for (long long int i_13 = 1; i_13 < 18; i_13 += 2) 
            {
                {
                    var_30 += ((/* implicit */unsigned short) (short)-2927);
                    arr_53 [i_12] [i_12] = ((/* implicit */_Bool) arr_45 [i_11] [i_13 + 4]);
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 22; i_14 += 2) 
                    {
                        for (signed char i_15 = 2; i_15 < 20; i_15 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_50 [i_11]))))))));
                                var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (arr_2 [(signed char)19]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_11]))))))))), (min((((/* implicit */long long int) arr_45 [i_11] [i_12])), (arr_8 [9ULL] [i_15 - 2]))))))));
                                var_33 += ((/* implicit */short) max((((((/* implicit */_Bool) max((arr_17 [i_15] [i_13] [i_14] [14]), (((/* implicit */unsigned long long int) var_11))))) ? (((((/* implicit */long long int) var_9)) + (arr_34 [i_11] [(unsigned short)9] [i_13] [i_14] [i_15]))) : (6917529027641081856LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((arr_44 [i_12]) + (8395318101055003918LL)))))) ? ((~(arr_47 [i_15] [i_15]))) : (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    arr_60 [i_11] [i_12] = ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1160931571342201117LL));
                }
            } 
        } 
    } 
}
