/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40971
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) ((short) max((((/* implicit */short) arr_2 [i_1 - 1])), (arr_1 [i_0 + 2] [i_0 + 2]))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) + (arr_3 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_4 [(signed char)9] [i_1] [i_1 + 1] [i_3])) ? (((/* implicit */long long int) arr_0 [i_0 - 1] [i_0])) : (-2009583963856782094LL))) : (min((((((/* implicit */_Bool) 2097151LL)) ? (-2097152LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (max((((/* implicit */long long int) arr_7 [i_0 + 2] [(unsigned short)9])), (arr_3 [(short)13] [(short)13])))))));
                            var_17 = ((/* implicit */long long int) ((unsigned char) arr_5 [i_0 + 2] [i_0 + 1] [i_0 - 1]));
                            /* LoopSeq 1 */
                            for (short i_4 = 1; i_4 < 12; i_4 += 1) 
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((signed char) min((-1692857398354061897LL), (max((arr_3 [i_0] [i_0]), (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])))))));
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_4 - 1]))))))) > (((max((-8942223112419709301LL), (((/* implicit */long long int) var_1)))) + (((long long int) arr_9 [i_0] [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_0]))))));
                                arr_10 [(short)13] [i_1 - 3] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)123)))) ^ (max((((/* implicit */unsigned int) arr_1 [i_0] [i_2])), (arr_6 [i_0] [i_1] [i_1] [i_3]))))) << (((((long long int) ((unsigned short) arr_9 [i_0] [i_1] [i_2] [i_3] [i_4 + 3] [i_4]))) - (33098LL)))));
                            }
                            /* LoopSeq 2 */
                            for (unsigned char i_5 = 3; i_5 < 12; i_5 += 2) 
                            {
                                var_20 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_5 - 3] [6U] [5LL] [i_5 - 3] [i_5] [5LL])) << ((((+(arr_13 [i_5] [i_3] [i_2] [i_1] [i_0 + 1]))) + (1665508013)))))) ? (((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5])) : ((((_Bool)1) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_3] [i_3])) ? (((/* implicit */int) arr_14 [i_0] [3] [i_3] [3] [11ULL] [i_1])) : (arr_13 [10LL] [i_0] [i_2] [i_0] [i_0]))) : (((/* implicit */int) arr_11 [i_0 - 1] [i_3] [i_2] [i_3] [i_0 - 1]))))));
                                var_21 = ((/* implicit */unsigned long long int) var_8);
                                arr_15 [i_3] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (+(var_13)));
                            }
                            for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
                            {
                                var_22 -= ((/* implicit */signed char) -8942223112419709315LL);
                                arr_19 [i_0 + 2] [i_2] = ((/* implicit */unsigned char) 11744192026035338512ULL);
                                var_23 = ((/* implicit */unsigned int) max((((unsigned long long int) arr_2 [i_0])), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 - 1])))))));
                                var_24 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) var_10)))), (((/* implicit */int) ((signed char) arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 1])))));
                                arr_20 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((((((/* implicit */_Bool) arr_9 [(short)2] [4LL] [i_1] [2ULL] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 3] [i_1 + 1] [i_1 - 3]))) : (var_6))) & (((/* implicit */long long int) ((unsigned int) arr_13 [i_1] [(_Bool)1] [i_1] [i_1 + 1] [i_3]))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (+((+(max((var_13), (((/* implicit */long long int) (unsigned char)19)))))))))));
}
