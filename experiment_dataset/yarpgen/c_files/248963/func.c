/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248963
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
    var_19 = ((/* implicit */_Bool) var_12);
    var_20 = ((/* implicit */int) ((signed char) ((long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [(unsigned short)12] = ((/* implicit */_Bool) max((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [8] [(unsigned char)8]))))))))));
        arr_3 [i_0] = ((/* implicit */short) var_3);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        arr_16 [i_1] [8ULL] [i_2] [8ULL] [i_4 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((var_17) / (((/* implicit */long long int) ((/* implicit */int) arr_15 [(short)0] [(signed char)12] [2] [i_4] [i_2] [i_4 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                        arr_17 [i_4] [(short)13] = ((/* implicit */unsigned int) var_17);
                    }
                    for (unsigned short i_5 = 3; i_5 < 12; i_5 += 2) 
                    {
                        arr_20 [(short)3] = ((/* implicit */unsigned long long int) ((_Bool) arr_7 [i_1] [i_3] [i_1]));
                        arr_21 [(_Bool)1] [(unsigned short)10] [(unsigned short)10] [(unsigned short)10] = var_16;
                        arr_22 [i_3] [i_3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_1] [i_2] [i_2] [i_5]))))) / (3571327788143295665LL)));
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            arr_27 [3ULL] [(short)0] [i_6] = ((/* implicit */signed char) ((short) (+(2678400029383507817LL))));
                            arr_28 [i_1] [i_1] [i_3] [i_6] [i_7] = ((/* implicit */unsigned int) var_17);
                            arr_29 [i_1] [i_2] = ((((/* implicit */_Bool) arr_14 [(unsigned short)3] [11] [i_6] [i_6 - 1])) || (((/* implicit */_Bool) ((short) -7716147738142703107LL))));
                            arr_30 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) var_8);
                            arr_31 [5ULL] [i_1] [9ULL] [6U] [13] [i_2] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */int) arr_18 [i_1] [i_1] [i_3] [6LL] [i_7] [(unsigned char)1])) - (((/* implicit */int) (_Bool)1))))));
                        }
                        arr_32 [i_3] [10ULL] [i_3] [i_3] [(unsigned char)5] = ((/* implicit */int) ((((long long int) -5931261721476482594LL)) | (((((/* implicit */_Bool) arr_23 [10LL] [i_2] [i_2] [i_6])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_33 [(unsigned short)12] = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
                    }
                    arr_34 [i_3] = ((/* implicit */unsigned short) (!(((_Bool) var_8))));
                    arr_35 [(unsigned short)2] [i_3] = ((/* implicit */short) (-(var_1)));
                }
            } 
        } 
        arr_36 [i_1] = ((/* implicit */signed char) arr_13 [i_1] [i_1] [i_1] [2U] [i_1] [(short)3]);
    }
    var_21 = ((/* implicit */unsigned int) var_13);
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_8), (((unsigned char) (_Bool)1))))) ? ((((~(((/* implicit */int) var_14)))) % (((/* implicit */int) var_14)))) : (((/* implicit */int) ((_Bool) (~(-1LL)))))));
}
