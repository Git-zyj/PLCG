/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200738
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
                    {
                        arr_9 [(short)5] [i_1] [8U] [i_3] = ((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((_Bool) (unsigned short)65535))))) : ((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) arr_0 [i_0] [i_3])))))));
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_5))));
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_3 [i_0] [i_2] [i_3])) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65533)) != (((/* implicit */int) var_6))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (var_2)))))))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [(short)17] [18LL] [(unsigned short)10] = ((/* implicit */signed char) arr_11 [i_0] [i_0] [9] [i_4]);
                        /* LoopSeq 2 */
                        for (signed char i_5 = 3; i_5 < 17; i_5 += 4) 
                        {
                            arr_15 [i_2] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) var_14);
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))))));
                        }
                        for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13))));
                            arr_18 [i_1] = ((/* implicit */unsigned char) ((unsigned short) (short)-11066));
                            var_20 = ((/* implicit */unsigned char) (+(var_9)));
                            arr_19 [i_0] [i_0] [i_0] [6LL] [i_4] [i_0] [i_6] = ((/* implicit */short) (-(-919792913)));
                        }
                        /* LoopSeq 4 */
                        for (short i_7 = 1; i_7 < 18; i_7 += 4) 
                        {
                            var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_9)))) ? (((int) var_6)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8))))));
                            arr_22 [i_7] [i_7] [i_2] [i_7] [i_0] = ((/* implicit */long long int) var_2);
                        }
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            arr_25 [i_0] [i_1] [15ULL] [i_0] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                            var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */int) (short)-11090)) : (((/* implicit */int) (unsigned short)65535))))));
                            arr_26 [10ULL] [10ULL] [(_Bool)1] [i_4] = ((/* implicit */short) (+(((/* implicit */int) var_11))));
                            arr_27 [5U] [i_1] [5U] [i_1] [10] [i_1] = ((/* implicit */int) var_9);
                            arr_28 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [(_Bool)1] = var_0;
                        }
                        for (unsigned int i_9 = 0; i_9 < 19; i_9 += 2) /* same iter space */
                        {
                            var_23 ^= ((/* implicit */short) arr_20 [i_0] [i_0] [i_0] [i_9] [i_0] [i_0] [4U]);
                            arr_31 [i_1] [3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (var_0) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)26))))));
                            arr_32 [i_0] [(signed char)7] [i_2] [i_4] [(signed char)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_0] [(unsigned char)9])) : (((/* implicit */int) var_12))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 19; i_10 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) arr_23 [i_0] [i_0] [i_0] [i_0]))));
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [1] = ((/* implicit */unsigned char) ((short) var_5));
                            var_25 = ((/* implicit */unsigned char) var_9);
                            var_26 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (arr_23 [i_2] [i_2] [i_2] [4])));
                        }
                    }
                    arr_37 [i_2] [(signed char)17] [(unsigned short)12] &= ((/* implicit */short) (~(4294967295U)));
                    var_27 = ((/* implicit */int) var_12);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_11 = 2; i_11 < 15; i_11 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_12 = 3; i_12 < 13; i_12 += 2) 
        {
            arr_44 [i_11] [i_12] [i_12] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((var_0), (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (((((/* implicit */_Bool) var_15)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
            var_28 -= ((/* implicit */unsigned long long int) var_5);
        }
        arr_45 [i_11] |= ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_38 [i_11]))))));
        var_29 += ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))))));
    }
}
