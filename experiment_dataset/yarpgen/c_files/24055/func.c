/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24055
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
    var_15 &= ((/* implicit */unsigned int) var_7);
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (+(max((var_12), (var_12))))))));
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_13))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (+(134217600))))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (~(max((arr_1 [i_0]), (arr_1 [i_0]))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_7))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2563422806216417949ULL)) ? (((/* implicit */int) (unsigned short)17500)) : (((/* implicit */int) (_Bool)0))));
        var_22 = ((((/* implicit */_Bool) ((int) var_10))) ? (((arr_5 [i_1]) * (arr_5 [i_1]))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_4 [i_1])), ((-(((/* implicit */int) var_3))))))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 2; i_2 < 17; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    {
                        arr_15 [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) 166203964)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (1152921504606846976ULL))));
                        /* LoopSeq 3 */
                        for (short i_5 = 1; i_5 < 17; i_5 += 1) 
                        {
                            var_23 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_10)) | (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((arr_18 [i_2] [i_2] [i_2] [i_2] [i_2 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [10] [12ULL] [3]))) : (arr_14 [7ULL] [7ULL] [7ULL] [(unsigned short)14] [i_2 - 1])))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) arr_5 [i_1]))));
                        }
                        for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            var_25 += arr_11 [i_1] [i_2] [i_3];
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) arr_12 [i_1]))));
                            arr_21 [i_1] [i_1] [(unsigned char)17] [i_2] [15ULL] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_17 [i_1] [i_2] [(short)10] [i_4] [12ULL] [i_2 + 2] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))) : (arr_17 [i_3] [i_2 - 2] [(_Bool)1] [i_4] [i_6] [i_2 + 2] [i_4])))));
                        }
                        for (unsigned short i_7 = 1; i_7 < 16; i_7 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned short) var_14);
                            var_28 = ((/* implicit */unsigned char) arr_18 [i_1] [i_2] [i_1] [i_4] [1ULL]);
                        }
                        var_29 = ((/* implicit */unsigned char) arr_23 [i_2]);
                        arr_24 [i_4] [i_4] [i_3] &= ((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) arr_18 [i_1] [(signed char)1] [i_1] [0] [i_4])))));
                    }
                } 
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned char) var_7);
}
