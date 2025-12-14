/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218674
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                var_15 += ((/* implicit */int) ((short) ((((((/* implicit */int) var_12)) + (2147483647))) << ((+(((/* implicit */int) var_5)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 8; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                            {
                                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_3 - 1] [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (max((arr_5 [i_0] [i_2] [(unsigned short)3]), (((/* implicit */unsigned int) arr_12 [i_4] [i_0] [i_2] [i_0] [5] [i_0]))))))) ? ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)9] [i_1]))) + (134217696ULL))))) : (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (signed char)-15)))), (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)4)), (var_9))))))))))));
                                var_17 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((((/* implicit */int) var_12)) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_1] [i_1])) - (22774)))))) ? (min((var_2), (((/* implicit */unsigned int) var_12)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_1] [4ULL] [2U] [i_4] [i_3])) <= (((/* implicit */int) (signed char)1)))))))) | (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0]))))))));
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((int) arr_9 [i_2])) : (((/* implicit */int) ((_Bool) (~(((/* implicit */int) (signed char)28))))))));
                                var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_11 [i_0] [i_4] [i_1] [i_3] [i_1] [i_1])) : (((/* implicit */int) (signed char)-23)))), (((/* implicit */int) ((arr_5 [i_0] [i_3] [i_0]) <= (846282683U))))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_3 + 1] [i_1 - 2])), (arr_0 [i_1 + 2]))))));
                            }
                            arr_14 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_2] [i_2])) + (((/* implicit */int) arr_6 [i_0] [i_2] [i_2]))))) ? (min((((((/* implicit */_Bool) arr_3 [i_0] [2LL] [2LL])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0)))), (((/* implicit */int) arr_4 [i_1 + 2] [i_3 + 2])))) : ((((+(((/* implicit */int) (unsigned short)6144)))) / (var_3)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_5 = 1; i_5 < 8; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 3; i_7 < 7; i_7 += 4) 
                        {
                            {
                                arr_23 [i_6] [i_7] [i_1] [i_5 - 1] [i_5] [i_1] [i_6] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned short) arr_17 [i_0] [i_0] [i_6] [i_7])));
                                arr_24 [i_6] [i_1] [i_5] [i_6] [i_7 - 3] = ((/* implicit */int) var_14);
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [(short)0]))));
                                var_21 = ((/* implicit */unsigned short) arr_8 [i_1 - 1] [i_7 + 2] [i_0] [i_7 - 1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_8 = 0; i_8 < 14; i_8 += 4) 
    {
        for (int i_9 = 2; i_9 < 11; i_9 += 4) 
        {
            {
                arr_31 [(unsigned short)4] [i_8] [i_9] = ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_28 [i_9] [i_8])))) / ((-(((((/* implicit */_Bool) var_4)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_8] [i_9]))))))));
                var_22 = max((var_12), (((/* implicit */short) arr_29 [i_8])));
                arr_32 [i_9] = ((/* implicit */short) max((max((((unsigned int) arr_28 [i_8] [i_9])), (var_7))), (((/* implicit */unsigned int) arr_30 [i_8] [(unsigned short)2] [i_9]))));
                arr_33 [i_8] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) arr_28 [(_Bool)1] [i_9 + 3]))) << (((int) arr_28 [i_9 - 1] [i_9 + 3]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_10 = 1; i_10 < 23; i_10 += 4) 
    {
        for (unsigned char i_11 = 2; i_11 < 22; i_11 += 2) 
        {
            {
                var_23 ^= ((/* implicit */_Bool) var_13);
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_12))) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_40 [i_11 - 1] [i_11 + 1] [6U])) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) arr_38 [i_10]))))) ? ((~(((unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_12), (((/* implicit */short) var_6)))))))))))));
                arr_41 [i_10] = ((/* implicit */unsigned short) var_13);
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) (unsigned short)65529)) : (((/* implicit */int) (short)20969))))));
}
