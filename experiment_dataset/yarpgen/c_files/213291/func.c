/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213291
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
    var_18 = ((min((((/* implicit */long long int) (((_Bool)1) ? (1233255297) : (-1233255283)))), (((((/* implicit */long long int) 1233255297)) - (-3731457438485591509LL))))) / ((-(min((var_10), (((/* implicit */long long int) var_14)))))));
    var_19 = max((((/* implicit */int) ((unsigned short) min((var_0), (((/* implicit */unsigned int) var_15)))))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_17)))));
    var_20 = ((/* implicit */unsigned short) var_5);
    var_21 = ((/* implicit */int) max((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_14)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_22 = (-(arr_6 [i_0] [i_0] [i_2] [i_2]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) arr_4 [i_3] [i_3]);
                                var_24 |= ((/* implicit */short) arr_3 [i_3] [i_0]);
                                arr_16 [i_0] [i_2] [8U] [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (+(arr_5 [6] [(signed char)11])));
                                var_25 = ((/* implicit */_Bool) ((long long int) arr_7 [i_0]));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned char) var_0);
                    var_27 = ((/* implicit */int) var_11);
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
                {
                    arr_20 [(short)10] = ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0]);
                    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (arr_6 [14ULL] [i_1] [i_0] [i_1]) : (arr_6 [i_0] [0] [i_0] [0])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_28 [i_0] [i_0] [i_5] [i_6] [17LL] = ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_6]))) - (var_10));
                                var_29 &= ((/* implicit */_Bool) (-(var_2)));
                            }
                        } 
                    } 
                }
                for (long long int i_8 = 0; i_8 < 23; i_8 += 1) /* same iter space */
                {
                    var_30 = ((/* implicit */short) ((signed char) ((int) arr_8 [i_8] [i_1] [i_8])));
                    var_31 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [(signed char)9] [i_0])), (((((/* implicit */_Bool) -1233255278)) ? (1462297071U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)45)))))))) ? (((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_14)))), ((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [(unsigned char)12] [i_1]))))))) : (max((max((((/* implicit */long long int) arr_4 [i_0] [i_1])), (arr_26 [(signed char)7] [i_8] [i_8] [(signed char)5] [(signed char)18]))), (((/* implicit */long long int) min((var_8), (((/* implicit */unsigned short) var_13)))))))));
                }
                var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((short) ((((/* implicit */int) max((var_13), (((/* implicit */signed char) arr_11 [i_0] [i_0] [i_0] [i_0]))))) / (((/* implicit */int) arr_2 [i_1]))))))));
            }
        } 
    } 
}
