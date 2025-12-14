/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21376
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
    for (short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2] |= ((/* implicit */signed char) (+((-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_5))))))));
                    var_18 = ((/* implicit */unsigned short) var_13);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_3 = 1; i_3 < 8; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (((-(((/* implicit */int) arr_3 [i_3])))) >= (((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((/* implicit */int) arr_13 [i_4])))))))));
                            var_20 = ((/* implicit */unsigned long long int) arr_0 [i_4] [(unsigned char)14]);
                        }
                        for (short i_8 = 2; i_8 < 9; i_8 += 1) 
                        {
                            arr_28 [i_4] [i_3] [i_4] = ((/* implicit */long long int) max((arr_25 [i_3 + 2] [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_8 + 1] [i_8 + 2]), (((/* implicit */unsigned int) ((arr_20 [i_8] [i_6] [(unsigned short)9] [(unsigned short)9] [i_3 + 3]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_8 - 2] [i_8 - 2]))))))));
                            arr_29 [i_5] [i_6] = ((/* implicit */signed char) ((arr_13 [i_8 + 2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            arr_30 [i_6] [(signed char)4] [6ULL] = ((/* implicit */unsigned long long int) (-(arr_6 [i_3] [i_4] [i_6])));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_8 [i_8] [i_8] [i_8 - 2] [i_3 + 2])))) ? ((-(arr_8 [i_3 - 1] [i_8] [i_8 + 2] [i_3 - 1]))) : (arr_8 [i_8] [i_8] [i_8 + 2] [i_3 - 1])));
                            arr_31 [i_6] [i_5] = ((/* implicit */signed char) ((5978402103089195991ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))));
                        }
                        for (unsigned int i_9 = 2; i_9 < 8; i_9 += 3) 
                        {
                            var_22 *= ((/* implicit */short) ((unsigned short) (-(max((((/* implicit */unsigned long long int) arr_11 [i_3])), (2147483647ULL))))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (short)32620))));
                            arr_34 [i_5] [i_4] [i_5] [i_6] [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_5] [i_6]))));
                        }
                        for (int i_10 = 2; i_10 < 10; i_10 += 4) 
                        {
                            arr_37 [(unsigned char)9] [i_4] [(_Bool)1] [(_Bool)1] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_3 [i_3 + 2]), (arr_3 [i_3 + 1]))))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))));
                        }
                        var_25 = ((/* implicit */unsigned short) arr_0 [i_3 + 1] [i_3 - 1]);
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3 + 2] [i_3] [i_3 + 3])) ? (((/* implicit */long long int) (+(arr_7 [i_3] [i_3] [i_3] [i_3 + 3])))) : (min((((/* implicit */long long int) arr_7 [i_3] [i_3] [i_3] [i_3 + 3])), (arr_8 [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 2]))))))));
        var_27 = ((/* implicit */_Bool) arr_12 [i_3] [i_3]);
    }
}
