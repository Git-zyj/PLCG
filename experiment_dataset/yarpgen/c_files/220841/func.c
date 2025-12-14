/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220841
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
    var_13 &= ((/* implicit */unsigned long long int) ((unsigned short) min((var_5), (((var_8) * (((/* implicit */unsigned long long int) var_9)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))));
        arr_4 [i_0] [i_0] = (+(((/* implicit */int) arr_1 [i_0])));
    }
    for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_7 [i_1 - 2] [i_1 + 1]))))));
        var_16 += ((/* implicit */int) (!(((/* implicit */_Bool) (((-(arr_5 [i_1 + 1] [i_1]))) | (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))))));
        /* LoopSeq 4 */
        for (signed char i_2 = 2; i_2 < 18; i_2 += 2) 
        {
            arr_12 [i_2 - 2] = ((/* implicit */long long int) arr_2 [(unsigned char)3]);
            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (-(15U)))) ? ((+(arr_11 [i_2 - 2] [i_2 - 2]))) : (((/* implicit */long long int) ((4294967280U) * (4294967295U))))));
        }
        for (unsigned char i_3 = 2; i_3 < 15; i_3 += 2) /* same iter space */
        {
            arr_16 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_13 [i_1 + 1] [i_3 + 1] [i_1 + 1])))) | (((((/* implicit */unsigned long long int) arr_8 [i_1 + 1])) * (arr_13 [i_1] [i_3 + 1] [i_3])))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 2) 
                {
                    {
                        arr_23 [i_1] [i_1] [(signed char)17] [i_5] [(signed char)17] [(short)16] &= ((/* implicit */unsigned long long int) (!(((15U) == (7U)))));
                        var_18 = ((/* implicit */int) ((signed char) (+(max((((/* implicit */unsigned long long int) arr_20 [i_4])), (arr_13 [i_1] [i_1] [i_1]))))));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1 - 1] [i_1])) && ((!(((/* implicit */_Bool) arr_6 [i_3 - 2])))))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    for (signed char i_8 = 2; i_8 < 18; i_8 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) max((var_20), (arr_0 [i_1 - 2])));
                            arr_30 [i_1] [i_3] [i_6 - 1] [i_7] [i_3] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_7 [i_1 - 2] [i_6 + 1])))) - (((/* implicit */int) arr_6 [i_7]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_9 = 2; i_9 < 15; i_9 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) arr_13 [11ULL] [i_9] [i_9]);
            var_22 = ((/* implicit */_Bool) min((((arr_24 [i_1 - 2] [i_1 - 1] [i_9 + 2] [i_9 - 2]) ^ (arr_24 [i_1] [i_1 - 2] [i_9 + 2] [i_9 - 1]))), (((/* implicit */long long int) ((signed char) arr_24 [i_1 - 1] [i_1 - 2] [i_9 - 1] [i_9 - 2])))));
        }
        for (unsigned char i_10 = 2; i_10 < 15; i_10 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) arr_10 [i_10 + 3] [i_10 + 4] [i_10 + 4])))), ((!(((/* implicit */_Bool) -2108129708))))));
            var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_38 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_1 + 1]))))))))) | (((/* implicit */int) ((unsigned short) arr_21 [i_1] [i_1 - 2] [i_1] [i_1 + 1])))))));
        }
    }
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)1515)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))) == (4294967295U))))));
    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (+((+(var_5))))))));
    var_27 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)42095))));
}
