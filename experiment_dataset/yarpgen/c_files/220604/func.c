/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220604
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
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (-2147483643))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((2114939917U) << (((((/* implicit */int) var_13)) - (47258)))))))) % (353766023U)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        arr_11 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_3 - 2])) ? (((/* implicit */int) arr_10 [i_3 - 1])) : (((/* implicit */int) (_Bool)1))));
                        var_17 = ((((/* implicit */int) var_7)) % (((/* implicit */int) (unsigned short)45561)));
                        var_18 = ((/* implicit */long long int) -549557538);
                        arr_12 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) | (((/* implicit */int) ((3423513476U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_0] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */unsigned short) var_5);
                            var_19 = ((/* implicit */unsigned long long int) ((unsigned char) arr_0 [(unsigned short)6]));
                            arr_16 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)24535)) | (485625266)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)0)))) : (var_11)));
                        }
                    }
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0])) == (((/* implicit */int) (_Bool)1))));
                        var_21 = ((/* implicit */int) ((unsigned int) var_10));
                        var_22 &= ((/* implicit */signed char) ((int) arr_6 [i_0] [i_1] [i_2] [i_5]));
                        arr_19 [i_5] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))));
                    }
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        arr_23 [i_0] [i_0] [i_0] [3U] [i_0] = ((/* implicit */unsigned short) ((unsigned char) (_Bool)1));
                        arr_24 [(unsigned short)11] [i_6] [i_2] [i_1] [(signed char)2] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-31619)) ? (((/* implicit */int) (_Bool)1)) : (1319109835)));
                    }
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18418166184134890526ULL)) && (((/* implicit */_Bool) -485625269))));
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) + (485625277)))) + (arr_2 [i_0] [i_1] [i_0]))))));
                    arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)152);
                }
                var_25 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) max((((((/* implicit */_Bool) 1923435562U)) ? (((/* implicit */int) var_3)) : (327049647))), ((-(((/* implicit */int) (_Bool)1))))))) + (((arr_9 [i_0] [i_1] [i_0]) - (((/* implicit */unsigned int) -549557537))))));
            }
        } 
    } 
}
