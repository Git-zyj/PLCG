/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4196
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
    var_18 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_19 = ((/* implicit */int) ((_Bool) 8387314355645358920ULL));
            var_20 = ((/* implicit */_Bool) var_9);
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_0]);
        }
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 1; i_3 < 11; i_3 += 2) 
            {
                for (int i_4 = 2; i_4 < 10; i_4 += 2) 
                {
                    {
                        arr_16 [i_3] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 4; i_5 < 12; i_5 += 3) 
                        {
                            var_21 *= ((/* implicit */signed char) (-(((/* implicit */int) var_13))));
                            var_22 *= ((/* implicit */_Bool) ((unsigned long long int) (unsigned char)4));
                            var_23 = ((/* implicit */short) ((((/* implicit */int) var_5)) / (((((/* implicit */int) arr_3 [i_0] [i_2])) ^ (834952424)))));
                            arr_20 [i_3] [i_4] [i_5] = ((long long int) var_14);
                        }
                        for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */int) var_4);
                            arr_23 [i_3] = ((/* implicit */unsigned long long int) 0);
                        }
                    }
                } 
            } 
            var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) % (8387314355645358920ULL)));
        }
        for (unsigned short i_7 = 3; i_7 < 12; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) 834952429)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3975981319U))))) : (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) (unsigned char)0))))))))));
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (arr_9 [i_7 - 3] [i_7 - 1] [i_7 - 1] [i_7 - 2]) : (arr_1 [i_7 + 1] [i_7 - 2])));
                    }
                } 
            } 
            arr_34 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) / (var_11)));
        }
        /* LoopNest 2 */
        for (unsigned char i_10 = 1; i_10 < 11; i_10 += 2) 
        {
            for (unsigned char i_11 = 3; i_11 < 11; i_11 += 3) 
            {
                {
                    arr_40 [i_10] [i_10] [i_11] = ((/* implicit */_Bool) arr_29 [i_11] [i_10] [i_11 - 2]);
                    arr_41 [i_10] [i_10 + 2] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned int) arr_15 [4LL] [i_0] [i_10] [4LL])));
                }
            } 
        } 
    }
}
