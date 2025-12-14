/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3012
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
    for (int i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 1) 
                {
                    {
                        var_11 = ((((((/* implicit */unsigned long long int) var_4)) + (arr_2 [i_0 - 1] [i_0]))) & (((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [1ULL] [i_0 + 3] [i_2])) ^ (arr_2 [i_0 + 1] [i_0]))));
                        var_12 *= ((/* implicit */unsigned char) arr_1 [i_0 + 3] [i_2]);
                        var_13 *= ((/* implicit */_Bool) var_8);
                        arr_12 [i_0] [i_0] [i_2] [i_3 + 1] [i_2] [i_1] = ((/* implicit */unsigned int) arr_1 [i_0] [i_3]);
                        arr_13 [i_1] [i_1] [i_0] [i_3 + 1] = ((/* implicit */_Bool) (((+(max((8446535714852522772ULL), (((/* implicit */unsigned long long int) arr_4 [i_3] [i_0])))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)0))))));
                    }
                } 
            } 
        } 
        var_14 ^= ((/* implicit */unsigned int) min((((var_8) * (((/* implicit */int) (_Bool)1)))), (max((var_8), (((/* implicit */int) arr_8 [i_0] [i_0 - 2] [i_0]))))));
        var_15 = ((/* implicit */unsigned int) ((short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (-4331637345585286432LL))));
        var_16 *= ((/* implicit */unsigned int) ((unsigned char) max(((+(arr_0 [i_0 + 3] [2ULL]))), (((/* implicit */unsigned int) (short)-16)))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((signed char) var_9));
        arr_16 [i_4] = ((/* implicit */short) var_3);
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 2) 
        {
            for (long long int i_6 = 1; i_6 < 18; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    {
                        arr_26 [(unsigned char)17] [(unsigned char)17] [i_6] [i_5] = ((/* implicit */unsigned short) (((+(2118653210))) + ((~(((/* implicit */int) (short)-32165))))));
                        var_18 = ((/* implicit */unsigned long long int) ((var_1) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_4] [i_4 - 1] [i_4] [i_6 + 2] [i_5])) ? (((/* implicit */int) (short)8191)) : (((/* implicit */int) arr_14 [(unsigned short)19])))))));
                    }
                } 
            } 
        } 
        arr_27 [i_4] = ((/* implicit */long long int) ((unsigned int) var_7));
    }
    var_19 = ((/* implicit */int) ((long long int) ((unsigned short) 4917688697374844690ULL)));
    var_20 |= ((/* implicit */short) (+(16310644892161249411ULL)));
}
