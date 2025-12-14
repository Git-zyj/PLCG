/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244340
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_10 += ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) arr_0 [i_0] [(unsigned char)16])) << (((((/* implicit */int) arr_2 [22U])) + (136))))));
        var_11 = max(((~(((arr_0 [i_0] [i_0]) ? (var_5) : (((/* implicit */int) arr_1 [i_0])))))), (((/* implicit */int) (unsigned short)3)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */_Bool) min((((268435440U) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-116))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_5 [i_1 - 1])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_5 [i_1])))))))));
                    var_13 = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_2 [i_0])))) - (((((/* implicit */_Bool) arr_8 [i_1] [i_0] [i_1 - 1])) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) arr_4 [i_0] [i_1]))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        var_14 &= ((/* implicit */_Bool) arr_11 [i_3] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_0]);
                        var_15 = ((/* implicit */unsigned int) (-(arr_7 [i_0] [i_1 + 1] [i_2] [i_3 - 1])));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)-19840)) : (((/* implicit */int) (signed char)-4))))) + (arr_7 [i_3 - 2] [i_1 - 1] [i_4] [i_3 + 1]))))));
                            arr_15 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) (~(arr_14 [i_3 - 1] [i_3 + 2] [i_1 - 1] [i_1 - 1] [i_1 + 1])));
                            arr_16 [i_4] [i_4] [i_4] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 914484505U)) ? (-1459351417) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_9 [i_1 + 1] [i_3 + 1] [i_0] [i_4] [i_4] [i_3])) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_4]))));
                            var_17 = ((/* implicit */unsigned long long int) (((_Bool)1) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (unsigned short)50601)) / (var_3)))));
                        }
                        for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)30469)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)19840))) : (715323171U)));
                            arr_19 [i_0] [i_1] [i_2] [i_3 + 2] [i_0] = ((/* implicit */unsigned int) min((min(((-(((/* implicit */int) var_9)))), (arr_10 [i_2] [i_3] [i_1] [i_3 + 2]))), (((/* implicit */int) arr_5 [i_2]))));
                        }
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? ((-(((/* implicit */int) (signed char)103)))) : (((/* implicit */int) arr_3 [i_0]))));
                    }
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((unsigned int) arr_12 [i_1] [i_0] [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1]))) ? ((~(arr_7 [i_2] [i_0] [i_0] [i_0]))) : ((+(arr_18 [i_2] [10ULL] [i_2] [i_0] [i_2])))))))));
                    var_21 = ((/* implicit */unsigned short) arr_5 [i_0]);
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */short) (_Bool)1)), (arr_4 [(_Bool)1] [i_0])))))));
    }
    /* vectorizable */
    for (signed char i_6 = 2; i_6 < 12; i_6 += 3) 
    {
        var_24 = ((arr_17 [i_6 + 1] [i_6] [i_6 + 1] [14] [i_6]) ? (2385941777U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [i_6] [i_6] [10] [i_6]))));
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_6] [i_6 + 1] [i_6] [i_6 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_6] [i_6 - 2] [i_6] [i_6 - 2] [i_6] [i_6]))) : (arr_21 [i_6] [i_6])))) ? (((unsigned int) (signed char)-103)) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_6 [i_6 + 2]))))));
    }
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-107))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) (signed char)87)) >= (((/* implicit */int) var_6)))))))) ? ((~(((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned int) var_5)))))) : (((((((/* implicit */int) (signed char)51)) <= (var_5))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_9)))) : (var_8)))));
    /* LoopNest 3 */
    for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
    {
        for (int i_8 = 0; i_8 < 13; i_8 += 1) 
        {
            for (int i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                {
                    var_27 = ((/* implicit */short) (+(min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_25 [i_9]))))), (arr_23 [i_8] [i_8])))));
                    var_28 = ((/* implicit */long long int) (-(((/* implicit */int) ((max(((_Bool)0), (arr_17 [i_9] [i_9] [i_9] [i_9] [i_7]))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_7] [i_8] [i_8]))))))))));
                }
            } 
        } 
    } 
}
