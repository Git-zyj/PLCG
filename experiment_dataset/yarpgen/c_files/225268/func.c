/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225268
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        arr_3 [15U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) 11823811931986677593ULL)) ? (((/* implicit */unsigned int) arr_2 [i_0])) : (arr_1 [i_0]))))) : (max((arr_2 [3U]), (((2147483647) + (arr_2 [21])))))));
        var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0] [(unsigned short)22])), (arr_2 [i_0]))))));
        var_14 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) << (((((unsigned int) arr_1 [18ULL])) - (2000000838U))));
        arr_4 [(unsigned char)12] = ((/* implicit */int) (-(((((/* implicit */_Bool) ((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)124)))))) ? (min((arr_1 [i_0]), (((/* implicit */unsigned int) 2147483647)))) : (((/* implicit */unsigned int) ((/* implicit */int) (((-2147483647 - 1)) < (-2147483642)))))))));
        var_15 -= ((/* implicit */unsigned short) ((int) (+(((/* implicit */int) arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [18] = ((/* implicit */unsigned char) arr_0 [i_1] [i_1]);
        arr_8 [i_1] = ((/* implicit */_Bool) arr_5 [i_1] [(unsigned short)9]);
    }
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        var_16 &= ((/* implicit */unsigned long long int) var_0);
        arr_12 [i_2] = ((/* implicit */_Bool) 3974593844U);
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    {
                        var_17 -= ((((((/* implicit */_Bool) arr_18 [i_2] [(short)6] [i_4] [2U])) ? (arr_1 [i_4]) : (arr_1 [i_4]))) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_2] [i_2] [10ULL] [10])) >> (((2170415754U) - (2170415751U)))))));
                        var_18 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42732))) * ((-(2124551549U))))) == (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) (signed char)113)) : (arr_6 [i_4] [i_5]))))))));
                        arr_21 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */int) (((+(1618092292377548372ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483617)) ? (arr_10 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 1520389950)))))))));
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [(unsigned char)0])) ? (((/* implicit */unsigned long long int) min((arr_14 [i_5] [1U]), (((((/* implicit */int) arr_16 [0ULL] [i_3] [0ULL] [i_5])) | (((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 648347098U)) ? (arr_11 [(_Bool)1]) : (var_0)))) ? (min((arr_9 [i_4] [i_4]), (((/* implicit */unsigned long long int) var_3)))) : (min((arr_9 [i_2] [i_3]), (((/* implicit */unsigned long long int) arr_0 [i_3] [i_4])))))))))));
                    }
                } 
            } 
        } 
        var_20 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_10 [(_Bool)0] [(_Bool)0])))) | (max((max((((/* implicit */unsigned long long int) var_4)), (arr_20 [i_2] [2U] [i_2] [2U] [4]))), (arr_20 [i_2] [4] [8] [i_2] [4U])))));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((arr_19 [i_2] [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) < (((((/* implicit */_Bool) arr_19 [i_2] [i_2])) ? (arr_19 [i_2] [i_2]) : (arr_19 [i_2] [i_2]))))))));
    }
    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
    {
        var_22 ^= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (+(6477627597021491123ULL)))) ? ((+(arr_6 [i_6] [i_6]))) : ((-(var_0))))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_6] [i_6])) <= (arr_5 [0ULL] [i_6]))) ? (arr_1 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_6] [i_6])) != (var_2)))))))) ? (11969116476688060477ULL) : (((/* implicit */unsigned long long int) (+(arr_5 [i_6] [i_6]))))));
        arr_24 [i_6] = ((/* implicit */_Bool) min((((arr_6 [i_6] [(unsigned char)16]) % (arr_6 [i_6] [i_6]))), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_6] [i_6])) >= (((/* implicit */int) arr_0 [i_6] [i_6])))))));
    }
    var_24 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (max((((/* implicit */unsigned int) (unsigned short)65535)), (var_5)))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (16448153882585651672ULL)))) ? ((+(((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) 2726201063151666272ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) var_10)));
}
