/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203381
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_2 [i_1] [i_4 - 4])) <= (11801316786461282432ULL)));
                                arr_15 [i_0] [i_0] [i_0] [i_2] [i_4] [i_0] = ((/* implicit */unsigned short) ((signed char) arr_13 [i_2] [i_2]));
                                var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (arr_9 [i_0] [i_1] [i_2] [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (arr_7 [i_2] [i_2] [i_3] [i_4 - 4])))), ((-((-(11801316786461282420ULL)))))));
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_8 [8U] [i_1] [i_1]), (((/* implicit */short) arr_0 [i_4 + 3]))))) || ((!(((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 6645427287248269184ULL))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    arr_19 [i_0] [i_0] [1] = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) min(((unsigned short)29946), (((/* implicit */unsigned short) (short)32767))))), (((((/* implicit */_Bool) 2568862962U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13))) : (14012655094869219478ULL)))))));
                    /* LoopSeq 1 */
                    for (int i_6 = 1; i_6 < 10; i_6 += 4) 
                    {
                        arr_23 [i_6] [(signed char)2] [(signed char)2] [i_0] [i_0] = ((/* implicit */short) ((signed char) (+(((/* implicit */int) ((short) 1132580657))))));
                        var_19 = ((/* implicit */short) 1564144322U);
                        var_20 *= ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_0] [i_5]);
                    }
                }
                for (unsigned short i_7 = 1; i_7 < 7; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        for (short i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            {
                                arr_33 [i_0] [i_1] [i_0] [(short)10] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35571)) ? (10917168626561348909ULL) : (6645427287248269165ULL)))) ? (((unsigned long long int) arr_0 [i_9])) : (((/* implicit */unsigned long long int) (+((~(3400660279U))))))));
                                var_21 += ((/* implicit */_Bool) arr_31 [5U] [i_7 + 3] [i_7 + 3] [i_7 + 4] [i_7 + 1]);
                                arr_34 [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_7 + 1] [i_7 + 4] [i_7 + 3])) ? (((((/* implicit */_Bool) arr_26 [(short)3] [i_0] [i_0])) ? (var_11) : (((/* implicit */int) arr_11 [i_0] [i_9])))) : ((+(((/* implicit */int) (unsigned short)35566))))))) ? (((/* implicit */int) ((short) arr_2 [5U] [i_9]))) : (((((/* implicit */_Bool) arr_24 [i_7] [i_7 + 1] [i_7 + 2] [i_7 - 1])) ? (((/* implicit */int) arr_24 [i_7 + 4] [i_7 + 2] [i_7 + 3] [i_7 + 4])) : (((/* implicit */int) arr_24 [i_7] [i_7 + 3] [i_7 + 3] [i_7 + 4])))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) 2594344465U);
                    var_23 += ((/* implicit */short) ((signed char) ((unsigned long long int) ((unsigned short) (short)-27771))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_24 = ((/* implicit */signed char) (_Bool)1);
                    arr_38 [i_0] [i_0] [i_1] [i_10] = (+(min((((unsigned int) var_10)), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_15)), (arr_1 [i_0])))))));
                    arr_39 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_8))));
                }
            }
        } 
    } 
    var_25 *= ((/* implicit */unsigned int) min((var_11), (((/* implicit */int) ((var_9) >= (min((((/* implicit */unsigned int) var_1)), (var_4))))))));
}
