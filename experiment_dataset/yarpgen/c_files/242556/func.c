/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242556
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
    var_10 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) var_4)))));
    var_11 = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)50584));
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_2] [18ULL] = ((/* implicit */unsigned long long int) ((var_9) << (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_0)) : (17896892285332644476ULL))) - (114627785ULL)))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            var_12 = ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */long long int) ((int) 549851788376907170ULL))));
                            var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                        }
                        for (signed char i_5 = 3; i_5 < 20; i_5 += 3) 
                        {
                            arr_15 [i_0 + 3] [i_1] [i_0] [i_2] [(unsigned short)12] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_4))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)43158)) && (((/* implicit */_Bool) (unsigned char)254))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)61548)) : (((/* implicit */int) var_4))))));
                            var_14 = ((((/* implicit */int) (unsigned short)4004)) & (((/* implicit */int) var_4)));
                            arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((var_7) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61548)))));
                            arr_17 [i_0] [12ULL] [i_2] [i_2] [i_0] = ((/* implicit */long long int) ((unsigned long long int) var_1));
                        }
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            var_15 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (unsigned char)128)) / (((/* implicit */int) (unsigned short)22378)))));
                            var_16 = ((/* implicit */unsigned long long int) ((_Bool) ((8074538543108729664LL) < (((/* implicit */long long int) ((/* implicit */int) var_6))))));
                            arr_21 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)61536)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (signed char)-16))));
                        }
                        for (unsigned short i_7 = 1; i_7 < 20; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22383))) : (2194743187U))));
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) var_8)))))));
                            var_19 = ((/* implicit */unsigned long long int) var_8);
                        }
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 2; i_8 < 19; i_8 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_9 = 1; i_9 < 17; i_9 += 3) 
                {
                    arr_30 [i_0] [i_1 + 1] [2] [i_0] = ((/* implicit */_Bool) (+(var_7)));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3990))) : (-8074538543108729665LL)))) ? (var_9) : (((((/* implicit */int) var_4)) + (var_9))))))));
                }
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    for (signed char i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        {
                            arr_37 [i_0] [i_10] [i_11] = ((((/* implicit */_Bool) 17896892285332644459ULL)) && (((/* implicit */_Bool) var_1)));
                            var_21 -= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (var_8))) + (2147483647))) << (((var_9) - (1731904677)))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)3986)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) : (549851788376907170ULL)));
                        }
                    } 
                } 
                arr_38 [i_0] [17] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_1)) - (43600)))))) + (((unsigned int) var_1))));
            }
            for (unsigned char i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 21; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) var_0);
                            arr_50 [i_0] [i_0] [(short)14] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? (var_7) : (((/* implicit */long long int) ((int) 549851788376907112ULL)))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-27789))) : (5920702499598642572LL)))) ? ((+(((/* implicit */int) (unsigned short)64872)))) : (((((/* implicit */_Bool) 1793633023U)) ? (((/* implicit */int) (unsigned short)3983)) : (((/* implicit */int) (unsigned short)4000))))));
                            arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (var_0))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3800478967U)) && (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (unsigned short)25944))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned int) var_6);
            }
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 1; i_15 < 17; i_15 += 2) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        arr_59 [i_0] [i_0] [i_15] [i_15 + 2] [i_16] = ((/* implicit */unsigned short) (unsigned char)110);
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) % (var_0)))))))));
                        arr_60 [2] [(signed char)4] [(unsigned char)6] [i_16] |= ((/* implicit */unsigned short) var_4);
                    }
                } 
            } 
            var_27 += ((/* implicit */_Bool) ((((((/* implicit */int) var_5)) * (((/* implicit */int) var_4)))) / (((((/* implicit */int) (unsigned char)51)) * (((/* implicit */int) var_3))))));
        }
        arr_61 [i_0] [i_0] = ((/* implicit */_Bool) (-(((var_9) - (((/* implicit */int) var_4))))));
    }
    var_28 -= ((/* implicit */unsigned short) (-(((((unsigned long long int) var_0)) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))))))));
}
