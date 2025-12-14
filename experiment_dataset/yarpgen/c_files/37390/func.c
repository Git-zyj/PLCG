/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37390
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
    var_11 += ((/* implicit */unsigned char) min(((+(var_8))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_0), (var_5)))))))));
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */unsigned long long int) ((var_0) >> (((((/* implicit */int) var_7)) - (8583)))))), (var_1))) : ((-(var_8)))));
    var_13 -= ((/* implicit */unsigned char) max((min(((-(var_8))), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) ^ (((var_4) * (((/* implicit */int) var_9)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        arr_10 [(short)5] [i_1] [5ULL] [i_1] = ((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_1 [(unsigned char)4])))))));
                        var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((var_1) < (((/* implicit */unsigned long long int) arr_4 [i_2]))))) : (((/* implicit */int) ((var_2) < (((/* implicit */int) arr_9 [i_3] [(signed char)9] [i_3] [i_3] [i_3] [9U])))))))) ? ((~(var_10))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_0])))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) arr_1 [i_0]))))), (((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) > (((/* implicit */int) arr_1 [i_0]))))) ^ (((/* implicit */int) arr_1 [i_0]))))));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) / (arr_4 [i_0])))) == (((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) arr_9 [i_0] [i_0] [4LL] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [10ULL]))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (var_1))) : (((var_8) >> (((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(signed char)9] [i_0])) - (4593))))))))))));
    }
    for (long long int i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */short) var_8);
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            arr_18 [i_4] [i_4] [(unsigned char)1] = (~(((/* implicit */int) max((arr_15 [i_4] [i_5]), (((/* implicit */signed char) arr_14 [i_4]))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                arr_21 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_17 [i_4]);
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4] [i_6])) || (((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(signed char)11]))))))));
            }
            for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                arr_25 [i_7] [i_7] [(unsigned short)2] [i_7] &= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_4]))));
                arr_26 [i_4] [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_4] [i_5] [i_7] [i_7])) ? (((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_24 [i_7] [i_7] [i_4] [i_4]))))), (((unsigned long long int) arr_16 [i_4]))));
                arr_27 [i_4] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_7] [i_4] [i_7] [i_4])) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_4]))))) ? (((/* implicit */int) ((arr_17 [i_4]) > (arr_17 [(unsigned short)0])))) : (var_4))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_7] [i_7] [i_7] [i_7])))))));
            }
        }
        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((((/* implicit */int) min((arr_19 [(unsigned short)0]), (((/* implicit */short) arr_13 [i_4]))))) % (((/* implicit */int) arr_28 [i_4] [i_4] [i_4])))) == ((~(((var_9) ? (((/* implicit */int) arr_28 [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [i_8])))))))))));
            var_19 = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)-112)))) ? (((((((/* implicit */_Bool) arr_29 [i_4])) && (((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((int) arr_20 [i_8] [i_8] [i_8] [i_8]))) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) <= ((~(arr_31 [i_4])))))))));
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_8) ^ (((/* implicit */unsigned long long int) arr_31 [(unsigned short)4]))))) ? ((+(var_4))) : (((((/* implicit */int) var_7)) * (((/* implicit */int) arr_12 [4LL] [i_8]))))))) - (var_5))))));
        }
        var_21 = (i_4 % 2 == 0) ? (((((((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [i_4]))) > (arr_17 [i_4]))) ? (((/* implicit */unsigned long long int) arr_17 [i_4])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [i_4]))) - (var_1))))) << ((((~(((((/* implicit */_Bool) arr_31 [i_4])) ? (((/* implicit */int) arr_15 [i_4] [i_4])) : (var_4))))) + (69))))) : (((((((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [i_4]))) > (arr_17 [i_4]))) ? (((/* implicit */unsigned long long int) arr_17 [i_4])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [i_4]))) - (var_1))))) << ((((((~(((((/* implicit */_Bool) arr_31 [i_4])) ? (((/* implicit */int) arr_15 [i_4] [i_4])) : (var_4))))) + (69))) - (73)))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((int) ((((/* implicit */int) arr_14 [i_4])) <= (((/* implicit */int) arr_14 [i_4]))))))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_12 [i_4] [i_4]))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)18))))));
    }
    for (long long int i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
    {
        arr_34 [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_23 [i_9] [i_9] [i_9] [i_9])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_9]))) : (max((((/* implicit */long long int) arr_28 [i_9] [i_9] [i_9])), (((((/* implicit */_Bool) arr_32 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_9]))) : (arr_32 [i_9])))))));
        arr_35 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_9]))))) ^ (((((/* implicit */_Bool) arr_32 [i_9])) ? (((/* implicit */int) arr_13 [i_9])) : (((/* implicit */int) arr_22 [(short)1] [i_9] [i_9]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [8LL] [i_9])) + (((/* implicit */int) arr_12 [(short)4] [i_9]))))) : (max((((/* implicit */unsigned long long int) arr_33 [i_9])), (var_1)))));
        arr_36 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_9] [i_9] [i_9])) % (((/* implicit */int) var_7))))) ? (arr_17 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_9]))) == (arr_23 [i_9] [i_9] [i_9] [i_9])))))))) ? (((((/* implicit */unsigned long long int) min((2357436888U), (((/* implicit */unsigned int) 2))))) ^ (max((((/* implicit */unsigned long long int) arr_20 [i_9] [i_9] [i_9] [i_9])), (var_10))))) : ((-(((unsigned long long int) arr_30 [i_9] [i_9] [(unsigned short)4]))))));
        var_24 += ((/* implicit */int) ((((((/* implicit */_Bool) arr_28 [i_9] [i_9] [i_9])) && (((/* implicit */_Bool) arr_28 [i_9] [i_9] [i_9])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_9])) ^ (((/* implicit */int) arr_29 [i_9])))))));
    }
}
