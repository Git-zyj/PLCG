/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41393
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) ((_Bool) (short)-8349)))));
    var_17 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) var_15)) % (var_10))));
    var_18 = ((/* implicit */long long int) var_11);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (int i_3 = 3; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1975707499)) || ((_Bool)1))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -538697547)) ? (arr_8 [i_0] [i_2] [i_2]) : (((/* implicit */int) var_13))))) : ((~(-4682860546773672326LL)))))) ? ((-(((((/* implicit */_Bool) (signed char)-123)) ? (-612901186) : (((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_1] [i_3])))))) : (((int) (-(((/* implicit */int) arr_0 [i_1])))))));
                        arr_9 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) 4682860546773672344LL);
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_13 [i_1] [i_1] [i_2] [10] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) (-(arr_8 [3LL] [i_2] [i_2])))) % (max((4682860546773672340LL), (((/* implicit */long long int) arr_11 [i_0] [i_1])))))))));
                            arr_14 [i_0] [(_Bool)1] [i_2] [i_3 - 2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_1 [i_3 - 2]) ^ (((/* implicit */int) (_Bool)0)))) | (var_2)))) ? (var_4) : (((int) ((int) arr_3 [i_4] [i_1])))));
                            var_20 = ((/* implicit */_Bool) arr_7 [i_3] [i_1] [i_2] [i_3]);
                            arr_15 [i_3 - 1] [i_3 - 3] [i_3 - 1] [i_1] [i_3 - 2] = ((/* implicit */unsigned int) (_Bool)1);
                            var_21 = max((((/* implicit */int) ((_Bool) (!((_Bool)0))))), (((((/* implicit */int) max((arr_6 [i_1] [i_2] [i_1] [i_4]), (((/* implicit */unsigned char) (_Bool)0))))) / (((/* implicit */int) (!(var_3)))))));
                        }
                    }
                } 
            } 
        } 
        arr_16 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        arr_17 [i_0] [7U] = ((/* implicit */int) ((long long int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) == (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [9U] [i_0])) ? (arr_2 [(_Bool)1] [i_0]) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [10U])))))));
        arr_18 [i_0] = ((/* implicit */_Bool) var_7);
    }
    for (signed char i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
    {
        arr_22 [i_5] = ((/* implicit */long long int) ((unsigned long long int) ((arr_20 [i_5] [i_5]) - (((/* implicit */unsigned int) arr_1 [i_5])))));
        arr_23 [i_5] = ((/* implicit */int) ((((arr_11 [i_5] [i_5]) + (((/* implicit */unsigned int) 27)))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5] [i_5] [i_5] [i_5])))));
    }
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        var_22 = ((/* implicit */long long int) arr_20 [i_6] [i_6]);
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1325103238)) ? (((/* implicit */int) ((((/* implicit */int) var_13)) == (var_7)))) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_10 [i_6 + 1] [i_6 + 1] [(signed char)12] [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1])) : (arr_4 [i_6 + 1] [i_6] [i_6 + 1]))) : (((/* implicit */unsigned long long int) var_7))));
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_12 [i_6] [i_6 + 1] [i_6 + 1] [i_6] [(unsigned char)2]))));
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        arr_31 [12U] |= ((/* implicit */_Bool) ((arr_30 [18] [i_7]) + (arr_30 [18] [i_7])));
        arr_32 [5] [i_7] = ((/* implicit */int) ((((((/* implicit */long long int) arr_29 [i_7] [i_7])) | (arr_28 [i_7]))) + (((/* implicit */long long int) var_2))));
    }
    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) var_12))));
}
