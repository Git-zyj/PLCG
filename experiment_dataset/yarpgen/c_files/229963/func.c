/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229963
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
    var_15 = ((/* implicit */signed char) var_14);
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)6377)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6381))) : (-5161147934891575667LL)))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0 - 1]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_2]))))) ? (((((/* implicit */_Bool) (unsigned short)59158)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6370))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59158)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_5 [i_1] [i_2])) : (((/* implicit */int) (unsigned char)135))))) ? (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1] [i_2])) ? (((/* implicit */int) (unsigned short)59166)) : (((/* implicit */int) arr_4 [14] [i_1] [i_0])))) : (((/* implicit */int) arr_7 [i_0] [i_0])))))));
                    var_18 = ((/* implicit */unsigned short) min((min((arr_8 [i_0] [i_0 - 1] [i_0] [i_0 - 1]), (((/* implicit */unsigned long long int) arr_4 [i_2] [i_1] [i_0])))), (min((((/* implicit */unsigned long long int) (+(-990073393)))), (arr_8 [i_0 - 1] [i_1] [i_0 - 1] [i_1])))));
                }
            } 
        } 
        var_19 = ((/* implicit */long long int) ((int) ((int) -5161147934891575667LL)));
    }
    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            var_20 = (+(((/* implicit */int) ((unsigned short) arr_9 [i_3 + 1]))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                var_21 = ((/* implicit */signed char) (unsigned short)6377);
                arr_17 [i_3] [i_4] = ((/* implicit */unsigned short) ((_Bool) 1864682665));
            }
            for (int i_6 = 4; i_6 < 20; i_6 += 2) 
            {
                var_22 = ((_Bool) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (arr_12 [(signed char)11] [i_4] [i_6]) : (((/* implicit */int) arr_7 [i_6] [i_4])))));
                var_23 = ((/* implicit */long long int) ((((/* implicit */int) ((short) (-(((/* implicit */int) arr_5 [(short)17] [i_3])))))) + (((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-1)), (arr_12 [i_3 - 1] [i_3 - 1] [i_6])))) ? (((int) arr_11 [(unsigned short)2] [(unsigned short)2])) : (((/* implicit */int) ((unsigned short) (_Bool)1)))))));
                arr_20 [i_6] [i_3] = ((/* implicit */unsigned short) (_Bool)1);
                arr_21 [i_3] [i_4] [i_6 + 1] [i_6] = ((unsigned short) min((arr_16 [i_6 - 4] [i_4] [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_15 [i_6 - 3] [i_3 - 1]))));
            }
            arr_22 [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_18 [i_3 - 1] [i_3 + 1])) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)59174)) : (((/* implicit */int) var_7)))))))));
            var_24 = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
        }
        var_25 = ((/* implicit */signed char) (~((+(((var_6) ? (((/* implicit */int) arr_6 [i_3 + 1])) : (((/* implicit */int) (signed char)1))))))));
    }
    for (unsigned short i_7 = 1; i_7 < 20; i_7 += 2) /* same iter space */
    {
        var_26 = ((((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_7] [i_7])) || (arr_11 [i_7 + 1] [i_7])))) % (min((((/* implicit */int) arr_18 [i_7 - 1] [i_7 - 1])), (((((/* implicit */_Bool) 1073741823)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_7 [i_7] [i_7 - 1])))))));
        arr_25 [i_7] [i_7] = ((/* implicit */_Bool) arr_2 [i_7 - 1]);
    }
    /* vectorizable */
    for (unsigned short i_8 = 1; i_8 < 20; i_8 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 19; i_9 += 4) 
        {
            for (unsigned int i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (signed char i_12 = 0; i_12 < 21; i_12 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_37 [i_8])) ? (((/* implicit */unsigned long long int) arr_12 [i_8] [i_9] [i_11])) : (var_4)))));
                                var_28 = ((/* implicit */unsigned long long int) (+((+(arr_12 [i_8] [i_9] [i_8])))));
                                arr_43 [i_12] [i_8] [i_10] [i_8] [i_8] = ((signed char) arr_42 [i_8] [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8] [i_8 + 1]);
                                var_29 = ((/* implicit */unsigned long long int) ((int) arr_36 [i_9 + 2] [i_9] [i_8] [i_11] [i_9 + 2] [i_12]));
                                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_8 + 1])) ? (((/* implicit */int) arr_40 [i_8 + 1] [i_9 + 2] [i_11] [i_11] [i_11])) : (((/* implicit */int) (unsigned short)59189))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned short) 1099511627775ULL)));
                }
            } 
        } 
        arr_44 [i_8] = ((/* implicit */unsigned long long int) ((unsigned char) arr_42 [i_8 + 1] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]));
    }
}
