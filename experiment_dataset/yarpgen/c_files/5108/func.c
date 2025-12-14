/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5108
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
    var_10 = ((/* implicit */signed char) var_2);
    var_11 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((13124170839994635105ULL), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) ((unsigned char) var_6))) : (((/* implicit */int) (unsigned char)255))))));
    var_12 = ((/* implicit */int) min((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))) : (var_8))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) || (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_8)))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)32768)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0]))) : (((/* implicit */int) (unsigned char)9)))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_13 |= ((/* implicit */int) arr_2 [i_0] [i_1 + 1]);
                        arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [(unsigned char)10] [i_2] [i_3] [1]);
                        var_14 = ((/* implicit */unsigned short) max((((_Bool) arr_5 [i_0] [i_2] [i_0])), ((_Bool)0)));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((_Bool) arr_5 [i_0] [i_2] [i_0])), ((_Bool)1)))) | (((/* implicit */int) var_2))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)65533);
                        var_15 = ((/* implicit */_Bool) ((min((15181468958989498214ULL), (((/* implicit */unsigned long long int) -1315996264)))) / (((/* implicit */unsigned long long int) 1315996277))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)255))));
                            arr_20 [i_1 + 1] [i_0] = ((/* implicit */unsigned short) max((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) > (var_1))))) : (((var_1) >> (((arr_2 [i_0 + 1] [i_2]) - (5076332902633421191LL))))))))));
                            var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) 1348509289U))))) ? (((/* implicit */int) arr_14 [i_0 + 1] [i_1] [i_2] [i_5])) : (((/* implicit */int) min((((/* implicit */unsigned char) ((signed char) (_Bool)0))), (arr_19 [i_0 - 1] [i_1 - 1]))))));
                            arr_21 [i_0] [1U] [i_0] [i_1] [i_0] [i_5] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((1896728954U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65525)))))), (((2398238341U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            var_18 = ((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */unsigned long long int) arr_19 [i_1 + 3] [i_1])), (arr_9 [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_1 + 2]))));
                        }
                        arr_22 [i_0] [i_1] [i_0] [i_0] [i_4] [i_4] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) ((arr_8 [i_4] [i_2] [10] [(short)12] [i_1] [1ULL]) & (((/* implicit */int) arr_5 [(unsigned char)7] [(unsigned char)7] [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (3939692958U))))))));
                        arr_23 [i_1 + 2] [i_2] [i_0] = ((/* implicit */unsigned short) min((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_1 - 1]), (((/* implicit */short) var_7))));
                    }
                    arr_24 [i_0] [i_2] = ((/* implicit */unsigned char) max((12ULL), (((/* implicit */unsigned long long int) (unsigned short)1))));
                    arr_25 [i_1] [i_1] [i_0] = ((/* implicit */long long int) max((18446744073709551605ULL), (((/* implicit */unsigned long long int) max((var_6), (arr_19 [i_2] [i_0 + 3]))))));
                }
            } 
        } 
    } 
}
