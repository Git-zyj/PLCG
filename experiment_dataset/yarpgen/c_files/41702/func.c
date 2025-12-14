/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41702
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_4 [i_0] = (~(((/* implicit */int) arr_0 [i_0] [i_0])));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) var_3))))));
        var_17 = ((/* implicit */unsigned short) (((_Bool)1) ? (((arr_3 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
    }
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            for (int i_3 = 4; i_3 < 23; i_3 += 3) 
            {
                {
                    arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((unsigned int) arr_6 [i_2])) + (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1]))) : (((long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
                    var_18 -= ((/* implicit */unsigned int) var_3);
                    /* LoopNest 2 */
                    for (signed char i_4 = 3; i_4 < 23; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (_Bool)1))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_1] [i_2] [i_2] [i_4 - 2] [i_4 - 3] [i_5]))))) ? (((/* implicit */int) arr_17 [i_1] [i_2] [i_3] [i_4 - 1] [i_5] [i_5])) : (((/* implicit */int) ((unsigned char) arr_17 [i_1] [i_2] [i_2] [i_3] [i_2] [i_5])))));
                                arr_18 [i_1] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_7 [i_2]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) max((arr_16 [i_5] [i_3] [i_3] [i_2]), (((/* implicit */unsigned char) var_13))))), (((unsigned short) arr_15 [i_1] [i_2] [i_1] [i_4 - 1] [i_2])))))) : (max((var_7), (min((((/* implicit */unsigned long long int) arr_10 [i_5])), (var_7)))))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_16 [i_1] [i_2] [i_4 - 3] [i_5]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_19 [(unsigned char)1] = ((/* implicit */unsigned long long int) (_Bool)0);
        arr_20 [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [12U])) ? (((/* implicit */int) arr_14 [10ULL])) : (((/* implicit */int) (short)-1))))) : (arr_11 [i_1] [i_1] [0LL] [i_1])));
        /* LoopNest 2 */
        for (unsigned int i_6 = 2; i_6 < 22; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                {
                    var_22 |= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) arr_10 [i_7]))));
                    var_23 *= ((((((/* implicit */_Bool) ((unsigned int) arr_13 [i_1] [i_6] [i_6] [i_6] [i_6] [i_7]))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_23 [i_6 + 1] [i_6] [i_7]))))) : (((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7]))) : (arr_13 [(signed char)19] [i_1] [i_6] [i_6] [i_7] [i_7]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_16 [i_7] [i_6] [i_6] [i_1]), (arr_16 [i_1] [i_6] [i_7] [i_1]))))));
                }
            } 
        } 
        arr_25 [i_1] = ((/* implicit */unsigned char) (+(max((3133403891U), (((/* implicit */unsigned int) (_Bool)1))))));
    }
}
