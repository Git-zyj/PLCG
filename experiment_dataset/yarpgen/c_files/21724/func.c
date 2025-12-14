/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21724
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */_Bool) (-((+(((((/* implicit */_Bool) 6955274669947886758ULL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_5 [i_1] [i_1]))))))));
            var_17 &= ((/* implicit */short) ((((/* implicit */_Bool) (short)23)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (11491469403761664867ULL)));
            var_18 = ((/* implicit */short) max((((/* implicit */unsigned int) max((arr_2 [i_0 - 2]), (arr_2 [i_0 + 1])))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0]))) - ((+(2555021219U)))))));
        }
        for (unsigned short i_2 = 4; i_2 < 10; i_2 += 2) 
        {
            arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */long long int) var_1)) + (((((/* implicit */_Bool) arr_4 [9])) ? (((/* implicit */long long int) arr_1 [i_2])) : (var_12)))))));
            var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 2869382522U)) || (((/* implicit */_Bool) arr_7 [i_2])))) ? (((/* implicit */unsigned long long int) 65535)) : ((-(arr_0 [i_2 - 1])))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    arr_13 [i_4] [i_4] [i_4] [(_Bool)1] = ((/* implicit */short) max((((/* implicit */long long int) arr_3 [i_3] [1U] [4U])), (var_12)));
                    var_20 = ((/* implicit */unsigned short) var_9);
                    var_21 = ((/* implicit */unsigned int) arr_11 [i_0 - 1] [i_0 + 1]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            for (unsigned short i_6 = 2; i_6 < 9; i_6 += 2) 
            {
                {
                    var_22 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (short)-23))))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((unsigned long long int) var_14))))) >= ((~(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-90))) & (var_1)))))));
                    arr_19 [i_0] [(short)5] [i_6 - 1] &= ((short) (-(arr_18 [i_0 + 1] [i_5] [i_6])));
                    var_24 = ((/* implicit */signed char) var_7);
                    var_25 = ((/* implicit */short) min(((~(min((((/* implicit */long long int) arr_3 [i_0] [i_5] [i_6 + 2])), (var_12))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (arr_6 [i_0])))) && ((!(((/* implicit */_Bool) arr_12 [i_5])))))))));
                }
            } 
        } 
        arr_20 [1ULL] = ((/* implicit */signed char) arr_11 [i_0] [i_0 - 1]);
        var_26 = ((/* implicit */long long int) var_11);
    }
    for (unsigned short i_7 = 3; i_7 < 10; i_7 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_12)) : (var_15))) * (((/* implicit */unsigned long long int) (-(arr_17 [i_7] [i_7 + 1] [i_7 - 2] [i_7]))))))));
        arr_24 [i_7] = ((/* implicit */long long int) arr_21 [i_7] [i_7 - 3]);
    }
    for (unsigned short i_8 = 3; i_8 < 10; i_8 += 2) /* same iter space */
    {
        arr_28 [i_8] = ((/* implicit */unsigned short) arr_1 [i_8]);
        var_28 = ((/* implicit */unsigned int) arr_10 [i_8]);
    }
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) 
    {
        for (short i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            for (long long int i_11 = 4; i_11 < 13; i_11 += 2) 
            {
                {
                    var_29 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_35 [i_11 - 1] [i_11 + 2] [i_11 - 3] [i_11 + 2])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_11 + 2] [i_11 - 2] [i_11 - 2] [i_11 - 4])))))));
                    var_30 = ((/* implicit */short) arr_30 [(_Bool)1]);
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */_Bool) ((unsigned int) (+(((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
}
