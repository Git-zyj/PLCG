/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223498
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
    var_16 = ((/* implicit */short) (signed char)60);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) min((var_4), (((_Bool) var_10))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 2; i_4 < 22; i_4 += 2) 
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3 + 2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 13830958989497724210ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (4615785084211827396ULL)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)41647)) < ((-(((/* implicit */int) (short)11820))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_3 + 1] [i_4])) : (((/* implicit */int) arr_3 [i_2] [i_3] [i_4 - 1]))))) ? (((/* implicit */int) max((((/* implicit */short) arr_5 [(short)5] [i_0])), (arr_1 [(unsigned char)4] [(unsigned char)17])))) : (((/* implicit */int) (_Bool)0))))));
                                arr_14 [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_3 - 1] [(unsigned char)14] [i_4])) / (((/* implicit */int) arr_11 [i_4] [i_1] [i_3 + 3] [i_3 + 3] [19]))))) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((((/* implicit */int) ((signed char) var_4))) - (((/* implicit */int) arr_9 [i_1] [i_1 + 2] [i_3 - 1] [i_3] [i_3]))))));
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */_Bool) 759413345U)) && (((/* implicit */_Bool) var_3)))))))) ? (((((/* implicit */_Bool) ((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [22ULL]))) : (arr_0 [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3138196506U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((3714395349U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49442))))))))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_7 [i_3 + 1] [i_3])), ((unsigned short)44132)))) && (((/* implicit */_Bool) max((arr_7 [i_3 - 2] [i_3]), (((/* implicit */short) arr_3 [i_1 + 1] [i_3 + 1] [i_4 - 2])))))));
                            }
                            var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_12 [i_3] [i_1 - 2] [i_2] [i_3] [i_1] [(unsigned short)9])), (min((((/* implicit */int) arr_5 [i_1] [i_0])), (((arr_8 [i_0] [i_1] [i_2] [i_3]) ? (((/* implicit */int) arr_3 [i_0] [i_2] [i_3])) : (((/* implicit */int) arr_9 [(_Bool)1] [i_0 - 2] [i_1 + 2] [i_2] [i_3]))))))));
                        }
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-3128)), (var_6)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_4)))))))) : (3942965043U)));
                arr_16 [i_0] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [21LL] [i_0]);
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) var_10)), (((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */unsigned int) -1807521828)))))), (((/* implicit */unsigned int) (unsigned char)255))));
}
