/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215390
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
    var_15 = var_4;
    var_16 = ((/* implicit */unsigned long long int) (signed char)-92);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (max((((/* implicit */int) var_12)), ((-(((/* implicit */int) (unsigned char)0))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) var_10);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 21; i_4 += 3) 
                        {
                            var_18 *= ((/* implicit */unsigned char) var_10);
                            arr_13 [i_4] [i_0] [i_0] [i_1 - 1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_4 [i_0]) ? (arr_12 [i_0] [i_1 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 4) 
                        {
                            arr_17 [i_0] [i_1 - 1] [i_1 - 1] [13ULL] [i_3] [i_0] [i_5 - 3] = var_1;
                            arr_18 [(signed char)5] [(unsigned char)5] [i_1 - 1] [i_2] [i_3] [i_5] [i_0] = ((/* implicit */_Bool) var_10);
                            arr_19 [(_Bool)1] [i_5 + 1] [(signed char)12] [i_3] [16] [(_Bool)1] [(_Bool)1] |= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (-5428817523095409138LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [18]))))));
                        }
                        for (unsigned char i_6 = 1; i_6 < 19; i_6 += 4) 
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [i_1 - 1] [(_Bool)1] [i_1 - 1] [i_1 - 1])) ? (arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45))))) / (min((((/* implicit */unsigned int) (unsigned char)32)), (arr_7 [i_1 - 1] [i_1] [i_1] [i_1 - 1])))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)80)) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */_Bool) 2036709777)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))) : ((((_Bool)0) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) var_11)))))) : (((arr_4 [i_0]) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_22 [i_1 - 1] [i_6 + 1] [i_0] [i_1 - 1] [i_3]))))));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_7 = 1; i_7 < 20; i_7 += 1) 
    {
        arr_27 [i_7] = (signed char)13;
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            for (unsigned char i_9 = 1; i_9 < 19; i_9 += 2) 
            {
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_7 + 1] [i_7 + 1] [i_7 - 1])) ? (((arr_24 [20] [i_8]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)123))) : (arr_32 [i_10] [i_9] [i_8] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_39 [i_7] [i_8] [i_8] [i_9] [i_11] = ((/* implicit */int) ((signed char) arr_34 [i_8] [i_9] [i_10 - 1] [i_11]));
                            var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-22))) : (9223372036854775807LL)));
                        }
                        arr_40 [20U] [i_9] [(_Bool)1] [i_10] = ((/* implicit */long long int) ((unsigned char) (unsigned char)131));
                        var_22 = ((/* implicit */signed char) 2036709782);
                    }
                } 
            } 
        } 
        arr_41 [i_7] = ((/* implicit */long long int) arr_34 [i_7] [i_7] [i_7 + 1] [i_7]);
    }
}
