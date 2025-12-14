/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42213
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_1 + 2])) ? (arr_4 [i_0 + 1] [i_0 + 1] [i_1 + 4]) : (arr_4 [i_0 + 1] [i_0 + 1] [i_1 + 1])));
            arr_7 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39031)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39031))) : (139611588448485376ULL)));
        }
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_2 [i_0] [i_2])), (((((/* implicit */unsigned int) var_8)) + (((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_2])) ? (((/* implicit */unsigned int) -1162413592)) : (4160749568U)))))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(134217728U)))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_2] [i_2]))))))) : (min((((arr_4 [i_2] [i_0] [i_0]) + (((/* implicit */unsigned long long int) 4160749568U)))), (min((139611588448485376ULL), (((/* implicit */unsigned long long int) arr_10 [i_2]))))))));
        }
        /* LoopSeq 3 */
        for (unsigned char i_3 = 1; i_3 < 13; i_3 += 3) 
        {
            var_22 += ((/* implicit */unsigned long long int) (-(var_0)));
            arr_14 [i_0] [i_3] [i_3] = ((/* implicit */unsigned long long int) (_Bool)1);
            arr_15 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_3 [i_0 + 1] [i_3 - 1]) ? (139611588448485353ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_3 - 1])))))) ? (max((17353507040798026796ULL), (10875238391951246991ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))));
        }
        for (int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            arr_18 [i_0] [i_4] = ((/* implicit */int) (+((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (134217728U)))));
            arr_19 [i_0] [i_4] = ((/* implicit */unsigned int) (((_Bool)0) && (((/* implicit */_Bool) (unsigned short)56479))));
        }
        for (int i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            arr_22 [i_5] = ((/* implicit */unsigned short) max((var_1), (((/* implicit */unsigned char) (_Bool)1))));
            var_23 &= ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_5])) ? (-288747523) : (var_11))))))));
            var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? ((+(((/* implicit */int) (unsigned short)65534)))) : (((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5])) ? (((/* implicit */int) (unsigned short)65502)) : (((/* implicit */int) arr_5 [i_0] [i_5])))))) >> (((max((((/* implicit */unsigned long long int) ((_Bool) arr_11 [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_5] [i_0]))) : (var_3))))) - (18446744073709551514ULL)))));
        }
    }
    for (signed char i_6 = 1; i_6 < 24; i_6 += 4) 
    {
        arr_26 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64145)) ? (((/* implicit */int) (unsigned short)39)) : (1162413563)))) || (((/* implicit */_Bool) (((~(var_8))) ^ (((/* implicit */int) arr_25 [i_6 + 1] [i_6 + 1])))))));
        /* LoopNest 2 */
        for (signed char i_7 = 2; i_7 < 24; i_7 += 1) 
        {
            for (unsigned int i_8 = 1; i_8 < 24; i_8 += 4) 
            {
                {
                    arr_31 [i_7] [i_7] [i_7] [i_8] = ((/* implicit */unsigned short) arr_24 [i_8]);
                    var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4ULL)) ? (((arr_23 [i_8 + 1]) ^ (arr_23 [i_7 - 1]))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_3)))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) == (arr_29 [i_8] [i_7] [i_6]))))))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_29 [i_6] [i_6] [i_6 - 1])) ? (arr_29 [i_6] [i_6] [i_6 - 1]) : (arr_29 [i_6] [i_6] [i_6 - 1]))))))));
    }
    for (int i_9 = 0; i_9 < 14; i_9 += 2) 
    {
        var_27 += ((/* implicit */unsigned int) 1162413592);
        var_28 = ((/* implicit */int) arr_11 [i_9] [i_9] [i_9]);
    }
    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((var_8) + (((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */int) (unsigned short)39031)) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || ((_Bool)1)))))))))));
}
