/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237612
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4130741144U)) ? (((/* implicit */int) (unsigned char)9)) : (1073741823)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 22; i_2 += 1) /* same iter space */
                {
                    var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-68)))))))) ? (((((/* implicit */_Bool) arr_5 [i_2] [(short)1] [20])) ? (((/* implicit */int) min((((/* implicit */short) arr_6 [(unsigned short)22])), ((short)-18377)))) : (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_1] [i_2 - 1])) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (signed char)67))))))));
                    var_14 = ((signed char) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) arr_0 [i_0])) : ((-(((/* implicit */int) (unsigned char)9))))));
                    var_15 &= ((/* implicit */short) arr_6 [(_Bool)1]);
                }
                for (unsigned char i_3 = 1; i_3 < 22; i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                    {
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            {
                                var_16 |= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned char) arr_13 [i_0 - 1] [i_1] [i_3 - 1] [i_4 + 3] [i_5]))), (5867425426969266107ULL)))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3] [i_1]))) : (5872412426848207026LL)))), (arr_3 [i_0 - 2] [i_0 - 1] [i_4 + 3]))) : (min((((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_4]))) : (arr_14 [19ULL] [i_4 + 4] [i_5]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-54)) ? (var_9) : (arr_7 [i_5] [i_4 + 4] [i_0]))))))));
                                var_17 = ((/* implicit */unsigned long long int) arr_11 [i_1] [i_3]);
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_11 [i_1] [i_1])), (arr_5 [i_0 + 1] [i_1] [i_4 + 4])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_5 [i_1] [i_3 + 2] [i_5])) : (((/* implicit */int) arr_5 [i_5] [i_3 + 1] [i_0 + 1]))))) : (((((/* implicit */_Bool) (+(arr_14 [i_5] [(signed char)21] [i_0])))) ? (((-5872412426848207020LL) * (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (5872412426848207041LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_6 = 3; i_6 < 22; i_6 += 2) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 835911163199004656ULL)) ? (((/* implicit */int) arr_1 [i_7 - 1] [12ULL])) : (var_2))))) ? (min((arr_3 [i_0 - 1] [i_6] [i_7]), (((((/* implicit */_Bool) (signed char)31)) ? (arr_3 [i_3] [i_1] [i_0 - 2]) : (var_6))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5872412426848207019LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)58))) : (5872412426848207019LL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_11 [10ULL] [i_6])), (arr_19 [i_0] [4ULL])))) : (arr_15 [i_0 - 1] [i_0 - 1] [(unsigned short)4] [i_0 + 1] [i_6] [i_6 - 2]))))))));
                                var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_7 - 1] [i_0 + 1] [i_3 - 1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [2ULL] [i_6 - 1]))) - (arr_14 [i_0 - 2] [i_0 - 1] [i_0 - 1]))) : (((/* implicit */unsigned long long int) arr_17 [i_3] [i_6 + 2] [i_3] [i_1] [i_0]))));
                                var_21 = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_3] [i_0 + 1] [i_0 + 1]);
                            }
                        } 
                    } 
                }
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [(short)16] [i_0 + 1])) ? (((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 2])) ? (((/* implicit */unsigned long long int) 5872412426848207041LL)) : (835911163199004656ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1])) ? (arr_18 [i_0] [i_0] [i_0 + 1] [i_0 + 1]) : (((/* implicit */int) arr_11 [i_1] [i_0])))))));
            }
        } 
    } 
}
