/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50356
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
    var_11 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (~(2160415523U)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) : (((unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)115)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned short) ((max((((/* implicit */int) (unsigned short)62777)), (1973148595))) / (((/* implicit */int) var_0))));
            var_13 ^= ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned int) max((arr_1 [i_0 - 3] [i_0 - 3]), (((/* implicit */int) ((signed char) arr_5 [i_0])))))) : (min((((/* implicit */unsigned int) var_9)), (var_4))));
        }
        for (int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            var_14 ^= ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) var_0)), (((var_1) - (((/* implicit */unsigned int) 40478447)))))), (var_10)));
            arr_9 [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_7 [i_2] [i_0])))), (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0])) <= (((/* implicit */int) arr_3 [(short)8])))))))) : (min(((-(var_4))), (var_10)))));
            arr_10 [i_0 - 1] [i_0 - 3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((arr_1 [i_0] [i_0]), (((/* implicit */int) arr_4 [(unsigned short)11] [i_2])))) < (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0])) >= (((/* implicit */int) var_3))))))))) == (min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2758))) < (var_4)))), (var_1)))));
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((3584U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2766))))))));
        }
        var_16 = ((/* implicit */signed char) min((((/* implicit */short) (unsigned char)11)), ((short)-10260)));
    }
    /* LoopSeq 1 */
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (int i_5 = 1; i_5 < 16; i_5 += 4) 
            {
                {
                    arr_21 [i_5] [i_5] = ((/* implicit */int) ((max((((/* implicit */long long int) ((arr_16 [i_3] [i_4]) ? (((/* implicit */int) (unsigned short)0)) : (arr_11 [i_3])))), (((((arr_19 [i_3] [i_3] [i_5] [i_3]) + (9223372036854775807LL))) << (((arr_15 [i_3] [i_5]) - (695024279))))))) & (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) 262128U);
                                var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((arr_20 [i_5] [i_5 - 1] [i_5] [i_5 + 1]) | (arr_20 [i_5] [i_5 + 2] [i_5 + 2] [i_5])))), (var_2)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_16 [i_3] [i_3])), (max((((/* implicit */int) (unsigned short)2780)), (260244833)))));
    }
    /* LoopNest 3 */
    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
    {
        for (long long int i_9 = 0; i_9 < 21; i_9 += 1) 
        {
            for (int i_10 = 2; i_10 < 18; i_10 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        arr_37 [i_8] [i_8] [i_8] [i_9] = max((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (short)10246)) ? (8860365491102542087ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2758))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_34 [i_9] [i_9] [i_9] [i_9])), (max((((/* implicit */long long int) var_5)), (arr_30 [i_9])))))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)10260))) ^ (((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) (short)21387)))))))) + (max((8363938098690990495ULL), (((/* implicit */unsigned long long int) (unsigned char)9))))));
                        var_21 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)62773)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_10 + 1] [i_10 + 1] [i_10 - 2] [i_10 - 2] [i_10 + 1] [i_10]))) : (108681551288885199ULL))), (max((((((/* implicit */_Bool) 6865921976256234578LL)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_33 [i_9] [i_9] [i_11]))), (((/* implicit */unsigned long long int) max((arr_29 [14]), (((/* implicit */int) (short)27885)))))))));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) arr_33 [i_9] [i_10 - 1] [i_10 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)38))) : (arr_33 [i_9] [i_10 - 1] [i_10 + 1]))))))));
                        arr_38 [i_9] [i_9] = ((/* implicit */long long int) ((signed char) 2147483647));
                    }
                    var_23 = ((/* implicit */unsigned long long int) arr_36 [i_8] [4LL] [i_8] [i_8] [i_8] [i_8]);
                }
            } 
        } 
    } 
}
