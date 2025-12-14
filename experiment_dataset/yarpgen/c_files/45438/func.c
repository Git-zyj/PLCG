/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45438
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_1 [i_0])) * (max((((/* implicit */long long int) var_6)), (var_1))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [0ULL] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) 4294967295U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned char)8])) ? (arr_1 [i_0]) : (arr_1 [i_0])))))))) : (var_9)));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) ? (min((var_7), (((/* implicit */long long int) 4294967286U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 16273744710106137969ULL)) ? (((/* implicit */int) (unsigned char)0)) : ((-2147483647 - 1)))))));
        arr_5 [i_0] = (!(((/* implicit */_Bool) 10U)));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 2; i_3 < 13; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_13 [5LL] [i_2] [(unsigned short)8] [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (min((var_2), (18U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)6699)) : (((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((var_2), (((/* implicit */unsigned int) arr_8 [10LL] [(_Bool)1] [i_1]))))))) : (((unsigned int) arr_14 [i_3 - 2] [i_3 - 1] [i_4] [i_3 - 2] [i_4]))));
                            arr_16 [i_0] [(unsigned short)1] [(unsigned short)1] [i_0] [i_2] [i_0] = ((((((/* implicit */_Bool) arr_2 [i_3])) ? (((((/* implicit */int) arr_6 [i_3])) ^ (((/* implicit */int) arr_8 [i_1] [1LL] [i_2])))) : (((/* implicit */int) var_8)))) + (((/* implicit */int) arr_6 [(unsigned short)4])));
                            var_14 *= ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_2))))) ? ((-(min((1199495418613542031ULL), (((/* implicit */unsigned long long int) arr_2 [i_0])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_10 [(unsigned short)6] [(unsigned short)6] [i_2]) ? (3312348511U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)96)))))) ? (1595136839786471738LL) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((2628444159U) - (2628444146U))))))))));
                        }
                    } 
                } 
            } 
            arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13U)) ? (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */long long int) (-2147483647 - 1))))) : (((/* implicit */long long int) var_2))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_8 [(unsigned short)13] [i_1] [(signed char)1])))) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_13 [(_Bool)1] [(_Bool)1] [i_1] [7] [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) ((arr_13 [i_0] [13U] [i_0] [i_0] [i_1]) != (var_10))))))));
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned int) (_Bool)1);
        /* LoopNest 3 */
        for (unsigned int i_6 = 4; i_6 < 23; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_30 [i_5] [(unsigned short)5] [i_6] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) << (((((arr_25 [(short)0] [i_7] [i_8]) + (1101572382))) - (24))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? (((((/* implicit */_Bool) ((var_1) | (((/* implicit */long long int) arr_27 [i_5]))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) (~(((((/* implicit */int) var_5)) - (((/* implicit */int) var_0)))))))));
                        arr_31 [i_5] [i_5] [i_6] [i_6] [i_8] = ((/* implicit */signed char) var_9);
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 2; i_9 < 24; i_9 += 4) 
                        {
                            arr_34 [i_5] [14LL] [i_5] [i_6] [i_5] = 2147482624U;
                            var_15 = ((/* implicit */_Bool) ((((var_11) == (((/* implicit */long long int) ((/* implicit */int) var_5))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_16 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_33 [i_5] [i_5] [i_5] [i_8])), ((~(((((/* implicit */_Bool) arr_24 [i_5] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_5] [i_5] [9LL] [i_10]))) : (var_2)))))));
                            var_17 -= ((/* implicit */long long int) var_5);
                        }
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned short) ((6907241371958113039LL) == (((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */int) (_Bool)1)) << (((var_1) + (8705728313687472298LL))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (_Bool)1))))))))));
        var_19 = ((/* implicit */short) var_6);
    }
    var_20 = ((/* implicit */unsigned char) var_10);
}
