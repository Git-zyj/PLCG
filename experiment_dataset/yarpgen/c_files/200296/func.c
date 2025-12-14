/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200296
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
    for (long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_0 - 1]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64106)))))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */long long int) var_1)) : (arr_0 [i_0 + 1]))) : (((arr_0 [i_0 + 1]) | (arr_0 [i_0 - 1])))));
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((((((/* implicit */int) (unsigned short)1432)) > (((/* implicit */int) (unsigned short)64106)))) ? (((((/* implicit */_Bool) arr_2 [(signed char)6])) ? (arr_2 [(_Bool)1]) : (arr_2 [22U]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_3 [i_0] [i_1])))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))))))));
            }
        } 
    } 
    var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)64106)) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) (!(var_3)))) : (((((/* implicit */int) (unsigned char)185)) | (((/* implicit */int) var_7)))))) : (max((((/* implicit */int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)1429)))), ((-(((/* implicit */int) var_6))))))));
    /* LoopSeq 4 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2 + 1])) >> (((((/* implicit */int) arr_6 [i_2 + 1])) - (12)))))) ? (((((/* implicit */_Bool) arr_7 [i_2] [i_2 + 1])) ? (arr_7 [i_2] [i_2 + 1]) : (arr_7 [i_2] [i_2 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1429)))));
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned short)1417)) ? (((/* implicit */unsigned long long int) arr_0 [i_2 + 1])) : (((((/* implicit */_Bool) (unsigned char)196)) ? (arr_4 [(signed char)0] [(signed char)0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
    }
    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 4) 
    {
        var_15 = max((((((/* implicit */_Bool) ((unsigned int) arr_3 [i_3 + 4] [i_3]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_0 [i_3 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)71)))))))), ((_Bool)1));
        /* LoopSeq 1 */
        for (signed char i_4 = 2; i_4 < 14; i_4 += 1) 
        {
            arr_13 [i_3] [(short)1] = ((/* implicit */long long int) ((((/* implicit */int) max((arr_11 [i_3 - 2] [i_3 + 2]), (arr_11 [i_3 - 2] [i_3 + 2])))) ^ (((/* implicit */int) arr_11 [i_3 - 2] [i_3 + 2]))));
            var_16 = ((/* implicit */short) (((~(((/* implicit */int) arr_11 [i_3 + 4] [i_3 + 1])))) - (((/* implicit */int) (_Bool)1))));
            var_17 &= ((/* implicit */long long int) ((unsigned char) arr_11 [i_3 - 2] [i_4 - 2]));
        }
    }
    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        var_18 ^= var_4;
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) max(((+(((/* implicit */int) max((((/* implicit */short) (signed char)-19)), (arr_15 [i_5])))))), ((((((-(((/* implicit */int) (unsigned char)184)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_5] [(unsigned char)11])) || (((/* implicit */_Bool) arr_7 [i_5] [i_5]))))))))))));
        var_20 ^= ((/* implicit */short) min(((-(arr_2 [i_5]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)45640)) : (((/* implicit */int) arr_1 [i_5] [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (max((((/* implicit */unsigned int) var_6)), (arr_7 [i_5] [i_5]))))))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) arr_7 [(signed char)0] [(signed char)10])) ? (((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) (signed char)-36)) : (-1)))) : (17352198893967106923ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
    }
    for (short i_6 = 0; i_6 < 12; i_6 += 3) 
    {
        arr_19 [i_6] = ((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_9))));
        arr_20 [i_6] = ((/* implicit */unsigned long long int) arr_10 [i_6] [i_6]);
        var_22 *= ((/* implicit */signed char) (+(((/* implicit */int) arr_17 [i_6]))));
        var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) ((signed char) arr_6 [i_6])))))), (((((/* implicit */_Bool) arr_3 [i_6] [i_6])) ? (arr_3 [i_6] [i_6]) : (arr_3 [i_6] [i_6])))));
        arr_21 [i_6] [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
    }
    var_24 = ((/* implicit */unsigned long long int) var_9);
}
