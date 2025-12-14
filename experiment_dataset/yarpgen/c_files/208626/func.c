/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208626
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_19 = ((((((((/* implicit */int) var_13)) + (2147483647))) << (((((arr_0 [i_0]) + (3398580671258029LL))) - (26LL))))) - (((/* implicit */int) var_15)));
        arr_2 [i_0] = (+(((((/* implicit */_Bool) 1521081089U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535)))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (+((-(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) 2773886207U))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(2773886207U)))))))));
                        arr_13 [i_4] [(short)4] [i_2] [(signed char)5] [(signed char)5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [(short)5] [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_3] [i_4]))) : (var_6)));
                    }
                    for (unsigned int i_5 = 2; i_5 < 11; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            arr_18 [i_6 - 1] [i_2] [i_2] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (2773886207U) : (arr_1 [6U] [6U]))));
                            var_23 = (!(((/* implicit */_Bool) -1)));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [(_Bool)0] [i_6] [(_Bool)1] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) arr_14 [(signed char)8] [(signed char)8] [(signed char)8] [i_6 - 1] [i_6 - 1]))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_7]))) + (((unsigned long long int) var_8))));
                            arr_21 [i_1] [i_2] = ((/* implicit */int) arr_19 [i_1] [(unsigned char)9] [i_1] [i_1]);
                        }
                        arr_22 [i_1] [i_3] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_5 + 1])) ? (arr_4 [i_5 - 1]) : (((/* implicit */unsigned long long int) arr_10 [i_5] [i_5 - 2] [i_5 + 1] [i_5]))));
                    }
                    for (int i_8 = 2; i_8 < 12; i_8 += 1) 
                    {
                        arr_25 [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((unsigned int) (((_Bool)0) ? (2773886208U) : (((/* implicit */unsigned int) -1312959239)))));
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) arr_19 [i_8 - 2] [i_8 + 1] [i_8 + 1] [4]))));
                    }
                    arr_26 [(_Bool)0] [i_2] [i_3] = ((/* implicit */unsigned int) arr_17 [i_1]);
                }
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 8388607ULL)) ? (((/* implicit */unsigned long long int) -1)) : (var_6)))) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) ((signed char) (unsigned char)25)))))));
}
