/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50842
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
    var_12 = ((/* implicit */unsigned long long int) var_6);
    var_13 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */signed char) 4038538238U);
                    var_15 = ((/* implicit */short) 4398046510080ULL);
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) 1081098062U))) || (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            arr_12 [i_3] [i_3] = ((/* implicit */unsigned int) arr_8 [i_0 - 2] [(signed char)2] [i_0] [i_0]);
            arr_13 [i_3] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((arr_2 [i_0] [(short)2] [i_0]) ? (((/* implicit */int) arr_3 [i_0] [i_0 + 1] [i_3])) : (((/* implicit */int) var_6))))) / (arr_6 [(signed char)11] [(_Bool)1] [i_0] [i_0 + 2])))) * (((unsigned long long int) ((((/* implicit */int) arr_3 [i_0 + 2] [(signed char)7] [i_3])) * (((/* implicit */int) arr_1 [i_3])))))));
        }
        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */int) max((((/* implicit */long long int) arr_3 [i_0] [i_0] [i_4])), ((((_Bool)1) ? (((arr_14 [i_0] [i_0] [i_0]) / (((/* implicit */long long int) arr_7 [i_0])))) : (arr_0 [i_0 + 1] [i_4])))));
            arr_16 [i_0] [i_4] [i_0] = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0 + 2] [i_0 + 3] [i_0]))))) % (((/* implicit */int) var_4)))));
            var_18 = ((/* implicit */unsigned long long int) (+(var_9)));
            arr_17 [(short)9] [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned long long int) -7347421566782932820LL))) ? (((arr_8 [i_0] [i_0] [i_0] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (max((((/* implicit */unsigned long long int) (unsigned short)19977)), (18446744073709551615ULL))))) <= (((/* implicit */unsigned long long int) -928088799987607538LL))));
            var_19 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */short) arr_1 [i_0 - 1])), (max((var_1), (((/* implicit */short) var_6)))))))));
        }
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */short) arr_2 [i_5] [i_5] [i_0 - 2]);
            var_21 += ((/* implicit */unsigned long long int) var_8);
        }
    }
    /* vectorizable */
    for (short i_6 = 2; i_6 < 20; i_6 += 3) /* same iter space */
    {
        var_22 += ((/* implicit */unsigned short) (_Bool)1);
        arr_23 [i_6 + 1] = ((/* implicit */signed char) arr_21 [i_6 - 2] [i_6 + 1]);
    }
    for (short i_7 = 2; i_7 < 20; i_7 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */short) (+(14ULL)));
        arr_27 [i_7] = ((/* implicit */unsigned long long int) ((_Bool) arr_21 [i_7 - 1] [i_7 - 2]));
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_25 [i_7 - 2]))));
    }
    for (short i_8 = 2; i_8 < 20; i_8 += 3) /* same iter space */
    {
        arr_31 [i_8] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) arr_22 [i_8 + 1])) : (((/* implicit */int) arr_22 [i_8 - 2])))))));
        arr_32 [i_8] = arr_22 [(signed char)11];
    }
}
