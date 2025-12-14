/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50388
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */int) (+((-(arr_0 [i_0 - 1] [i_1])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_16 ^= ((/* implicit */unsigned long long int) (-(arr_2 [i_0] [i_0])));
                            var_17 &= ((/* implicit */unsigned long long int) (unsigned char)169);
                            arr_9 [i_0] [i_0 - 1] [(unsigned short)15] [i_2] [i_3] [(unsigned short)14] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0)))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 4; i_4 < 18; i_4 += 4) 
                            {
                                var_18 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned short)65535)), (min((((/* implicit */unsigned long long int) ((arr_8 [i_0] [i_1 - 2] [(unsigned short)7] [i_4]) % (((/* implicit */unsigned int) arr_7 [i_0] [i_2] [i_1 - 1] [i_0]))))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 1] [i_0] [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32746)))))))));
                                arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) arr_5 [i_2] [i_3] [i_4 - 4]);
                                var_19 |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (unsigned short)42875)))), ((!(((/* implicit */_Bool) (short)-20045))))));
                            }
                            for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                            {
                                arr_15 [i_3] = ((/* implicit */short) 4294967272U);
                                arr_16 [i_3] = ((/* implicit */unsigned char) ((unsigned short) (((!(((/* implicit */_Bool) (unsigned short)52220)))) ? ((+(var_0))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_13 [i_5] [i_3] [i_2] [i_1] [i_1] [i_0] [i_0 - 1])) : (arr_7 [i_0] [i_1] [i_2] [i_3]))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_6 = 2; i_6 < 17; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        {
                            var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) - (arr_14 [i_7] [2ULL] [i_6] [i_0] [i_7])))) && (max((arr_21 [i_0] [i_1 + 2] [i_6] [(signed char)1] [i_7] [i_7]), (arr_13 [i_0 + 1] [i_0 + 1] [i_6] [i_7] [i_1 - 1] [i_1] [i_7])))));
                            /* LoopSeq 1 */
                            for (unsigned short i_8 = 1; i_8 < 18; i_8 += 2) 
                            {
                                arr_25 [(_Bool)1] [3ULL] [i_6] [i_7] [i_8] = ((/* implicit */unsigned long long int) var_5);
                                arr_26 [i_0] [i_1] [i_6] [i_7] [i_8] = ((/* implicit */signed char) max((((arr_13 [i_1] [i_1] [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18389))) : (arr_11 [i_6] [i_0] [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8] [i_8]))), (arr_11 [i_8] [i_0] [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8] [i_8])));
                            }
                        }
                    } 
                } 
                arr_27 [(unsigned short)17] [(signed char)1] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_0 - 2])) / (((/* implicit */int) arr_19 [i_1 + 2]))))) ? (((((/* implicit */_Bool) arr_19 [i_0 + 1])) ? (((/* implicit */int) (short)21833)) : (((/* implicit */int) arr_19 [i_0])))) : (((/* implicit */int) max((arr_19 [i_1 - 1]), (arr_19 [i_0 - 2]))))));
                var_21 += ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_13)))), (min((arr_7 [i_0 - 1] [12U] [i_1 - 1] [i_0]), (arr_7 [i_0 + 1] [(unsigned short)16] [i_1 + 1] [i_0])))));
            }
        } 
    } 
    var_22 -= ((/* implicit */int) var_14);
    var_23 = ((/* implicit */int) max((min((max((((/* implicit */unsigned long long int) var_1)), (var_14))), (((/* implicit */unsigned long long int) (unsigned char)6)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_13)))))));
}
