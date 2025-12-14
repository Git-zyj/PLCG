/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41012
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
    var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned char) var_5)), (var_8)));
    var_21 = var_11;
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_22 -= ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_3 [i_0] [i_4 - 1])))) % (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-32753))))) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (_Bool)1))))));
                                var_23 = ((/* implicit */int) max((((/* implicit */long long int) (+(((/* implicit */int) var_13))))), (((arr_7 [i_4 - 1] [i_2] [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))));
                                var_24 = ((/* implicit */int) arr_3 [i_1] [i_0]);
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)64749))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)787)) * (((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4 + 1]))))) : (575334852396580864LL)));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 1; i_5 < 18; i_5 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_10))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_3) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37887))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) 34359738367LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1)))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (arr_9 [i_0] [i_1] [i_1] [i_5])))))))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 18; i_6 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */int) max((var_28), (((((arr_13 [i_0] [i_1] [i_2] [13LL]) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_6])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_6 - 1])))) / (((/* implicit */int) var_17))))));
                        arr_16 [6] [i_1] [6] [i_2] [i_1] = ((/* implicit */short) (~((-(arr_7 [i_2] [i_2] [i_6 + 2] [15U])))));
                    }
                    for (unsigned short i_7 = 1; i_7 < 18; i_7 += 3) /* same iter space */
                    {
                        var_29 -= ((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_2] [i_7]);
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65408)) ^ (((/* implicit */int) (unsigned short)64740))))) ^ (var_10))) | (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((arr_15 [i_7]), (((/* implicit */unsigned char) (_Bool)1))))), (arr_11 [i_0] [i_7] [i_2] [9LL] [i_7] [i_0])))))))));
                    }
                    var_31 ^= ((/* implicit */long long int) var_4);
                    var_32 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)812))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 1; i_9 < 18; i_9 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 134201344)), (max((((/* implicit */long long int) arr_4 [i_1] [i_8] [i_9])), (var_3)))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_2 [i_2] [i_8]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : ((~(4028702592U)))))))))));
                                arr_28 [i_9] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((3939070442U), (((/* implicit */unsigned int) -1906505432))))) ? (17ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64762))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_9 + 1] [i_9 + 3] [i_1] [i_9 + 1])) ? (((/* implicit */int) arr_9 [i_9 + 2] [i_9 + 1] [i_1] [i_9 + 1])) : (((/* implicit */int) arr_9 [i_9 + 1] [i_9 + 1] [i_1] [i_9 + 2])))))));
                                var_34 = ((/* implicit */_Bool) min((((/* implicit */int) var_17)), (((((/* implicit */int) arr_26 [i_9 - 1] [i_9] [i_9] [i_9] [i_9 - 1] [i_1] [i_9 + 3])) ^ ((~(((/* implicit */int) var_2))))))));
                                arr_29 [i_1] [i_0] = ((/* implicit */short) var_4);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_30 [i_0] [i_0] = ((/* implicit */signed char) arr_12 [(_Bool)1] [i_0] [i_0] [i_0] [i_0]);
    }
    for (short i_10 = 0; i_10 < 15; i_10 += 4) 
    {
        arr_34 [i_10] [i_10] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((4294967282U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_10]))))))) == (((var_12) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_0))))))) == (min((((10340612106875959717ULL) | (((/* implicit */unsigned long long int) 207358389)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (unsigned short)764))))))));
        /* LoopSeq 1 */
        for (signed char i_11 = 2; i_11 < 14; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 15; i_12 += 1) 
            {
                for (short i_13 = 0; i_13 < 15; i_13 += 2) 
                {
                    {
                        var_35 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (444747089441333210LL) : (min((var_19), (-7111889360005366337LL))))) ^ (((((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */long long int) 5)) : (-4412392431425820263LL))) << (((/* implicit */int) (_Bool)1))))));
                        arr_42 [i_10] [i_12] [(unsigned char)14] = ((/* implicit */short) ((((/* implicit */long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_10] [i_11] [i_12] [19U] [i_10] [i_10]))) / (var_18))), (((/* implicit */unsigned int) min((var_11), (((/* implicit */short) var_12)))))))) % (7761053844800963073LL)));
                        var_36 = ((/* implicit */unsigned int) arr_20 [i_10] [i_10] [i_12] [i_12]);
                    }
                } 
            } 
            var_37 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 16646365728037012921ULL)) || (((/* implicit */_Bool) var_17)))))) * (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-118)) * (((/* implicit */int) var_12))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
        }
    }
    var_38 = min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (-6496499187075235223LL)))) ? (var_9) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)300)), (var_2)))))));
}
