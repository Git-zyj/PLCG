/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26505
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
    for (long long int i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        var_11 = ((/* implicit */int) arr_1 [i_0] [i_0]);
        var_12 = ((/* implicit */long long int) ((int) (+(arr_0 [i_0]))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (var_1) : (((/* implicit */int) var_7))));
        arr_5 [(short)17] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_1])) | ((~(((/* implicit */int) var_4))))));
    }
    for (long long int i_2 = 2; i_2 < 21; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                for (long long int i_5 = 3; i_5 < 21; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        {
                            var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_3])) + (((/* implicit */int) arr_18 [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4] [i_3] [i_4] [i_5 - 1]))) : (((((/* implicit */_Bool) arr_13 [i_2] [i_2 - 1] [i_5 - 1])) ? (arr_13 [i_2 - 2] [i_2 - 2] [i_5 - 2]) : (arr_13 [i_2] [i_2 - 1] [i_5 + 1])))));
                            var_14 = ((/* implicit */unsigned long long int) var_7);
                            var_15 += ((/* implicit */unsigned long long int) var_2);
                            var_16 = min(((+(((/* implicit */int) min((arr_6 [i_3]), (arr_6 [1LL])))))), (((((/* implicit */_Bool) arr_10 [i_2 + 1])) ? (((/* implicit */int) arr_10 [i_2 - 2])) : (((/* implicit */int) arr_10 [i_2 - 2])))));
                            var_17 += ((/* implicit */unsigned short) ((unsigned char) arr_17 [i_3] [(unsigned short)8] [i_2] [i_2 + 1]));
                        }
                    } 
                } 
            } 
            arr_20 [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) arr_17 [i_2] [(unsigned short)1] [(unsigned short)21] [(unsigned short)1])), (((unsigned short) arr_8 [i_2]))));
            var_18 = ((/* implicit */unsigned long long int) (_Bool)1);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                for (int i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_8 [i_2]))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)4)))))));
                        var_20 = ((((var_0) - (((/* implicit */int) ((signed char) arr_12 [i_8] [i_7] [i_3] [(unsigned short)4]))))) * (((int) 1148417904979476480LL)));
                        var_21 = ((/* implicit */signed char) ((((9223372036854775806LL) ^ (0LL))) / (((/* implicit */long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) arr_12 [i_2 - 2] [i_2] [i_2 - 1] [i_2])))))));
                    }
                } 
            } 
        }
        var_22 -= ((/* implicit */long long int) arr_16 [(unsigned char)16] [(unsigned short)2] [i_2 - 1]);
        var_23 *= ((/* implicit */unsigned short) var_2);
        var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(-1009833352))))));
    }
    var_25 = ((/* implicit */unsigned long long int) var_1);
    var_26 = ((/* implicit */int) min((((long long int) (-(((/* implicit */int) var_6))))), (((/* implicit */long long int) var_4))));
    var_27 = ((/* implicit */unsigned short) var_7);
}
