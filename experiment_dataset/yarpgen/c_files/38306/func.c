/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38306
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
    var_20 &= ((/* implicit */short) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) (_Bool)0);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_3 = 3; i_3 < 23; i_3 += 1) 
                {
                    arr_10 [i_3] [i_0 - 3] [i_1] [13LL] [i_3] [13LL] = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (-1840270222) : (var_19)))) : (3201262056280086027ULL)));
                    arr_11 [i_3] [i_0 + 1] [i_0] [i_0 - 4] = ((/* implicit */unsigned int) ((((long long int) var_12)) << (((/* implicit */int) (signed char)17))));
                }
                for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    arr_15 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_4] = ((unsigned char) ((arr_3 [7LL] [i_1]) ? (3809029661U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    var_22 *= ((/* implicit */signed char) -183033800);
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (arr_14 [i_0 - 2] [i_1 + 2]) : (((/* implicit */unsigned int) ((int) 0LL)))));
                    var_24 &= ((/* implicit */signed char) (+(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_7)))))));
                }
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 4] [i_0 - 4] [i_0])) ? (arr_12 [10LL] [i_2 - 1] [i_0 - 3] [i_0] [10LL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 - 2] [i_0] [i_0 - 1])))));
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_26 = ((/* implicit */_Bool) var_12);
                    arr_18 [i_1] [i_2 - 1] = ((/* implicit */long long int) var_3);
                    var_27 = ((/* implicit */long long int) arr_14 [i_0] [i_0]);
                    arr_19 [i_0 - 2] [i_1] [i_1 + 1] [i_2 - 1] [i_5] [(signed char)19] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 3] [6ULL])) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_17 [(unsigned char)24] [(unsigned char)24] [i_2] [(unsigned char)24] [i_5])))) : ((-(((/* implicit */int) (signed char)-36))))));
                }
                var_28 = ((/* implicit */long long int) (_Bool)1);
                /* LoopNest 2 */
                for (short i_6 = 1; i_6 < 22; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        {
                            arr_26 [i_0] [i_1] [i_2] [22U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_1 - 1] [i_2 - 1] [i_6 - 1]))) : (arr_4 [i_6 + 3] [i_2 - 1] [i_0 - 3] [i_0])));
                            arr_27 [i_2] [i_1] [i_2 - 1] = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == ((((_Bool)1) ? (arr_22 [i_7] [i_0] [i_2] [i_0]) : (3919528107U))));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [13] [13] [i_2] [13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8440434657456052518ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_3 [i_1 - 1] [i_6 + 3])))) : (arr_12 [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 3] [i_7])));
                        }
                    } 
                } 
            }
            for (unsigned char i_8 = 2; i_8 < 22; i_8 += 2) 
            {
                arr_30 [i_0 - 4] [i_0 - 4] [i_8] [i_0 - 2] = ((((/* implicit */int) arr_28 [i_1 - 1])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 3450220390064606818ULL))))));
                /* LoopNest 2 */
                for (unsigned int i_9 = 2; i_9 < 23; i_9 += 2) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_30 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_19)) ? (arr_22 [i_9 - 1] [i_1] [i_8 - 2] [24U]) : (arr_22 [i_9 + 1] [i_1] [i_8 + 3] [i_9])));
                            var_31 ^= ((/* implicit */long long int) var_5);
                            arr_38 [i_10] [i_9] [i_1] [i_1] [i_0 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_1] [2LL] [i_1 - 1] [i_1] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_9 - 1] [i_9 + 1] [i_8] [i_9 + 2] [i_8 + 3]))) : (arr_22 [i_1 + 1] [i_9 - 2] [i_9 + 1] [i_9 + 1])));
                        }
                    } 
                } 
            }
            var_32 = ((/* implicit */_Bool) 261605076);
        }
        for (unsigned short i_11 = 0; i_11 < 25; i_11 += 2) 
        {
            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) ((unsigned char) (short)-26232))))))));
            var_34 = ((/* implicit */_Bool) var_1);
            var_35 = ((((/* implicit */unsigned long long int) arr_25 [i_0 - 3] [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0 - 2])) | (((((/* implicit */_Bool) 3450220390064606818ULL)) ? (14996523683644944799ULL) : (((/* implicit */unsigned long long int) 1843172414U)))));
            arr_42 [i_0] [i_11] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_28 [i_0 + 2]))));
        }
    }
}
