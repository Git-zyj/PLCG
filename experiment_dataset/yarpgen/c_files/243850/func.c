/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243850
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */int) ((long long int) 3372549317456209265ULL));
                var_13 = ((/* implicit */_Bool) max(((+(((long long int) arr_2 [i_0] [i_1] [i_1])))), (arr_2 [i_1 + 1] [9U] [i_0])));
                arr_5 [i_1] [i_1] [(unsigned short)9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [i_1] [i_1 + 1] [i_1]), (((/* implicit */long long int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (15074194756253342322ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((((/* implicit */_Bool) 13468485163866264229ULL)) ? (var_0) : (((/* implicit */int) var_2)))) : ((-(((/* implicit */int) var_6))))))) : ((+(arr_0 [i_0])))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))) / (((/* implicit */int) (unsigned short)11)))), (((arr_9 [i_1] [i_1] [i_0] [i_1]) - (((/* implicit */int) (_Bool)1))))));
                    arr_10 [i_1] [i_1] [i_1] [i_0] = arr_1 [i_2];
                    arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_0])))))));
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((4212266434U) != (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_6 [i_1]))))))))) : (131071LL)));
                }
                for (long long int i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
                {
                    var_16 &= min((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))), (var_9));
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (~(3372549317456209292ULL))))));
                    arr_15 [(unsigned char)9] [i_1] [i_3] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) (short)3503)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_4))))));
                }
                for (long long int i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
                {
                    arr_19 [i_1] [i_1] [i_1] [(_Bool)0] = ((unsigned char) ((((/* implicit */_Bool) (-(180148880)))) ? (((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) var_3))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 3; i_5 < 14; i_5 += 3) 
                    {
                        arr_24 [i_5] [i_1] [i_0] = (_Bool)0;
                        var_18 = ((/* implicit */long long int) max((var_18), ((-(arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
                        arr_25 [i_0] [i_1] [(unsigned char)10] = ((/* implicit */short) arr_18 [11ULL] [i_1] [i_5]);
                        var_19 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_9 [i_5 - 1] [i_1 + 1] [i_4] [i_1])) ? (arr_14 [i_1 + 1] [i_5] [i_5 + 2] [i_5]) : (arr_14 [i_1 + 1] [i_1 + 1] [i_5 + 2] [i_1 + 1]))), (((/* implicit */long long int) ((arr_9 [i_5 - 1] [i_1 + 1] [i_4] [i_1]) - (arr_9 [i_5 - 2] [i_1 + 1] [i_5 - 2] [i_1]))))));
                    }
                }
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((((/* implicit */short) max((arr_17 [i_1 + 1] [i_1] [(_Bool)1]), (arr_17 [i_1 + 1] [i_1] [i_1 + 1])))), (max((arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]), (((/* implicit */short) arr_17 [i_1 + 1] [i_1 + 1] [(short)2])))))))));
            }
        } 
    } 
    var_21 |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))));
    var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) max((var_3), (var_5))))))) ? (13468485163866264227ULL) : (((/* implicit */unsigned long long int) (-(var_12))))));
    var_24 = ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_7))))))) : (var_0));
}
