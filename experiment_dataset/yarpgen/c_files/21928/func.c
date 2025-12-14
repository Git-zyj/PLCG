/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21928
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
    var_13 = ((/* implicit */int) max((-874929787268942935LL), (((/* implicit */long long int) (short)-28068))));
    var_14 = ((/* implicit */long long int) ((int) (signed char)60));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) max((((short) 207785765747840545LL)), (((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1])))))));
                var_16 |= ((/* implicit */signed char) ((((/* implicit */int) min((arr_3 [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned short) (unsigned char)189))))) | (((/* implicit */int) min((arr_3 [i_1 - 1] [i_1 - 1]), (arr_3 [i_1 - 1] [i_1 - 1]))))));
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) arr_2 [i_1 - 1]))));
                var_18 = ((/* implicit */unsigned short) arr_2 [i_1 - 1]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned int i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max((((/* implicit */short) (_Bool)0)), (max((((/* implicit */short) var_6)), ((short)-16121))))))));
                            /* LoopSeq 3 */
                            for (short i_4 = 2; i_4 < 18; i_4 += 2) /* same iter space */
                            {
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((((((/* implicit */int) var_11)) << (((/* implicit */int) ((var_5) < (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))), (max((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((/* implicit */long long int) var_1)) >= (2368316271658752971LL)))))))))));
                                var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) (short)-3697)) & (((/* implicit */int) (short)10112))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */short) var_11))))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_7))))) : (((arr_6 [(unsigned char)15] [i_1] [i_2] [i_1]) * (var_8))));
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)8)) ? (-4846021297792288300LL) : (((/* implicit */long long int) arr_6 [i_4 - 2] [i_1] [i_2 + 2] [i_1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (arr_5 [i_1] [i_1])))));
                            }
                            /* vectorizable */
                            for (short i_5 = 2; i_5 < 18; i_5 += 2) /* same iter space */
                            {
                                var_22 = ((/* implicit */unsigned char) ((var_5) << (((((/* implicit */int) (signed char)-29)) + (41)))));
                                var_23 = ((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_1] [i_5 - 2]);
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (1591173515U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)54988)))))));
                                var_25 = ((/* implicit */_Bool) (~(arr_11 [i_2 + 1] [i_3 + 2] [i_2] [i_1] [i_5])));
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                arr_20 [i_1] [1LL] [6ULL] [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */short) var_0)), (max((((/* implicit */short) (signed char)-11)), ((short)-16128)))));
                                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (short)-10112))));
                                var_27 = ((((/* implicit */_Bool) var_1)) ? ((~(var_9))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_18 [i_6] [8] [i_2] [8] [i_0])) ^ (((/* implicit */int) (short)8723)))) & (((/* implicit */int) max((var_12), (((/* implicit */unsigned short) arr_7 [(short)4] [i_3] [i_0] [i_0])))))))));
                                var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)21)), (var_2))))));
                                arr_21 [i_1] = ((/* implicit */long long int) arr_16 [i_1] [i_2]);
                            }
                            var_29 = ((/* implicit */unsigned char) 4846021297792288276LL);
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) max((((/* implicit */int) var_0)), (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [(unsigned short)8] [i_1] [i_1] [i_0])) : (1492896545))) << (((arr_6 [i_3 - 3] [i_1] [i_2 - 1] [i_1]) - (1322729886U)))))))) : (((/* implicit */unsigned char) max((((/* implicit */int) var_0)), (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [(unsigned short)8] [i_1] [i_1] [i_0])) : (1492896545))) << (((((arr_6 [i_3 - 3] [i_1] [i_2 - 1] [i_1]) - (1322729886U))) - (2838176543U))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        for (unsigned char i_8 = 1; i_8 < 13; i_8 += 2) 
        {
            {
                arr_27 [i_7] [i_7] = ((/* implicit */unsigned int) ((signed char) arr_25 [(unsigned char)4] [i_7] [i_8 - 1]));
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    for (long long int i_10 = 3; i_10 < 13; i_10 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) (_Bool)0);
                            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (signed char)1))));
                        }
                    } 
                } 
                var_32 = -3197611140753018660LL;
            }
        } 
    } 
}
