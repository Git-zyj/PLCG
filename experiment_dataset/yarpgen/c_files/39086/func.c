/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39086
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_11 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                for (long long int i_3 = 4; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_12 = ((/* implicit */unsigned int) (+(arr_4 [i_0] [i_1] [i_3 + 2])));
                        var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)20679)) + (((/* implicit */int) (unsigned short)24169))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (2305843009213693951LL) : (4611686018427387903LL)))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_0]))) : (((/* implicit */int) var_4)));
    }
    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 881855095))));
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            {
                arr_17 [i_4] [i_5] = ((((unsigned long long int) ((1579939633U) / (((/* implicit */unsigned int) -881855084))))) + (((((/* implicit */_Bool) 881855095)) ? (10010016414160139838ULL) : (((/* implicit */unsigned long long int) -5721395387380970742LL)))));
                var_15 ^= (~(((((/* implicit */_Bool) (-(var_10)))) ? (((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */unsigned long long int) -881855095)) : (arr_9 [i_4] [i_4] [i_4] [i_4]))) : (max((arr_16 [i_4]), (((/* implicit */unsigned long long int) var_8)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 1 */
    for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            var_17 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((var_9) & (((/* implicit */long long int) -881855095))))) ? (((/* implicit */long long int) arr_10 [i_6] [i_6] [i_6] [i_6] [i_6])) : (((var_5) ^ (var_9))))), (((/* implicit */long long int) ((int) ((((/* implicit */unsigned long long int) var_9)) & (arr_16 [12ULL])))))));
            arr_24 [i_6] [i_7] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_5 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) arr_2 [i_6])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) * (arr_4 [i_6] [i_6] [i_6])));
            var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_13 [i_7] [i_6])))));
        }
        for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            var_19 ^= ((/* implicit */int) min((min((arr_9 [i_6] [i_8] [i_8] [i_6]), (arr_9 [20LL] [i_6] [i_6] [i_8]))), (((((/* implicit */_Bool) arr_0 [i_8])) ? (((unsigned long long int) arr_2 [i_6])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 17004920729351625209ULL))))))));
            var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)177)) << (((4279261332U) - (4279261313U)))))) ? (((((/* implicit */_Bool) arr_15 [i_6])) ? (max((((/* implicit */long long int) var_0)), (8080345379480170439LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_5 [21ULL])))))) : (((/* implicit */long long int) ((unsigned int) min((var_2), (var_7))))));
        }
        for (unsigned int i_9 = 2; i_9 < 18; i_9 += 1) 
        {
            arr_29 [i_6] = min((arr_22 [i_9 + 2]), (((unsigned long long int) arr_13 [i_9 - 2] [i_6])));
            /* LoopNest 2 */
            for (long long int i_10 = 3; i_10 < 18; i_10 += 4) 
            {
                for (unsigned int i_11 = 0; i_11 < 20; i_11 += 3) 
                {
                    {
                        arr_35 [i_10] [i_10] [i_6] [i_9] [i_6] = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_6])))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 2) 
                        {
                            arr_38 [i_6] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_33 [i_10 + 2] [2ULL] [i_10] [i_6] [i_12] [i_9 + 1])) % (var_6)));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_23 [i_12 + 2])) : (arr_16 [i_6])));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 3) 
                        {
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 881855113)) ? (15229125838168409327ULL) : (((/* implicit */unsigned long long int) -881855095))))) ? (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_36 [i_6] [9ULL] [8ULL] [i_11] [i_13] [9ULL])) : (arr_31 [i_6]))), (((/* implicit */unsigned long long int) max((arr_15 [i_6]), (arr_37 [i_13] [i_11] [7ULL] [i_9] [18LL])))))) : (((/* implicit */unsigned long long int) (-(-881855096))))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_4 [i_10 + 2] [i_10 + 2] [i_10 - 3]))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_33 [i_10 + 2] [i_10] [i_10] [i_6] [i_10 - 1] [i_10])), (arr_32 [i_6])))) : (((arr_4 [i_10 - 3] [i_9 - 1] [i_9 + 1]) - (((/* implicit */unsigned long long int) arr_33 [i_6] [i_9 - 2] [i_10] [i_6] [i_13] [i_10 - 1]))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 2) 
                        {
                            arr_43 [i_6] [i_6] [i_6] [i_14] = arr_31 [i_6];
                            arr_44 [i_6] [i_6] = ((/* implicit */int) arr_0 [i_11]);
                            arr_45 [i_6] [i_11] [i_10] [i_9 - 2] [i_9] [i_6] [i_6] = ((unsigned long long int) arr_4 [i_9] [i_9] [i_9]);
                        }
                        /* vectorizable */
                        for (unsigned short i_15 = 2; i_15 < 18; i_15 += 1) 
                        {
                            arr_49 [i_6] [i_9] [13U] [i_11] [i_15] = 562523338U;
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), ((~((+(arr_46 [i_9] [12LL] [i_9] [i_9 - 2] [i_9])))))));
                            var_25 |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_6)) ? (arr_3 [i_9]) : (((/* implicit */long long int) arr_10 [i_6] [i_6] [i_6] [i_6] [i_6]))))));
                        }
                    }
                } 
            } 
        }
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 881855096))) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) (unsigned char)0))));
    }
}
