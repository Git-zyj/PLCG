/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234884
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((var_15) <= (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))))) : (min((((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_8))))));
    var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (var_13)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0]))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((unsigned long long int) arr_1 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_1 [i_0]))))))) - (((/* implicit */int) (_Bool)1))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) ((max((6481954740611095353ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1))))) << (((var_13) - (244488431U)))))))))));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0]))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (unsigned short)36637))))) : (((((_Bool) (unsigned char)243)) ? ((~(3065256897765420096LL))) : (((/* implicit */long long int) ((arr_0 [i_0]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))))))));
    }
    var_21 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */int) (+(arr_4 [i_1])));
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_5 [i_1] [i_1])))) ? (max((max((arr_4 [i_1]), (((/* implicit */unsigned long long int) var_11)))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_5 [i_1] [i_1]))))) : (((((/* implicit */_Bool) 16551394425178954179ULL)) ? (arr_4 [i_1]) : (arr_4 [i_1])))));
        arr_8 [i_1] [i_1] = ((/* implicit */int) min((max((arr_4 [i_1]), (((/* implicit */unsigned long long int) max(((short)29137), (((/* implicit */short) (_Bool)1))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)15)))))));
    }
    for (short i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 0)) ? (((arr_9 [i_2] [i_2]) ? (((/* implicit */int) arr_11 [i_2])) : (((((/* implicit */int) var_14)) * (((/* implicit */int) arr_10 [i_2])))))) : (((((/* implicit */_Bool) ((2375517257U) >> (((((/* implicit */int) (unsigned short)21947)) - (21935)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 3205716935U)) > (18040406145051681155ULL)))))))))));
        arr_12 [i_2] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) -8445516336011142881LL)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_11 [i_2]))))));
        arr_13 [i_2] = ((/* implicit */_Bool) ((min((arr_9 [i_2] [i_2]), (arr_10 [(signed char)7]))) ? (((/* implicit */int) max((max((arr_11 [i_2]), (((/* implicit */unsigned char) arr_10 [i_2])))), (arr_11 [i_2])))) : (max((((/* implicit */int) max((((/* implicit */unsigned char) arr_10 [i_2])), (var_4)))), (((((/* implicit */int) arr_10 [1U])) >> (((/* implicit */int) arr_11 [i_2]))))))));
        var_23 = ((/* implicit */_Bool) 0);
    }
    for (short i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(134217727U)))) - (max((16539111721837007129ULL), (2527239915373038325ULL)))));
        var_24 *= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) max(((unsigned char)243), (((/* implicit */unsigned char) arr_9 [i_3] [i_3]))))) > (((/* implicit */int) arr_10 [15U])))));
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            arr_20 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_15 [i_3]), (arr_15 [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))) : (18446744073709551600ULL)));
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5382392040255323372LL)) ? (min((var_13), (((/* implicit */unsigned int) arr_14 [i_3])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((+(((arr_10 [6LL]) ? (9223372036854775804LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26866)))))))));
            arr_21 [i_3] = ((/* implicit */signed char) (short)-12869);
            arr_22 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_19 [i_3] [i_4]))));
        }
    }
}
