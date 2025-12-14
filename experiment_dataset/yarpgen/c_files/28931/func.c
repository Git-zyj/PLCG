/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28931
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
    var_10 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((int) arr_1 [(unsigned short)14]));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_11 = ((/* implicit */unsigned char) ((var_8) ? (((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) 6997619155578552195LL)) : (6630896704214466324ULL))) : (((/* implicit */unsigned long long int) var_2))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                var_12 = ((/* implicit */unsigned long long int) arr_8 [1LL]);
                var_13 = ((/* implicit */unsigned long long int) var_4);
                /* LoopSeq 2 */
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (2U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3]))))))));
                    var_15 = var_8;
                    arr_12 [i_0] [(_Bool)1] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) ((((arr_9 [i_0]) > (6997619155578552181LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_1] [i_1] [(_Bool)1])) : (((/* implicit */int) arr_6 [i_1] [i_2] [i_3]))))) : (16116397490408310861ULL)));
                    arr_13 [i_0] [i_1] [14LL] [i_1] = ((/* implicit */int) var_6);
                    var_16 -= ((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3]);
                }
                for (long long int i_4 = 1; i_4 < 15; i_4 += 2) 
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)32767)) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [10ULL]) : (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_2] [i_0]))));
                    var_18 = ((/* implicit */int) var_4);
                }
            }
        }
        for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 2) 
        {
            var_19 = ((/* implicit */unsigned int) min((-6997619155578552182LL), (((/* implicit */long long int) max((((/* implicit */int) (signed char)-1)), (((var_8) ? (((/* implicit */int) arr_6 [i_0] [(unsigned char)3] [i_0])) : (((/* implicit */int) var_7)))))))));
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) max((arr_15 [i_0]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 6997619155578552163LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_8 [i_0]))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_5])) ? (6997619155578552176LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5] [(unsigned short)15]))))) : (((/* implicit */long long int) 1006632960U)))))))));
        }
        arr_18 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % ((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)123))))));
    }
    /* LoopNest 3 */
    for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
    {
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (unsigned short i_8 = 4; i_8 < 9; i_8 += 4) 
            {
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((((/* implicit */_Bool) var_0)) ? (var_1) : (arr_22 [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (max((4294967295U), (((/* implicit */unsigned int) var_6)))) : (max((((/* implicit */unsigned int) var_6)), (4294967292U)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_9 = 2; i_9 < 9; i_9 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) arr_11 [i_6] [i_6] [i_6] [(unsigned char)15]);
                        var_23 = ((/* implicit */long long int) max((var_23), (((((/* implicit */_Bool) -6997619155578552176LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (-8426703358421551627LL)))));
                    }
                    arr_28 [i_6] [i_7] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 19U)) ? (6997619155578552202LL) : (var_0))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) var_9)) - (167))))))))) / (3323195563650308223ULL)));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6] [14LL] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_7] [i_7] [3LL]))) : (arr_10 [i_7] [i_7] [i_8] [i_8] [i_7])))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 1196115455304555137LL)) : (arr_5 [i_6] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1))))))) ? (((/* implicit */unsigned long long int) arr_9 [i_6])) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1006632964U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))))))) : (((var_3) | (var_3)))))));
                }
            } 
        } 
    } 
}
