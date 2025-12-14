/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217737
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_12 = ((((/* implicit */int) min((arr_0 [i_0] [1]), (arr_0 [i_0] [i_0])))) / (((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? ((-(-776197029))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 4; i_2 < 11; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_13 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) (_Bool)0)))))), (((((/* implicit */_Bool) arr_11 [i_3 + 1] [(unsigned char)0] [(_Bool)1] [i_1] [(unsigned char)0] [i_1])) ? (arr_8 [(_Bool)0] [(_Bool)0] [i_3 - 1] [(_Bool)0]) : (arr_8 [12ULL] [12ULL] [i_3 + 1] [12ULL])))));
                        arr_12 [i_0] = ((/* implicit */unsigned int) ((short) (((!(((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) arr_10 [9U] [9ULL] [9ULL] [9ULL])) ? (((/* implicit */int) (_Bool)1)) : (var_6))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [i_0] [i_0])))))));
                        arr_13 [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))), (((/* implicit */int) arr_9 [(unsigned short)6] [4] [4] [2] [i_0]))));
                    }
                } 
            } 
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (((((/* implicit */unsigned long long int) -776197055)) / (arr_8 [i_0] [8LL] [10U] [4U]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */int) (unsigned short)13532)) : (((/* implicit */int) (_Bool)1)))))));
        }
    }
    for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 2) 
    {
        arr_17 [(unsigned char)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_4 - 2])) / (var_6)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_14 [i_4 + 3])) : (((/* implicit */int) arr_14 [i_4 + 2])))) : (((((/* implicit */_Bool) arr_14 [i_4 + 2])) ? (((/* implicit */int) arr_14 [i_4 - 1])) : (((/* implicit */int) arr_14 [i_4 - 1]))))));
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                var_15 = ((/* implicit */signed char) var_3);
                arr_23 [i_4] [7U] [7U] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((arr_15 [i_6]), (2232097576885125999ULL)))) ? (((/* implicit */int) (_Bool)1)) : ((~(var_6)))))));
            }
            arr_24 [(_Bool)1] [(unsigned char)12] [(unsigned char)12] = min((((/* implicit */unsigned int) ((_Bool) ((unsigned int) var_1)))), ((+(min((((/* implicit */unsigned int) (_Bool)1)), (15U))))));
            arr_25 [i_4] = arr_15 [(unsigned char)13];
        }
        arr_26 [i_4] = ((/* implicit */unsigned long long int) (~(arr_22 [i_4 - 2])));
        arr_27 [1U] [21U] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_19 [i_4 + 2] [i_4])) ? (arr_19 [i_4 + 4] [i_4 + 2]) : (arr_19 [i_4 + 4] [i_4 - 2])))));
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) min((min((arr_15 [i_4 + 3]), (arr_15 [i_4 + 3]))), (((/* implicit */unsigned long long int) ((_Bool) arr_15 [i_4 + 3]))))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) (((+((-(var_9))))) | (((((/* implicit */_Bool) arr_29 [i_7])) ? (((/* implicit */int) arr_29 [i_7])) : (arr_30 [21])))));
        arr_31 [i_7] = ((((/* implicit */_Bool) arr_29 [9LL])) ? (((var_0) - (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_7]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [5ULL]))));
    }
    var_18 &= min((((/* implicit */long long int) ((unsigned char) var_3))), (var_0));
    var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (2232097576885125999ULL)));
}
