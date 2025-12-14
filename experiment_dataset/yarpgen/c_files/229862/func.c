/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229862
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
    var_20 = (signed char)96;
    var_21 ^= ((/* implicit */unsigned short) var_11);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((arr_2 [i_0] [i_0]) > (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) / (arr_6 [i_0] [i_1] [i_2])))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 2; i_3 < 13; i_3 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1 + 1] [i_1 - 1] [i_2] [i_3] [i_3]))))) == (arr_6 [i_0 + 1] [i_1 - 1] [i_3 - 2])));
                        arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 690478519U)) && (arr_11 [12] [i_0] [i_2] [12LL]))) ? (((unsigned int) var_5)) : (var_2)));
                    }
                    for (unsigned short i_4 = 2; i_4 < 13; i_4 += 1) /* same iter space */
                    {
                        var_23 = (-(max((-4657479248253476534LL), (((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) var_4))))))));
                        var_24 = var_13;
                    }
                    for (unsigned short i_5 = 2; i_5 < 13; i_5 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned short) ((int) 2878776645U));
                        var_26 += ((/* implicit */unsigned short) arr_7 [i_5 - 2] [(_Bool)1] [i_1] [i_0]);
                        var_27 = ((/* implicit */unsigned char) -1LL);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 13; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                var_28 = min((min((((/* implicit */int) var_14)), ((+(var_15))))), ((-(((/* implicit */int) ((short) arr_14 [i_0 + 1] [i_0] [i_1] [i_0] [i_6 - 1] [i_7]))))));
                                var_29 = ((/* implicit */unsigned int) var_13);
                                var_30 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)56189)) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) (unsigned short)12761))));
                                arr_24 [2LL] |= ((/* implicit */unsigned short) arr_21 [i_0 - 1] [i_7 + 1] [i_2] [i_6 + 1] [i_7 + 1]);
                            }
                        } 
                    } 
                    arr_25 [i_0] [i_1 + 1] [i_0] = ((/* implicit */signed char) (+(var_17)));
                    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((-7241046858693001574LL) | (5058590776495879822LL))))));
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */long long int) var_13);
    /* LoopNest 3 */
    for (unsigned int i_8 = 2; i_8 < 12; i_8 += 4) 
    {
        for (unsigned char i_9 = 1; i_9 < 11; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                {
                    var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) (-(((/* implicit */int) (_Bool)1))))))));
                    arr_35 [i_9] [i_9] = ((-8059080250477824549LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                    var_34 |= ((((/* implicit */_Bool) ((int) (signed char)59))) ? ((+(((/* implicit */int) arr_0 [i_8 - 1])))) : ((-((-(((/* implicit */int) arr_29 [i_8 - 2])))))));
                    var_35 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_6 [i_9] [i_9] [i_10])))) ? (((/* implicit */int) arr_31 [i_8] [i_9] [i_8])) : ((+(arr_34 [i_8] [i_10] [i_10] [i_9])))))) ? ((-(2372249438U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) arr_18 [5LL] [i_9] [2] [i_10] [i_10] [i_9]))))))));
                    var_36 = ((/* implicit */int) arr_20 [i_8] [i_8] [i_9 + 1] [i_9] [i_10]);
                }
            } 
        } 
    } 
}
