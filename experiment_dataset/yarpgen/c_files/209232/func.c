/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209232
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
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] = arr_5 [8U] [i_1] [8U];
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (-(min((4845479896096931150ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */int) (short)5483)) : (((/* implicit */int) arr_0 [i_0]))))))))))));
                    var_16 = ((/* implicit */short) ((((arr_5 [i_0] [i_1 - 2] [(unsigned char)9]) ? (((/* implicit */int) arr_5 [i_2] [i_1 - 1] [i_2])) : (((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_2])))) >= (((/* implicit */int) arr_5 [i_2] [i_1] [i_0]))));
                    arr_10 [i_0] [i_2] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)54103))) / (54043195528445952LL));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 9; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), (((((/* implicit */int) ((short) ((arr_5 [i_4] [i_3] [i_0]) ? (((/* implicit */int) arr_15 [i_0])) : (((/* implicit */int) (signed char)5)))))) > (((/* implicit */int) ((_Bool) (_Bool)1)))))));
                    arr_16 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((long long int) ((((/* implicit */_Bool) (short)-32750)) ? (((/* implicit */int) arr_13 [i_3] [i_0] [i_3 - 1] [i_4])) : (((/* implicit */int) (short)5456))))) == (((/* implicit */long long int) ((/* implicit */int) (!(arr_11 [i_3 - 1] [i_3 - 1])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_18 -= ((/* implicit */int) max((((((/* implicit */_Bool) arr_7 [i_3 + 2] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_3 + 2] [i_3 - 1] [i_3 - 1] [i_3] [i_0]))) : (arr_7 [i_3 + 2] [i_3 + 1] [i_3 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_3 + 1] [i_3 + 2] [i_4] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_20 [i_3 + 1] [i_3 + 2] [i_3 + 1] [(signed char)10] [i_0])))))));
                                arr_24 [i_3] [i_3] [i_3] [(_Bool)1] [i_4] [i_5] [(_Bool)1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_23 [i_3])))) ? (((((/* implicit */_Bool) (unsigned short)11433)) ? (((/* implicit */int) arr_23 [i_3])) : (((/* implicit */int) arr_17 [i_3])))) : (((/* implicit */int) arr_23 [i_3]))));
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((int) (_Bool)1))), (((((/* implicit */long long int) ((/* implicit */int) (short)-24624))) / (-1175463697713856946LL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            for (short i_8 = 1; i_8 < 8; i_8 += 4) 
            {
                {
                    arr_30 [i_0] [i_0] [(unsigned char)4] [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_7])) : (((/* implicit */int) arr_17 [i_0]))))) & ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_7]))) : (arr_7 [i_0] [i_7] [8U]))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_8 - 1] [i_7] [i_0])) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) (_Bool)0)))))));
                    var_20 = ((/* implicit */unsigned int) arr_22 [i_8 + 1] [i_8 + 2] [i_8] [i_8] [i_0] [i_0]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            for (unsigned long long int i_10 = 1; i_10 < 10; i_10 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        var_21 ^= ((/* implicit */short) (-(((long long int) arr_26 [i_10 + 1] [i_10 + 1]))));
                        arr_41 [i_11] [i_9] [i_9] [i_9] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */long long int) ((arr_7 [i_10 - 1] [i_10 - 1] [10]) & (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)204)) : (arr_12 [i_0] [5U] [i_10 + 1]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_9] [i_0] [(unsigned char)10] [(unsigned char)4] [(_Bool)1])) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_11])) : (((/* implicit */int) (unsigned char)233))))) ? (max((((/* implicit */long long int) arr_8 [i_9])), (-6155336077214600834LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_10 - 1] [i_11])))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        for (long long int i_13 = 2; i_13 < 10; i_13 += 4) 
                        {
                            {
                                arr_46 [i_9] = ((/* implicit */unsigned long long int) (signed char)-117);
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) ((_Bool) arr_19 [i_13] [i_13] [i_12] [i_13 + 1]))) : (((/* implicit */int) ((short) 8777165384632999787ULL)))))) ? (((long long int) arr_19 [i_13] [i_13] [i_13] [i_10 + 1])) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_19 [i_13] [i_13] [i_10 - 1] [i_13])))))))));
                            }
                        } 
                    } 
                    var_23 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned short)765)) ? (((/* implicit */int) (unsigned short)64771)) : (((/* implicit */int) (unsigned short)8)))) - (64747)))))) ? (((/* implicit */int) (short)24492)) : (((/* implicit */int) (short)-16))));
                    /* LoopSeq 1 */
                    for (long long int i_14 = 3; i_14 < 9; i_14 += 2) 
                    {
                        arr_50 [i_0] [(_Bool)1] [i_9] [(_Bool)1] [i_14] = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_37 [i_10 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)32)) ? (1649451902747987249LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-5456)))))) : (min((9669578689076551829ULL), (((/* implicit */unsigned long long int) (short)16757))))));
                        arr_51 [i_9] [3ULL] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((long long int) (((((~(arr_8 [i_9]))) + (2147483647))) << (((((((/* implicit */_Bool) (short)16757)) ? (11333706325472575585ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_9]))))) - (11333706325472575585ULL))))));
                        arr_52 [i_14 + 2] [i_9] [8LL] [i_9] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 4468860139014313222ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)90)) >> (((((/* implicit */int) arr_43 [i_9] [i_9] [i_9] [i_9] [i_9])) + (3051)))))) ? (((/* implicit */int) arr_45 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_9] [(unsigned char)0] [(short)9])) : (((((/* implicit */_Bool) arr_48 [i_0] [i_0] [(unsigned short)3] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)5486)) : (((/* implicit */int) (unsigned short)784)))))) : (((/* implicit */int) (_Bool)1))));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (_Bool)1))));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) arr_19 [i_0] [i_10 - 1] [i_10 - 1] [i_14 + 2]))));
                    }
                }
            } 
        } 
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_26 += ((/* implicit */unsigned int) ((long long int) (unsigned char)10));
        arr_55 [i_15] [i_15] &= ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_53 [i_15] [i_15])) ? (((/* implicit */int) (short)-32762)) : (((/* implicit */int) arr_53 [(short)16] [i_15])))));
    }
    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) max((var_3), ((!(((((/* implicit */_Bool) var_13)) || (var_11))))))))));
}
