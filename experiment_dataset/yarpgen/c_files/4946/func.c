/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4946
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
    var_10 |= ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) max((((/* implicit */int) var_8)), (var_9)))) ^ (((((/* implicit */_Bool) 14088205120489717907ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_2)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((2256346593821962177LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)226)))))) | ((~(var_0))))))));
                        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */int) arr_8 [i_2] [i_2] [(unsigned short)7] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_1 [i_3]))));
                        var_13 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [(unsigned char)1] [i_2] [i_3])) ? (var_3) : (var_0)))) ? (((/* implicit */int) arr_6 [i_2])) : (((((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1] [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [(unsigned char)3] [i_1] [(unsigned short)7] [i_3])))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [6U])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [7])) : (((/* implicit */int) var_4)))))));
    }
    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        var_15 = ((/* implicit */short) arr_11 [i_4]);
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_8))));
    }
    for (int i_5 = 2; i_5 < 21; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        for (short i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            {
                                var_17 = max((max((((arr_15 [i_5 - 2]) ? (((/* implicit */int) arr_22 [11ULL] [i_7] [i_7] [(short)7] [i_7])) : (((/* implicit */int) arr_16 [i_7])))), (((/* implicit */int) var_5)))), ((+((+(((/* implicit */int) (signed char)0)))))));
                                var_18 = ((/* implicit */unsigned char) (unsigned short)8128);
                            }
                        } 
                    } 
                    arr_27 [i_5] [(signed char)4] [(signed char)4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_22 [i_5] [(unsigned short)4] [i_5] [i_5 - 2] [i_5 - 1])), ((((_Bool)1) ? (arr_20 [i_5] [(unsigned short)19] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5] [i_5] [i_5])))))))) ? ((-(((/* implicit */int) arr_17 [10ULL] [i_6])))) : (var_9)));
                    var_19 *= ((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_7] [11]);
                }
            } 
        } 
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_4))));
        var_21 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_18 [i_5] [i_5 + 1] [i_5])))), (((((/* implicit */int) arr_18 [i_5] [i_5 - 1] [i_5])) - (((/* implicit */int) arr_18 [i_5] [i_5 - 1] [i_5]))))));
        /* LoopSeq 1 */
        for (short i_10 = 2; i_10 < 21; i_10 += 1) 
        {
            arr_31 [i_5] = ((/* implicit */int) var_5);
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 2) 
            {
                var_22 = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) var_2)) ? (var_0) : (var_3))), (((/* implicit */unsigned long long int) arr_30 [i_5 + 1] [(unsigned char)8] [i_5 - 1])))), (((((/* implicit */_Bool) arr_18 [i_10 - 2] [i_10 - 1] [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_11]))) : ((~(var_3)))))));
                arr_34 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_17 [i_11] [i_10])) | (((/* implicit */int) var_5)))))) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)335)))) : (((var_9) >> (((((/* implicit */int) arr_22 [i_5 - 2] [i_5] [i_10 - 2] [i_10 - 1] [i_10 - 1])) + (9916)))))));
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 22; i_12 += 3) 
                {
                    for (short i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */signed char) var_8)), (arr_24 [i_5] [i_10] [i_5 - 1] [i_10 - 2] [i_10 - 2] [i_12])))) <= ((+(-1253954502)))));
                            var_24 = ((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))), (min((((/* implicit */unsigned long long int) (signed char)126)), (var_0))))));
                        }
                    } 
                } 
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 19; i_14 += 2) 
    {
        var_25 = arr_29 [i_14] [i_14];
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? ((~(var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_14] [i_14] [i_14]))))))));
    }
    var_27 = (!(((/* implicit */_Bool) var_6)));
    var_28 += ((/* implicit */int) var_1);
}
