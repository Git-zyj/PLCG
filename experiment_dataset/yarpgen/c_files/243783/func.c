/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243783
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
    /* LoopSeq 4 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        arr_2 [0LL] |= ((/* implicit */unsigned long long int) arr_0 [i_0]);
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)121)) ? (1660916776U) : (((/* implicit */unsigned int) 2144762435)))) : (((arr_8 [i_0] [14LL] [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [19U]))) : (arr_9 [i_0])))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_0]))))) ? (((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_2] [i_3] [i_2] [i_2] [i_0] [i_0]))) : (arr_6 [1LL] [i_1] [i_1]))) : (((((/* implicit */_Bool) arr_12 [11] [i_0] [i_4])) ? (arr_4 [i_0 - 3] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_3] [i_0]))))))) : (((/* implicit */long long int) (+(65685256U))))));
                                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (+((-((+(arr_6 [i_0] [i_1] [i_2]))))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1 - 1] [i_1] [i_2] = ((/* implicit */unsigned char) (-((-(((int) arr_7 [i_0] [i_0]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_5 = 1; i_5 < 20; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 4; i_7 < 19; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 2; i_8 < 19; i_8 += 3) 
                        {
                            {
                                var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_6] [i_0] [i_8])) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_7]))))) ? (((/* implicit */int) arr_8 [20ULL] [8U] [20ULL] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))) ? (((unsigned long long int) arr_11 [i_0] [i_0])) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) arr_16 [i_8] [i_7] [i_6])) : (((/* implicit */int) arr_19 [i_0]))))))));
                                var_16 += ((((/* implicit */_Bool) (((!(arr_8 [i_0] [i_5 + 1] [i_0] [i_7]))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_5 + 1] [i_8])) ? (((/* implicit */int) arr_23 [i_0] [i_0 - 3] [i_7] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_16 [i_8] [i_6] [i_5])))) : ((-(((/* implicit */int) arr_10 [i_7] [i_7] [i_6] [2] [i_8]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_6] [i_0] [i_0])) ? (arr_12 [i_8] [i_7] [i_0]) : (((/* implicit */unsigned int) arr_17 [i_7]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_23 [i_8] [i_8] [i_7] [i_8] [i_8] [i_7]))))) : ((~(arr_20 [i_7] [i_7])))))) : (((long long int) (!(((/* implicit */_Bool) arr_13 [i_8 - 2] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))));
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_5] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_0])) : (((/* implicit */int) arr_11 [i_5] [i_0]))))))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_18 [i_0] [i_5 - 1] [i_0])) : (((/* implicit */int) arr_23 [(signed char)20] [(signed char)20] [i_0] [i_0] [16U] [(signed char)20]))))) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0] [(_Bool)1] [(_Bool)1] [i_5] [i_5])) ? (((/* implicit */int) arr_5 [i_0 - 1])) : (((/* implicit */int) arr_10 [i_6] [i_6] [i_0] [i_5] [i_0])))))))) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))));
                    var_18 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_6] [i_6])) ? (((/* implicit */int) ((unsigned char) ((int) arr_18 [i_0] [i_5 + 1] [i_6])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_4 [i_0] [i_0] [i_0 - 1]) : (arr_4 [i_0] [i_0 - 2] [i_0])))))))));
                }
            } 
        } 
    }
    for (unsigned short i_9 = 1; i_9 < 14; i_9 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2144762442)) ? (((/* implicit */unsigned long long int) 1746733270718883664LL)) : (16062488709035840030ULL)));
        var_20 = ((/* implicit */unsigned short) (-((((!(((/* implicit */_Bool) arr_26 [i_9] [i_9 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_9] [(signed char)16]))) : ((~(arr_9 [i_9])))))));
        arr_28 [i_9] = ((/* implicit */unsigned char) ((short) (~(((((/* implicit */_Bool) arr_5 [i_9])) ? (((/* implicit */int) arr_1 [i_9])) : (((/* implicit */int) arr_21 [i_9] [i_9] [i_9 - 1] [i_9])))))));
    }
    for (unsigned short i_10 = 1; i_10 < 14; i_10 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_18 [i_10 - 1] [i_10 + 2] [4LL]))));
        var_22 -= ((/* implicit */unsigned long long int) (-(((unsigned int) (+(((/* implicit */int) arr_19 [(_Bool)1])))))));
        arr_32 [(_Bool)1] = ((/* implicit */short) ((int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [(signed char)7] [(signed char)7]))) : (arr_12 [i_10] [10LL] [6LL])))));
    }
    /* vectorizable */
    for (unsigned short i_11 = 1; i_11 < 14; i_11 += 4) /* same iter space */
    {
        arr_37 [i_11] &= ((/* implicit */unsigned short) (((!(arr_34 [i_11] [i_11]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_11])) ? (arr_20 [(signed char)10] [i_11 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_11] [i_11] [i_11 + 3])))))) : (((long long int) arr_11 [i_11 + 1] [(signed char)16]))));
        arr_38 [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5048194986363311021LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6100))) : (3445599102U)))) ? (840505165) : (((((/* implicit */_Bool) 2144762435)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_30 [i_11 + 2] [i_11]))))));
    }
    var_23 = ((/* implicit */short) (~(var_3)));
    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) var_11))));
    var_25 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_2) : (var_2)))) ? (((/* implicit */unsigned int) ((var_1) ? (var_0) : (((/* implicit */int) var_12))))) : (((var_1) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_2)));
}
