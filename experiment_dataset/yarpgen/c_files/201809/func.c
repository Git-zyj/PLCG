/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201809
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
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_17 = (short)-3;
        arr_2 [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */int) var_16)) * (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55712))) : (arr_1 [i_0] [i_0]))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_4))))))))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_3)) : (arr_0 [i_0 + 1])))) > (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0 + 2] [i_0]) : (var_13)))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) 61440)) ? (((/* implicit */int) (unsigned short)9824)) : (((/* implicit */int) (unsigned short)9823))))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 3; i_2 < 24; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                for (long long int i_4 = 2; i_4 < 23; i_4 += 2) 
                {
                    {
                        var_20 = ((/* implicit */long long int) (((((_Bool)1) ? (11739294367282392167ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_3])))))))) < (((/* implicit */unsigned long long int) (+(min((var_10), (((/* implicit */int) arr_9 [i_1] [i_2 - 1] [i_3])))))))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)239)) << (((((/* implicit */int) (short)13207)) - (13203)))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
    {
        arr_15 [i_5] [i_5] = ((/* implicit */_Bool) 15U);
        var_22 = ((/* implicit */long long int) (((((+(11739294367282392154ULL))) / (((((/* implicit */_Bool) 6707449706427159449ULL)) ? (arr_6 [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) >> ((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)98))) > (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))))));
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), ((((+(11739294367282392165ULL))) / (((/* implicit */unsigned long long int) arr_4 [i_5]))))));
                    arr_21 [i_7] [i_6] [i_5] [i_5] = ((((/* implicit */_Bool) 1116094516)) ? (11739294367282392174ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                    var_24 = var_15;
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) 0ULL))));
    var_26 *= ((/* implicit */short) var_10);
}
