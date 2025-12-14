/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40267
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
    var_15 = ((/* implicit */long long int) min((var_0), (var_8)));
    var_16 = ((/* implicit */unsigned long long int) ((-1995128689) >= (1995128688)));
    var_17 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) >= (((((/* implicit */_Bool) max((-7036142473786710253LL), (((/* implicit */long long int) var_5))))) ? (((var_13) >> (((-1995128689) + (1995128750))))) : (((/* implicit */long long int) var_7))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_1)) >> (((arr_3 [i_1 + 1] [15ULL]) - (1636165914))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1 + 3])) || (((/* implicit */_Bool) arr_3 [i_1 + 3] [i_1 + 2]))))))))));
                    arr_6 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (1995128700)))) ? (4131001994U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4051682103U)) ? (((/* implicit */int) (_Bool)1)) : (-2087490027))))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_4))));
                    arr_9 [i_1] [14LL] = ((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_1 + 1] [i_1])) == (((/* implicit */int) arr_1 [i_1 - 1]))));
                }
                /* LoopSeq 2 */
                for (signed char i_4 = 2; i_4 < 18; i_4 += 3) 
                {
                    var_20 = ((/* implicit */long long int) max((max((arr_3 [i_0] [i_1 - 1]), (((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_1 + 1] [i_0])))), (max((((/* implicit */int) (_Bool)1)), (1995128679)))));
                    var_21 -= ((/* implicit */long long int) min((max((1995128710), (((/* implicit */int) arr_12 [(unsigned short)4] [i_1 + 1] [i_4])))), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 + 1])))))));
                }
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    var_22 = ((/* implicit */int) ((min((arr_14 [i_1 - 1] [i_1 - 1] [i_5 + 1]), (arr_14 [i_1 + 1] [i_1 - 1] [i_5 + 1]))) << (((((((/* implicit */int) arr_8 [i_1 + 3] [i_5 + 1] [i_5 + 1] [i_5 + 1])) ^ (((/* implicit */int) var_11)))) - (5734)))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        for (long long int i_7 = 1; i_7 < 17; i_7 += 2) 
                        {
                            {
                                arr_21 [i_7] [i_1] [i_7] [i_7 - 1] [i_7] = ((/* implicit */unsigned short) ((((1995128688) ^ (830913837))) & ((((_Bool)0) ? (((/* implicit */int) (short)-28291)) : (746520513)))));
                                var_23 -= ((((((((/* implicit */int) min(((short)-599), (((/* implicit */short) var_5))))) + (2147483647))) << (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_13))) - (46LL))))) & (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_7])) ? (((/* implicit */long long int) arr_11 [i_0] [i_1] [i_5] [i_6])) : (5527640452559382166LL)))) || (((/* implicit */_Bool) max((419999026), (-1995128678))))))));
                                arr_22 [i_1] [i_1] [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-85)), (-419999026)))), (((((/* implicit */_Bool) var_14)) ? (arr_14 [i_7] [i_5] [i_1]) : (((/* implicit */unsigned int) -419999027))))));
                                arr_23 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_1] = ((/* implicit */unsigned short) (((((_Bool)1) ? (9523975078030570690ULL) : (((/* implicit */unsigned long long int) 5876669220461903121LL)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */int) max((((/* implicit */unsigned int) ((arr_12 [i_1] [i_5 + 1] [i_5 + 1]) ? (((/* implicit */int) (unsigned short)57127)) : (((/* implicit */int) min(((signed char)62), (((/* implicit */signed char) (_Bool)1)))))))), (min((((/* implicit */unsigned int) max((arr_18 [i_0] [i_0]), (1308408508)))), (var_14)))));
                }
                var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_13 [i_1] [i_1 + 3] [i_1 + 1] [i_1 + 1])), (-3832088303210291117LL)))) ? (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)168)) >> (((arr_20 [i_1]) - (288756840025050261LL)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-2805120192916887993LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-9)))))) ? (((/* implicit */int) var_2)) : (min((arr_18 [i_1] [i_1]), (((/* implicit */int) var_0)))))))));
                arr_25 [i_1] = ((/* implicit */unsigned long long int) max((((((((/* implicit */long long int) ((/* implicit */int) var_8))) >= (var_12))) ? (243285169U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) (short)-24064))))))), (((/* implicit */unsigned int) min((arr_16 [i_1] [10ULL] [i_1 + 3] [i_1]), (((((/* implicit */_Bool) -928469269)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(_Bool)1])) : (((/* implicit */int) (signed char)121)))))))));
            }
        } 
    } 
}
