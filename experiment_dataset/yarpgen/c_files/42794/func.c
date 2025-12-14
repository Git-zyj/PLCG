/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42794
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) * ((+((-(((/* implicit */int) var_7))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((var_10), (((/* implicit */int) arr_1 [i_0]))))) + (((((/* implicit */_Bool) arr_1 [i_0])) ? (13114613446342180211ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) var_11);
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        arr_13 [i_1] = ((/* implicit */unsigned long long int) var_5);
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) -1507988739);
                        arr_15 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
                        var_21 = ((/* implicit */signed char) (~(arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [4])));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */short) max((((((/* implicit */_Bool) var_14)) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-11437)) ? (((((/* implicit */_Bool) 18ULL)) ? (var_12) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : ((+(((/* implicit */int) var_2)))))))));
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) var_18))));
    }
    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        var_24 = ((/* implicit */_Bool) (+(48696169U)));
        /* LoopNest 2 */
        for (unsigned char i_5 = 3; i_5 < 9; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                {
                    var_25 = (-(((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? (((/* implicit */int) ((unsigned short) var_15))) : (((((/* implicit */int) arr_0 [i_4] [i_6])) + (((/* implicit */int) (unsigned short)44194)))))));
                    arr_23 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5 + 1])) ? (arr_3 [i_5 + 1]) : (arr_3 [i_5 - 2]))))));
                    arr_24 [i_4] [i_5] [i_6] = ((/* implicit */int) var_1);
                }
            } 
        } 
    }
    for (int i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
    {
        var_26 = max((((/* implicit */unsigned int) ((int) arr_25 [i_7]))), (arr_10 [i_7] [i_7] [i_7] [i_7]));
        var_27 = ((/* implicit */unsigned int) var_16);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
    {
        arr_31 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (arr_26 [(_Bool)1] [i_8]) : (((/* implicit */int) var_17))));
        arr_32 [i_8] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_14)) ? (1270843447206854700LL) : (((/* implicit */long long int) arr_4 [i_8] [i_8] [i_8]))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
    {
        for (unsigned long long int i_10 = 3; i_10 < 14; i_10 += 2) 
        {
            {
                var_28 *= ((/* implicit */unsigned long long int) arr_33 [i_9]);
                var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (+(((((/* implicit */unsigned int) ((/* implicit */int) max((arr_30 [i_9]), (((/* implicit */short) var_7)))))) % (arr_9 [i_9] [i_10] [i_10] [i_10 - 1] [i_9] [i_9]))))))));
                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) var_11)) : (max((((/* implicit */int) arr_8 [i_10 + 2] [i_10 - 1])), ((~(((/* implicit */int) var_5))))))));
            }
        } 
    } 
}
