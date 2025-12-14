/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242804
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 = (+(((min((arr_4 [i_0] [i_0] [i_0]), (arr_5 [i_1] [i_1]))) ^ (((((/* implicit */_Bool) var_0)) ? (arr_5 [i_0] [i_1]) : (arr_3 [i_0] [i_1] [i_2]))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_0] [(unsigned char)6] = ((/* implicit */short) ((((((/* implicit */int) (short)-17593)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
                        var_14 = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_0]))))) != (((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_3]))) < (-305949210112710712LL))) ? (min((arr_5 [i_2 + 2] [i_2 + 2]), (arr_3 [i_0] [i_0] [i_0 - 1]))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)22605)) : (((/* implicit */int) arr_6 [i_0])))))))));
                        arr_12 [i_0] [i_0] [8LL] [(unsigned short)17] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_5 [i_0 - 1] [i_0 - 1]) & (arr_3 [i_0 + 2] [i_0 + 1] [i_2 + 1])))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 2] [i_2 - 1] [i_2 + 4]))))) : ((-(8136609811790062733LL)))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 1; i_5 < 18; i_5 += 4) 
                        {
                            var_15 = ((/* implicit */short) ((unsigned char) arr_13 [i_0 + 2] [i_5] [(short)13] [i_4]));
                            arr_19 [i_0] [i_0] [i_2 - 3] [i_0] = ((/* implicit */short) ((int) ((unsigned int) var_2)));
                            var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) != (arr_18 [i_0] [i_0] [i_4]))))));
                        }
                        var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_2] [i_4])) > (((/* implicit */int) arr_16 [i_0] [i_1] [(_Bool)1] [i_2] [(_Bool)1]))))) != (((int) (signed char)-27))));
                    }
                    for (short i_6 = 2; i_6 < 20; i_6 += 4) 
                    {
                        arr_22 [i_0] = ((/* implicit */unsigned short) 2ULL);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 1) 
                        {
                            arr_27 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) (unsigned short)32710)) - (((/* implicit */int) (_Bool)1)))));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [(unsigned short)20] [i_6] [i_6] = ((/* implicit */int) var_2);
                            var_19 = ((/* implicit */long long int) arr_15 [i_0 - 2] [i_0 + 1] [i_0] [i_2 + 4] [i_0 + 1]);
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_6] [i_6] [i_6 + 1] [i_6])) ^ (((/* implicit */int) arr_9 [i_0 - 1] [i_2 + 2] [i_2 + 2] [i_7 + 1]))));
                        }
                    }
                    for (int i_8 = 4; i_8 < 20; i_8 += 3) 
                    {
                        arr_33 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)32))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (short)(-32767 - 1)))));
                    }
                    var_21 = ((/* implicit */int) arr_1 [i_2]);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
    var_23 = ((/* implicit */short) var_11);
}
