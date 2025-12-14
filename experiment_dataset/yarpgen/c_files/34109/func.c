/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34109
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (+(min((var_6), (((/* implicit */int) (unsigned char)0))))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) (unsigned char)255))))) : (((/* implicit */int) ((unsigned char) ((short) var_8))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    for (unsigned char i_4 = 1; i_4 < 8; i_4 += 4) 
                    {
                        {
                            arr_13 [(unsigned char)0] [(unsigned char)0] [i_3] [i_3] [i_4 + 1] &= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned long long int) var_6)), (182622914953775733ULL))) : (max((4593671619917905920ULL), (((/* implicit */unsigned long long int) 839523554)))))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_3] [i_1] [(unsigned char)6] [4ULL] [4ULL] [i_3] [i_4])) == (((/* implicit */int) arr_7 [i_3] [8] [i_3] [i_4 + 2])))))) : (((unsigned long long int) var_5))))))));
                        }
                    } 
                } 
            } 
            var_22 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_18), (((/* implicit */unsigned long long int) (_Bool)1)))))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (501343164756106627ULL))));
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                for (unsigned char i_6 = 3; i_6 < 9; i_6 += 2) 
                {
                    for (int i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), ((-(((((/* implicit */_Bool) var_3)) ? (var_13) : (var_18)))))));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0 - 2] [i_0 - 2] [i_1 - 1] [i_6 - 3])) ? (arr_12 [i_6 - 3] [(unsigned char)7] [i_1] [i_1 + 2] [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (signed char)64)))))) : (((/* implicit */int) var_7)))))));
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_20 [i_1 + 2] [i_1 + 2] [i_7])), (((unsigned long long int) ((unsigned long long int) arr_16 [i_0] [i_1] [i_5] [i_0] [i_7]))))))));
                            arr_24 [i_0 - 1] [(_Bool)1] [6ULL] [(_Bool)1] [i_6 - 1] [(_Bool)0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 576320014815068160ULL)) ? (min((12426449954822263307ULL), (((/* implicit */unsigned long long int) var_17)))) : (((unsigned long long int) arr_10 [i_0 - 2] [i_1 - 1] [6ULL] [6ULL] [i_5]))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned long long int) arr_5 [i_0 + 2] [(signed char)8]);
            var_27 *= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) arr_21 [(short)0] [i_0] [i_0 - 3] [i_1 - 2] [i_1])) - (((/* implicit */int) ((var_9) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
        }
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((unsigned char) var_8)))));
        arr_25 [i_0 + 3] [i_0] = ((/* implicit */short) (-(((arr_4 [i_0 - 3]) / (arr_4 [i_0 + 2])))));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 1; i_8 < 13; i_8 += 4) 
    {
        arr_28 [i_8 + 3] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) >> (((18446744073709551610ULL) - (18446744073709551597ULL)))));
        var_29 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (arr_27 [i_8] [2ULL])))) ? (((/* implicit */unsigned long long int) (+(-1876071642)))) : (arr_26 [i_8 - 1])));
        var_30 ^= ((/* implicit */short) arr_26 [i_8]);
        arr_29 [i_8 + 3] = ((/* implicit */unsigned char) (short)8741);
        arr_30 [i_8 + 3] [i_8] = ((/* implicit */_Bool) var_16);
    }
    for (unsigned char i_9 = 1; i_9 < 12; i_9 += 3) 
    {
        arr_33 [i_9 - 1] [i_9] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)133)))) && (((/* implicit */_Bool) (unsigned char)1))));
        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((unsigned char) min(((-(((/* implicit */int) arr_31 [i_9 - 1] [i_9 - 1])))), (((/* implicit */int) ((_Bool) (_Bool)0)))))))));
    }
    for (unsigned char i_10 = 0; i_10 < 16; i_10 += 4) 
    {
        var_32 = ((/* implicit */unsigned long long int) (short)-4311);
        var_33 = ((/* implicit */_Bool) max(((+(arr_27 [i_10] [i_10]))), (((((/* implicit */_Bool) arr_27 [i_10] [i_10])) ? (arr_27 [2] [i_10]) : (arr_27 [i_10] [i_10])))));
    }
}
