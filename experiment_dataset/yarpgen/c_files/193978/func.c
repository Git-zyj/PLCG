/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193978
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) var_5);
                        var_21 = ((/* implicit */long long int) arr_5 [i_1] [i_1]);
                        /* LoopSeq 4 */
                        for (int i_4 = 3; i_4 < 9; i_4 += 1) 
                        {
                            var_22 = ((/* implicit */_Bool) (unsigned short)65529);
                            arr_11 [i_4] [(unsigned short)7] [i_1] [1ULL] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (((-(((/* implicit */int) (short)-24955)))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))))))) ^ (arr_1 [i_0])));
                            arr_12 [(_Bool)1] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */int) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (var_8))));
                            arr_13 [i_0] [i_1] [i_2] [i_1] [(signed char)0] = ((/* implicit */unsigned short) arr_9 [i_1] [i_2] [i_2]);
                        }
                        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
                        {
                            arr_16 [i_1] [i_1] [i_1] [i_5] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3061))) + (4294967294U)));
                            var_23 = (unsigned short)22958;
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
                        {
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned int) (unsigned short)29);
                            arr_21 [i_1] [i_1] [i_2] [i_6] = ((((((/* implicit */_Bool) arr_14 [i_0] [i_1] [(_Bool)1] [i_1] [(_Bool)1])) ? (((/* implicit */int) (unsigned short)65460)) : (((/* implicit */int) (unsigned short)22963)))) ^ (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_24 = ((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_1] [i_6]);
                        }
                        for (short i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            arr_26 [i_1] [i_2] [i_1] = ((/* implicit */signed char) arr_2 [i_1]);
                            arr_27 [i_7] [i_1] [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((int) arr_22 [i_7] [(unsigned short)9] [i_2] [i_1] [i_0] [i_0]));
                            arr_28 [i_1] [5LL] = ((/* implicit */unsigned int) arr_0 [i_7] [7ULL]);
                        }
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */int) ((unsigned long long int) ((long long int) ((((/* implicit */_Bool) 10179781888811470990ULL)) ? (((/* implicit */int) arr_23 [i_0] [i_1] [i_2] [0])) : (((/* implicit */int) (unsigned short)22939))))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (signed char)-106))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 2325347907U)) >= (var_15))))) : (((((/* implicit */unsigned long long int) arr_2 [i_1])) + (var_8)))));
                            arr_31 [9] [(unsigned short)0] [i_1] [i_1] [i_3] [i_8] = ((/* implicit */unsigned short) var_8);
                            arr_32 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */short) ((_Bool) arr_10 [i_1] [i_2] [i_1]))), (arr_23 [0ULL] [i_1] [i_1] [0ULL])));
                        }
                        arr_33 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3] [i_1] [(unsigned short)3] [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)18688)) : (((/* implicit */int) (short)28005))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118))) : (min((min((8106454757864245185ULL), (((/* implicit */unsigned long long int) arr_30 [(short)3] [i_1] [8ULL] [i_2] [i_2] [i_3] [i_3])))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned int) max((287529791), (((/* implicit */int) ((730518090) >= (((/* implicit */int) ((unsigned short) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
    }
    var_28 = ((/* implicit */unsigned int) ((((long long int) max((8106454757864245179ULL), (((/* implicit */unsigned long long int) var_4))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (_Bool)0)))) > (((int) var_8))))))));
}
