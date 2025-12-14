/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234792
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_15 [(short)3] = ((((((/* implicit */int) (short)768)) << (((arr_7 [i_0] [i_1] [i_1] [i_3]) - (7284813091036136025ULL))))) << ((((((~(((((/* implicit */int) (short)767)) ^ (((/* implicit */int) var_17)))))) + (609))) - (16))));
                            var_18 = min((((/* implicit */int) min(((unsigned short)51863), (((/* implicit */unsigned short) (signed char)-105))))), ((~(((/* implicit */int) ((_Bool) var_6))))));
                        }
                        var_19 -= ((/* implicit */signed char) var_17);
                        arr_16 [i_0] [i_1] = ((/* implicit */long long int) arr_7 [i_0] [(_Bool)1] [i_0] [i_0]);
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) + (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-768))) > (3937538515U))))) : (((arr_7 [i_0] [i_1] [i_0] [i_5]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))))))));
                        arr_19 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_1] [(short)10] [i_5])) > (((/* implicit */int) (unsigned short)65535))))) >= (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_5])) != (((/* implicit */int) (_Bool)1)))))));
                        var_21 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_5])) ? (((/* implicit */int) arr_13 [i_5] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_2] [i_0]))))));
                        var_22 *= (!(((/* implicit */_Bool) var_12)));
                        arr_20 [i_0] [i_1] = ((/* implicit */_Bool) (-(var_6)));
                    }
                    var_23 *= ((/* implicit */_Bool) arr_0 [i_1] [i_1]);
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) var_10))));
                        var_25 = ((/* implicit */signed char) ((((((/* implicit */int) (short)-768)) + (((/* implicit */int) (short)768)))) | ((-((-(((/* implicit */int) var_4))))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_27 [i_7] [i_0] [i_0] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)781)) >> (((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_1] [i_2] [i_7]))));
                        var_26 |= ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_23 [i_0] [i_1] [i_1] [i_7]))))))));
                        var_27 = (i_7 % 2 == 0) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-770)) ? (((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) 1947002584))))) ? (((arr_25 [i_0] [i_0] [i_7]) << (((((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_7])) - (1274))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))))) : (((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned short)65535)))))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-770)) ? (((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) 1947002584))))) ? (((((arr_25 [i_0] [i_0] [i_7]) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_7])) - (1274))) - (1))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))))) : (((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned short)65535))))))))));
                        arr_28 [11] [i_1] [0] [i_1] [i_7] = ((/* implicit */short) (((((~(((/* implicit */int) var_17)))) > (((/* implicit */int) var_1)))) ? ((~(((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [i_7])))) : (((((/* implicit */_Bool) arr_3 [i_7] [i_2])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */int) var_10))))));
                        arr_29 [i_7] [i_1] [i_1] [i_7] [1] [i_7] = ((/* implicit */int) (((~(arr_6 [i_7] [i_7] [i_2] [i_7]))) != (((/* implicit */int) var_1))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        var_28 = ((/* implicit */_Bool) min(((+((-(((/* implicit */int) (short)32767)))))), (((/* implicit */int) ((arr_3 [i_0] [i_0]) > (((/* implicit */int) arr_11 [i_0] [i_2] [i_8])))))));
                        arr_33 [i_0] [i_1] [i_2] [(unsigned char)11] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_21 [(_Bool)1] [i_8] [i_8] [i_8] [11U])) ? (arr_8 [i_0] [i_0] [i_2] [i_8]) : (((/* implicit */unsigned int) var_5))))));
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_29 ^= ((/* implicit */unsigned short) (-((~(min((((/* implicit */unsigned long long int) arr_4 [i_2] [i_2] [i_2])), (var_9)))))));
                            var_30 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24908))) == ((+(var_9)))))), (max((((((/* implicit */int) arr_4 [i_0] [i_0] [(short)3])) * (((/* implicit */int) (signed char)-49)))), ((+(((/* implicit */int) arr_4 [i_8] [(unsigned char)1] [i_0]))))))));
                            arr_37 [i_9] [i_8] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) arr_18 [3] [i_1] [(_Bool)1] [i_8])))));
                            var_31 *= ((/* implicit */unsigned long long int) ((((((arr_17 [i_0] [i_0] [i_2] [i_8]) + (2147483647))) >> (((/* implicit */int) arr_32 [i_0])))) << (((((min((((/* implicit */long long int) ((unsigned short) var_16))), (max((arr_34 [i_0] [i_1] [(unsigned short)5] [(unsigned short)5] [i_9]), (((/* implicit */long long int) arr_17 [i_0] [(unsigned short)6] [i_2] [i_8])))))) + (1414164171LL))) - (6LL)))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_40 [i_10] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_8] [i_2] [i_0])) ? (((/* implicit */int) (short)768)) : (-1947002585))))));
                            var_32 *= ((/* implicit */unsigned short) (_Bool)1);
                        }
                    }
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */unsigned short) ((var_11) ^ (-5621421876608831026LL)));
}
