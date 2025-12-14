/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222297
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
    var_12 = ((/* implicit */unsigned char) var_11);
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(var_2)))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    var_14 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 730783763)) || (((/* implicit */_Bool) -1714370834)))))) : (var_5))), (((/* implicit */unsigned long long int) (signed char)116))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        arr_3 [(unsigned char)6] = ((/* implicit */unsigned short) var_0);
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) -1714370826))));
        var_16 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : ((+(((((/* implicit */long long int) 0U)) & (11LL)))))));
        arr_4 [(short)0] = (~(((/* implicit */int) var_4)));
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_11 [i_1] [5ULL] [7] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-108))))), (var_8)));
                    arr_12 [(unsigned char)9] [(unsigned char)9] [i_1] = ((/* implicit */short) ((long long int) (~(((/* implicit */int) (short)-13025)))));
                    arr_13 [i_1] [5ULL] [12ULL] [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) (+(2281187404666724327LL))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
                    {
                        arr_26 [i_3] [2LL] = ((/* implicit */signed char) arr_6 [i_3] [i_4] [i_5]);
                        var_17 = ((/* implicit */unsigned char) ((6864989820386490098ULL) != (((/* implicit */unsigned long long int) -2414251364281854660LL))));
                        var_18 &= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_23 [(unsigned short)12] [(unsigned char)8] [(signed char)4] [8ULL] [(signed char)11] [(unsigned short)4]))));
                        var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-67))));
                        var_20 ^= ((/* implicit */signed char) arr_1 [i_4]);
                    }
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned long long int) (+(2)));
                        arr_29 [(unsigned short)12] [0] [(unsigned char)1] [3] [i_5] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) var_4))));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) 6864989820386490109ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (8796093022207ULL))))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 2; i_9 < 12; i_9 += 4) 
                        {
                            {
                                arr_36 [(short)12] [i_8] [8] [3ULL] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [5LL] [i_4] [(unsigned char)10] [i_9 - 1]))) ^ (var_5)));
                                var_23 += ((/* implicit */unsigned int) (short)-24);
                            }
                        } 
                    } 
                    arr_37 [9ULL] [i_4] [11] [i_5] &= ((/* implicit */signed char) arr_17 [11]);
                    arr_38 [i_3] [(unsigned char)7] = ((/* implicit */unsigned long long int) (_Bool)1);
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (short)-3432))))));
    }
}
