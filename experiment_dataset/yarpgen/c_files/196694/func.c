/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196694
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
    var_14 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((((/* implicit */int) var_12)) & (((/* implicit */int) (short)31880)))), (min((((/* implicit */int) var_2)), (var_10)))))) - (((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */long long int) ((/* implicit */int) min(((signed char)127), ((signed char)-100))))) : (((((/* implicit */_Bool) -812038334)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [0LL])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))))) ? (min((var_4), (((/* implicit */long long int) arr_0 [i_0] [(short)8])))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [2LL] [2LL]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [(signed char)6] [2])) : (((/* implicit */int) (signed char)-88))))) && (((/* implicit */_Bool) ((unsigned long long int) var_2)))))))))));
        arr_2 [i_0] = ((/* implicit */short) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            var_16 = ((/* implicit */_Bool) var_9);
            var_17 = ((/* implicit */unsigned long long int) ((unsigned char) (~(min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0]))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
            {
                arr_8 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) -1956283950)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (signed char)-15)))));
                var_18 += ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2] [(signed char)2] [i_1] [(signed char)2])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((~(var_4)))));
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 4; i_4 < 8; i_4 += 4) 
                    {
                        var_19 += ((/* implicit */short) (((+(arr_1 [8]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15)))));
                        var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_1 - 1])) ? (((/* implicit */int) ((_Bool) arr_12 [i_0 - 1] [i_0 - 1] [8ULL] [(signed char)8] [8ULL] [i_0 - 1] [i_4]))) : (((/* implicit */int) ((short) (_Bool)1)))));
                        var_21 *= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                    }
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */int) arr_10 [2]);
                        arr_15 [i_0] [6LL] [i_0] [i_3] = ((/* implicit */signed char) ((int) ((signed char) (short)24057)));
                        arr_16 [i_0] [9ULL] [(signed char)8] [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (812038334) : (((/* implicit */int) var_13))))) ? ((-(((/* implicit */int) var_12)))) : (((/* implicit */int) arr_14 [i_0] [i_0 - 1] [i_0 - 1] [(short)8] [9] [2U]))));
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_9 [i_5] [i_0] [i_2] [i_2] [i_0] [9LL])) ? (11) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0]))))));
                    }
                    var_23 &= ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0 - 1] [i_2]))));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 1; i_6 < 7; i_6 += 2) 
                    {
                        arr_20 [i_0] [i_1] [i_2] [i_0] [i_6 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 - 1] [i_0]))))) ? (((/* implicit */int) ((unsigned char) var_6))) : (-2147483628)));
                        var_24 = ((/* implicit */short) ((arr_1 [i_0 - 1]) & (((/* implicit */unsigned long long int) 0U))));
                    }
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        arr_25 [i_0] [i_1 + 1] [2LL] [i_0] [i_7] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                        arr_26 [i_0] = ((signed char) var_12);
                    }
                    for (short i_8 = 1; i_8 < 9; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [1ULL]))) : (arr_9 [i_0] [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [i_0] [5ULL])))));
                        var_26 = ((/* implicit */signed char) (~(((arr_0 [i_0] [i_0]) ? (((/* implicit */int) var_13)) : (2147483647)))));
                    }
                }
                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_0 - 1] [i_2])) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) arr_4 [i_0 - 1] [(signed char)3])) + (((/* implicit */int) var_9)))))))));
            }
            for (long long int i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
            {
                arr_33 [i_0] [i_9] = ((/* implicit */signed char) 0U);
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    var_28 = ((/* implicit */signed char) (+(arr_9 [i_0] [i_0 - 1] [9ULL] [(signed char)3] [i_0] [i_1 - 2])));
                    arr_36 [(unsigned char)8] [(unsigned char)2] [6ULL] [i_10] &= ((/* implicit */_Bool) var_3);
                    arr_37 [i_0] [i_0] [(unsigned char)6] [(_Bool)1] [i_9] [(_Bool)1] = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) 4104166271570678853LL)))));
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 3; i_11 < 9; i_11 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (+(arr_34 [i_11 - 2] [i_11] [i_11 + 1] [i_1 - 3] [i_0 - 1]))))));
                    arr_41 [i_1] [i_0] [9U] = (+(((/* implicit */int) (short)32760)));
                }
                for (unsigned long long int i_12 = 3; i_12 < 9; i_12 += 3) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_31 = ((/* implicit */signed char) ((short) min(((~(arr_24 [i_0 - 1] [i_1] [i_9] [i_9] [i_12 - 2]))), (((/* implicit */unsigned long long int) arr_32 [i_0] [i_0] [i_9] [i_12])))));
                }
            }
            var_32 = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((var_8) | (-2147483628))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-5131)) : (((/* implicit */int) arr_38 [(signed char)3] [(signed char)3] [(short)1] [i_1 - 3]))))))) == (((min((((/* implicit */unsigned long long int) arr_35 [i_0 - 1] [(unsigned char)5] [3LL] [i_0 - 1])), (2601127368750795632ULL))) << (((/* implicit */int) arr_19 [i_0 - 1] [i_0 - 1] [i_0] [i_1 - 1] [i_1 + 1] [i_1 + 1]))))))) : (((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((var_8) | (-2147483628))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-5131)) : (((/* implicit */int) arr_38 [(signed char)3] [(signed char)3] [(short)1] [i_1 - 3]))))))) == (((min((((/* implicit */unsigned long long int) arr_35 [i_0 - 1] [(unsigned char)5] [3LL] [i_0 - 1])), (2601127368750795632ULL))) << (((((/* implicit */int) arr_19 [i_0 - 1] [i_0 - 1] [i_0] [i_1 - 1] [i_1 + 1] [i_1 + 1])) + (42))))))));
            var_33 = ((/* implicit */signed char) ((min((((/* implicit */int) var_7)), ((-(((/* implicit */int) (signed char)61)))))) != (((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_23 [i_0] [i_0]))))))));
        }
    }
    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((619604623547199111ULL), (((/* implicit */unsigned long long int) var_10))))) ? (var_4) : (((/* implicit */long long int) ((((((((/* implicit */int) (short)-29117)) + (2147483647))) << (((1521966629) - (1521966629))))) | (((((/* implicit */int) var_1)) | (((/* implicit */int) var_7)))))))));
}
