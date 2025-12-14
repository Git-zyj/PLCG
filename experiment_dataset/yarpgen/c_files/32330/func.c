/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32330
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            arr_6 [i_1] = ((/* implicit */signed char) ((((unsigned long long int) var_4)) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
            var_12 ^= ((/* implicit */_Bool) arr_0 [i_1]);
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)177);
        }
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 1]))));
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */long long int) var_11);
                    var_15 = ((/* implicit */unsigned char) ((arr_8 [i_2]) ^ (((/* implicit */int) var_9))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (signed char)80))))) : (((/* implicit */int) arr_17 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_3]))));
                    /* LoopSeq 1 */
                    for (int i_6 = 1; i_6 < 20; i_6 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (unsigned short)41221))) ? (arr_2 [i_0 + 1] [i_6 - 1]) : ((-(((/* implicit */int) arr_9 [i_0] [i_0]))))));
                        arr_20 [i_0] [i_2] [i_0] [i_5] [i_2] = ((/* implicit */short) (unsigned char)147);
                    }
                    arr_21 [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((unsigned char) ((unsigned short) arr_17 [i_5] [i_3] [i_0] [i_0] [i_0])));
                }
                arr_22 [i_0] [(unsigned short)20] [(unsigned short)20] [i_0] &= ((/* implicit */signed char) ((_Bool) (signed char)-122));
            }
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                arr_25 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0 - 1] [i_0] [i_0 + 1] [i_2])) ? (arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2]) : (arr_15 [i_0 + 1] [i_0] [i_0 + 1] [i_2])));
                arr_26 [i_0] [i_2] [i_7] = arr_12 [i_2] [i_2];
            }
            for (signed char i_8 = 1; i_8 < 19; i_8 += 1) 
            {
                var_18 = ((/* implicit */signed char) ((arr_10 [i_0 - 1] [i_8 + 1] [i_2]) << (((((/* implicit */int) arr_0 [i_8 + 1])) >> (((arr_27 [i_0] [i_2] [i_8]) + (2850445381367900556LL)))))));
                var_19 = ((/* implicit */unsigned short) ((11217574136027404188ULL) << (((/* implicit */int) (_Bool)1))));
            }
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 33553920U)))))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_21 = ((/* implicit */signed char) var_6);
            var_22 += ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)597))));
            var_23 = arr_18 [i_9] [i_9] [i_0 - 1] [i_0];
            var_24 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]))));
        }
        for (int i_10 = 3; i_10 < 20; i_10 += 1) 
        {
            var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [i_0 - 1]))));
            arr_36 [i_10 - 2] = ((/* implicit */unsigned long long int) arr_29 [(_Bool)1]);
        }
    }
    /* vectorizable */
    for (unsigned short i_11 = 2; i_11 < 12; i_11 += 1) 
    {
        arr_39 [i_11] = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (_Bool)1)))));
        var_26 = ((/* implicit */unsigned char) ((_Bool) ((unsigned short) arr_0 [i_11])));
        var_27 -= ((/* implicit */unsigned char) ((unsigned short) arr_10 [i_11 - 1] [i_11 - 1] [(unsigned char)18]));
        var_28 *= ((/* implicit */signed char) (-(((19ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_11] [i_11])))))));
        var_29 = ((/* implicit */_Bool) arr_16 [i_11] [i_11] [i_11] [i_11] [i_11]);
    }
    for (int i_12 = 0; i_12 < 17; i_12 += 1) 
    {
        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (~((+(((/* implicit */int) (short)32760)))))))));
        var_31 = ((/* implicit */int) ((signed char) ((242750871) & ((+(-2124358908))))));
    }
    var_32 = ((/* implicit */signed char) (-(((-2124358890) / (((/* implicit */int) (short)32739))))));
}
