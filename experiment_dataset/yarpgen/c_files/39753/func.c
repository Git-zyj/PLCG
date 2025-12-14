/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39753
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
    var_11 = ((((unsigned long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) -6962398547651731968LL))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)-19634), (((/* implicit */short) var_6))))) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */_Bool) 6962398547651731966LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)91)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) - (arr_1 [i_0] [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */int) min((min((((/* implicit */long long int) arr_0 [i_1])), (var_10))), (((((/* implicit */long long int) var_2)) / ((((_Bool)0) ? (((/* implicit */long long int) var_7)) : (arr_1 [(unsigned short)0] [i_1])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_14 = ((/* implicit */unsigned int) arr_7 [(signed char)6] [i_1] [i_2]);
            var_15 = ((/* implicit */signed char) var_7);
            arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned short) arr_1 [i_1] [i_1]));
        }
        for (int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                var_16 = ((/* implicit */long long int) (+(((((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1]))) < (5222523636716947840LL))) ? (max((((/* implicit */unsigned long long int) (unsigned char)102)), (16008937264260223191ULL))) : (((/* implicit */unsigned long long int) var_8))))));
                arr_16 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max((arr_11 [i_1] [i_1] [i_1]), (arr_11 [i_1] [i_1] [i_1]))))) | ((+(9223372036854775807LL)))));
                arr_17 [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)91)) && (((/* implicit */_Bool) (unsigned char)109)))) ? (((/* implicit */int) (unsigned short)47287)) : (((/* implicit */int) ((((/* implicit */_Bool) 6962398547651731967LL)) && (((((/* implicit */_Bool) var_7)) || (arr_6 [i_1] [i_3]))))))));
                arr_18 [i_1] [i_3] = ((/* implicit */long long int) min((((/* implicit */int) max(((unsigned char)241), (max(((unsigned char)169), (((/* implicit */unsigned char) arr_11 [i_4] [i_3] [i_1]))))))), (arr_7 [i_4] [i_3] [i_1])));
            }
            for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                var_17 ^= max((min((((/* implicit */long long int) arr_2 [i_1] [i_3])), (arr_19 [i_1] [i_3] [i_3]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_5])) ? (((/* implicit */int) arr_2 [i_3] [i_5])) : (((/* implicit */int) var_6))))));
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    for (int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        {
                            arr_28 [i_3] [10LL] = ((/* implicit */signed char) (unsigned char)83);
                            var_18 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1562283960)) ? (arr_14 [i_1] [i_1] [(short)11] [i_1]) : (1382170796398289377ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [(unsigned char)7] [i_6] [i_5] [i_3] [i_1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))) ^ (var_2))))), (((/* implicit */unsigned int) -2114953398))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) arr_11 [i_1] [i_3] [i_5]);
                var_20 = ((/* implicit */unsigned int) ((max((arr_1 [i_1] [i_3]), (((((/* implicit */_Bool) arr_0 [i_1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41785))))))) + (((((/* implicit */long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_24 [i_1] [i_3] [i_5]))))) - (((long long int) (unsigned char)243))))));
            }
            var_21 = ((/* implicit */unsigned int) (signed char)-104);
            arr_29 [i_1] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_3] [i_1] [i_1] [i_1])) ? (arr_14 [i_3] [i_3] [(unsigned short)12] [i_3]) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1])) >> (((((/* implicit */int) arr_2 [i_1] [i_1])) - (160)))))), (arr_1 [i_1] [i_3]))))));
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) (+(arr_25 [i_8] [i_8] [i_8] [i_8] [i_8])));
        arr_33 [i_8] [(short)13] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_3)) / (arr_1 [i_8] [i_8])));
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_5)) : (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_30 [i_8]) <= (((/* implicit */long long int) var_5)))))) : (var_9)));
        var_24 = ((/* implicit */_Bool) arr_15 [i_8] [i_8] [i_8] [i_8]);
    }
    var_25 = ((/* implicit */unsigned char) var_9);
}
