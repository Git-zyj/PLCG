/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195200
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_1)), (arr_4 [i_2] [3U] [i_0])));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        arr_12 [i_1] [0ULL] [i_1] [i_1] = ((/* implicit */unsigned int) (!((_Bool)0)));
                        arr_13 [i_0] [i_1] [i_2] [i_1] [(unsigned short)12] = ((/* implicit */int) var_1);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_18 [i_2] [i_1] = ((/* implicit */unsigned char) max((min((arr_1 [i_0 - 2] [i_0 - 2]), (arr_1 [i_0 + 1] [(short)1]))), (arr_1 [i_0 - 1] [1])));
                        arr_19 [3] [i_1] [i_1] [3] = ((/* implicit */short) (unsigned char)250);
                        arr_20 [i_0] [i_2] [i_1] = arr_6 [i_0] [(signed char)1] [(signed char)1] [i_0];
                        arr_21 [i_0] [i_1] [i_2] [i_4] [i_1] = ((/* implicit */signed char) arr_14 [i_0] [i_1] [i_2] [i_4] [(_Bool)1]);
                    }
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_26 [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_23 [i_5])), (arr_24 [i_5])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))) : (min((2048U), (4294965248U)))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                {
                    arr_32 [11ULL] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_24 [i_5])) ? (arr_24 [i_7]) : (var_7))) / (max((((/* implicit */int) (_Bool)0)), (arr_24 [i_5])))));
                    arr_33 [(unsigned char)4] [i_6] [(unsigned char)4] [i_6] = ((/* implicit */_Bool) 1312873223U);
                    arr_34 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((short) max((var_2), (((/* implicit */unsigned int) (unsigned short)14502)))));
                }
            } 
        } 
        arr_35 [i_5] = ((/* implicit */short) max((((/* implicit */int) arr_22 [i_5] [i_5])), (((((/* implicit */_Bool) 769986638)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)189)), (var_0)))) : (((/* implicit */int) min(((unsigned char)52), (((/* implicit */unsigned char) (_Bool)1)))))))));
        arr_36 [i_5] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) max((((/* implicit */short) (unsigned char)52)), ((short)15543))))));
    }
    var_12 = ((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */short) var_1)), ((short)-6549))))));
}
