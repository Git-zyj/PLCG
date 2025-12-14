/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205924
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
    var_18 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (var_14) : (((/* implicit */long long int) (+(((/* implicit */int) var_12)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [(short)7] [i_1 - 1] [i_0] = ((/* implicit */short) arr_4 [0LL] [(unsigned short)0] [3U]);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [6U] [(signed char)7] [i_2 + 1] [i_0] [(signed char)4] = ((((/* implicit */_Bool) min((arr_5 [i_1 + 1] [i_1 - 2] [i_1 - 2]), (arr_5 [i_1 - 1] [i_1 - 2] [i_1 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65510))) : ((~(arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1]))));
                            var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) arr_8 [(_Bool)1] [i_1 - 2] [i_0])))));
                            arr_12 [4] [2ULL] [(unsigned char)10] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_8))))));
                            var_20 = ((/* implicit */short) (unsigned char)15);
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                            {
                                arr_15 [i_0] [i_1 - 2] [i_2 + 3] [(_Bool)1] = ((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1] [i_2 + 2]);
                                var_21 = ((/* implicit */unsigned char) var_12);
                                var_22 = ((/* implicit */unsigned char) (_Bool)1);
                                var_23 ^= ((/* implicit */unsigned short) arr_8 [(unsigned char)10] [i_1 - 1] [10ULL]);
                            }
                        }
                    } 
                } 
                arr_16 [(unsigned short)4] [i_0] = max((var_10), ((!(((/* implicit */_Bool) arr_10 [(unsigned char)4] [(unsigned short)0] [(_Bool)1] [(unsigned char)9] [(unsigned short)9] [2ULL])))));
                /* LoopNest 3 */
                for (long long int i_5 = 1; i_5 < 12; i_5 += 3) 
                {
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 + 1] [6U] [i_5 + 1] [4ULL] [i_5 - 1])) ? (((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_5 + 1] [i_5 + 1] [i_6] [1ULL])) : (((/* implicit */int) arr_10 [11ULL] [i_1 + 1] [i_1 - 1] [i_5 + 1] [(short)1] [i_7]))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0] [i_1 - 2] [2ULL] [i_5 + 1] [(short)3] [(unsigned char)3])))))));
                                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) arr_13 [i_0] [i_1 - 2] [i_5 + 1] [i_6] [i_7])), (2157531467U))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (~(((/* implicit */int) var_9)))))));
    var_27 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_0)), (max(((~(((/* implicit */int) var_4)))), (((/* implicit */int) var_4))))));
    var_28 = ((/* implicit */long long int) ((var_5) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (var_2)))) : (((/* implicit */int) var_10))));
}
