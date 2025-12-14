/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227163
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_12 ^= ((/* implicit */unsigned short) arr_7 [i_1] [i_2]);
                    var_13 = ((/* implicit */unsigned short) arr_1 [i_1]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_3] [i_1]))) : (((((/* implicit */_Bool) arr_1 [i_0 - 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 + 1] [i_0]))) : (var_6))))))));
                            var_15 = ((/* implicit */long long int) arr_8 [i_2] [i_3] [i_2]);
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_2 - 1] [i_1] [i_3 - 2] [i_0 + 1] [i_0])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 3] [i_2]))))))));
                        }
                        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((arr_4 [i_3] [i_3] [i_3 - 1]) ? (arr_14 [i_0] [i_0] [i_2] [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_2]))))))))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((-(var_0))) : (var_5)))) ? (((((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) ? (var_5) : (((/* implicit */long long int) arr_11 [i_3] [i_2] [i_1] [i_0])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_2]))) : (arr_5 [i_0] [i_0]))))));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
                        {
                            var_19 = ((/* implicit */int) arr_4 [i_5] [i_2 + 1] [i_1]);
                            var_20 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_0 - 3] [i_0]))));
                            arr_17 [i_0] [i_2] [i_1] [i_2] [i_3] [i_5] [i_5] = ((/* implicit */unsigned int) var_7);
                            var_21 -= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-95)) & (((/* implicit */int) (short)9695))));
                        }
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
                        {
                            var_22 ^= arr_9 [i_0] [i_2 + 1] [i_6];
                            var_23 *= ((/* implicit */unsigned int) var_6);
                            arr_22 [i_6] [i_6] [i_2] [i_1] [i_6] |= ((/* implicit */short) ((((arr_9 [i_2 - 1] [i_3 + 1] [i_6]) / (arr_9 [i_0 - 4] [i_1] [i_0 - 2]))) < (arr_9 [i_0 - 4] [i_1] [i_0 + 1])));
                            var_24 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0 - 2]))) % (arr_5 [i_0 - 4] [i_3 + 1])));
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_7 [i_0] [i_0]))));
                        }
                    }
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        arr_26 [i_0 - 4] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_18 [i_2] [i_2] [i_2]) <= (arr_21 [i_7] [i_2] [i_1] [i_0 + 1]))) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [i_7]))))))))) ? (var_8) : (((/* implicit */int) ((((/* implicit */_Bool) 6978683083285448941LL)) || (((/* implicit */_Bool) 99572814U)))))));
                        var_26 &= ((/* implicit */unsigned short) arr_9 [i_7 + 1] [i_2 + 1] [i_0 - 2]);
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) var_6))));
                        arr_27 [i_2] = ((/* implicit */short) arr_19 [i_0] [i_2 + 1] [i_2] [i_7] [i_7 + 1] [i_7]);
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 4) 
                    {
                        arr_30 [i_2] = (-(arr_9 [i_2 - 1] [i_2 + 1] [i_2 + 1]));
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))) : (arr_18 [i_0] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_2 - 1] [i_0 - 1] [i_8 + 2] [i_0])) ? (((/* implicit */int) arr_23 [i_2 + 1] [i_0 - 3] [i_8 + 3] [i_0])) : (((/* implicit */int) arr_23 [i_2 + 1] [i_0 - 1] [i_8 + 3] [i_1]))))) : (((((/* implicit */_Bool) arr_6 [i_8] [i_1])) ? (arr_12 [i_0] [i_0 - 4] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 2]))))))))));
                    }
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned int) arr_0 [i_9]);
                        arr_33 [i_2] [i_1] [i_2] [i_9] = ((/* implicit */_Bool) var_8);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_10 = 3; i_10 < 16; i_10 += 2) 
    {
        for (signed char i_11 = 0; i_11 < 17; i_11 += 2) 
        {
            {
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)56352)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1479742670U)))))) : (((((/* implicit */_Bool) arr_35 [i_10])) ? (((/* implicit */unsigned long long int) (+(var_10)))) : (((((/* implicit */_Bool) arr_35 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_38 [i_10])))))));
                /* LoopNest 2 */
                for (unsigned int i_12 = 1; i_12 < 16; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 17; i_13 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) arr_38 [i_10]);
                            var_32 = ((/* implicit */unsigned short) (-(arr_40 [i_10] [i_11] [i_12])));
                        }
                    } 
                } 
            }
        } 
    } 
}
