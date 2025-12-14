/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54734
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) < ((-((-(((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */int) ((((1583874711U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)160)))))) : (((/* implicit */int) (unsigned char)196))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 24; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((((/* implicit */int) (short)28419)), (arr_3 [i_1] [i_2]))) - (((/* implicit */int) max((((/* implicit */signed char) arr_2 [i_1] [i_1])), (var_1))))))) ? ((+(((/* implicit */int) (signed char)-117)))) : (((((((/* implicit */int) (signed char)-67)) + (((/* implicit */int) var_4)))) + (((/* implicit */int) (unsigned short)61071))))));
                        arr_10 [i_1] = ((/* implicit */_Bool) arr_7 [i_0] [(signed char)15] [i_2]);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 1; i_5 < 24; i_5 += 4) 
                        {
                            {
                                arr_17 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1 + 3] [i_2] [23ULL] [i_0])) ? (((/* implicit */int) ((803792504232166949ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65534)))))) : ((~(arr_4 [i_0] [i_1] [i_0])))))) <= (((var_3) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_2 + 1] [i_5 - 1])) : (max((arr_15 [i_0] [i_1] [i_1] [(_Bool)1] [i_5 - 1]), (((/* implicit */unsigned long long int) (unsigned char)195))))))));
                                arr_18 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) var_2);
                                var_13 = ((/* implicit */_Bool) arr_9 [i_4]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 1; i_6 < 22; i_6 += 3) 
                    {
                        arr_21 [16] [(_Bool)1] [i_1] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 3759579144U)) ? (arr_20 [i_0] [(unsigned char)19] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_9)) & (((/* implicit */int) arr_2 [20LL] [i_1])))), ((-(((/* implicit */int) arr_1 [i_2])))))))));
                        /* LoopSeq 1 */
                        for (int i_7 = 3; i_7 < 24; i_7 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_14 [i_0] [i_1 - 1] [i_2 - 1] [i_2 - 1] [i_0]), (((/* implicit */short) var_3)))))) * ((((+(3846145729857022444ULL))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0)))))))));
                            arr_24 [i_0] [i_1 + 3] [i_1] [i_1 + 3] [13ULL] [i_1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_3 [i_1] [i_6]), (((/* implicit */int) var_4))))) ? (min((((/* implicit */long long int) var_8)), ((+(var_2))))) : (((/* implicit */long long int) ((((/* implicit */int) var_0)) % (((/* implicit */int) arr_13 [(_Bool)1] [(unsigned short)13] [i_6] [(unsigned short)13] [i_1 + 3] [i_0])))))));
                            var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2283733632U))));
                        }
                    }
                    for (short i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        var_16 *= ((/* implicit */unsigned short) max(((+(arr_4 [(signed char)20] [(signed char)22] [i_1 + 1]))), (((/* implicit */int) arr_2 [i_8] [(signed char)18]))));
                        arr_27 [i_0] [i_1] [i_2] [i_1] [i_8] = ((/* implicit */int) (unsigned short)2047);
                    }
                }
                arr_28 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */int) ((((/* implicit */unsigned long long int) 2249152389134254449LL)) == (15302674133433949610ULL)))) + (((((/* implicit */_Bool) -775534028)) ? (arr_3 [i_1] [i_1 - 1]) : (((/* implicit */int) var_8))))))));
            }
        } 
    } 
}
