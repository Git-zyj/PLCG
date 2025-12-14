/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243713
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
    var_13 = ((/* implicit */_Bool) (+(0LL)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [1])) == (((/* implicit */int) var_7)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) & (var_5))) : (((/* implicit */unsigned long long int) 4LL))));
        var_15 += ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (-3LL) : (((/* implicit */long long int) -17773303)))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (~(((/* implicit */int) var_8)))))));
            var_17 = var_6;
            var_18 = ((/* implicit */_Bool) var_2);
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            var_19 |= ((/* implicit */signed char) min(((-(((/* implicit */int) ((short) 0LL))))), (((((/* implicit */int) (unsigned short)17999)) / (((/* implicit */int) (unsigned char)241))))));
                            var_20 = ((/* implicit */short) (-((+(((((/* implicit */int) (short)17445)) * (((/* implicit */int) (signed char)99))))))));
                            var_21 = ((/* implicit */long long int) var_3);
                            var_22 = ((/* implicit */short) (((!(((_Bool) (_Bool)1)))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (18446744073709551599ULL) : (var_5))), (((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) 2857958596250139360LL))))))))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_2)))))))) ? (((((((/* implicit */int) var_9)) << (((/* implicit */int) var_12)))) % (((/* implicit */int) arr_3 [i_0])))) : (min((-1045936652), (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (short)-28246)))))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            arr_17 [i_0] [i_5] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((1ULL) >> (((17592177655808ULL) - (17592177655758ULL))))) & ((~(18446744073709551599ULL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) << (((((/* implicit */int) arr_16 [(unsigned char)19] [(unsigned char)6] [i_2] [i_3] [i_1 + 1])) - (12851)))))) : ((((~(4261412864U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-22086)))))));
                        }
                        for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned short) var_8);
                            var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)241)) || (((/* implicit */_Bool) arr_5 [i_6] [i_1])))) ? (((/* implicit */int) ((((/* implicit */int) (short)-23306)) == (((/* implicit */int) (_Bool)1))))) : (((var_12) ? ((~(((/* implicit */int) (short)-23)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
                            var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
                        }
                        var_28 = ((/* implicit */short) ((int) ((arr_15 [i_2] [i_1] [(short)1]) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)3)) + (((/* implicit */int) (unsigned char)15))))))));
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27615))) & (1829103200U))))));
                        var_30 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)0)))) ^ (1045936651)));
                    }
                } 
            } 
        }
    }
}
