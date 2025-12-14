/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226685
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
    var_18 = ((/* implicit */short) max(((-(((/* implicit */int) ((((/* implicit */int) var_5)) <= (var_4)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_1]);
                    arr_10 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (~((+(-1223988193)))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_0] [i_1] [i_0] [i_3] [i_4 + 1] [i_4 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_2 - 1])) ? (arr_0 [i_1 - 2] [i_2 - 1]) : (arr_0 [i_1 - 1] [i_2 - 1])))) ? (((/* implicit */unsigned int) ((int) arr_0 [i_1 + 1] [i_2 + 1]))) : (arr_0 [i_1 - 4] [i_2 - 1])));
                            arr_16 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((2251799813685247LL) >> (((arr_12 [i_4 + 1] [i_4 - 1] [i_4 + 2] [i_4 + 2] [i_4]) - (11242351295184157515ULL)))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (arr_13 [i_4] [i_4 + 1] [i_2 - 1] [i_1 + 1] [i_1 + 1])))) : (((unsigned int) min((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0])), (arr_0 [0] [i_3]))))));
                            arr_17 [i_4] [i_0] [i_0] [(unsigned char)2] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((arr_14 [i_4 + 2] [i_0] [i_0]) == ((-(arr_14 [i_0] [(short)10] [i_3]))))))));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned char) ((_Bool) ((signed char) ((arr_2 [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_3] [4])))))));
                            arr_20 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1] &= ((/* implicit */short) ((long long int) min((arr_19 [i_2 - 1] [i_5 - 1] [i_2 - 1] [i_1 + 1]), (arr_19 [i_5] [i_5 - 1] [i_2 - 1] [i_1 - 2]))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((unsigned short) ((short) ((((/* implicit */_Bool) 1223988192)) || (((/* implicit */_Bool) arr_2 [9ULL])))));
                            arr_22 [i_3] [i_1] [i_3] [i_3] [i_5 - 1] = arr_13 [i_5] [i_3] [i_0] [i_0] [i_0];
                        }
                        var_20 = ((/* implicit */signed char) (~(((unsigned int) ((((/* implicit */int) arr_4 [i_2] [i_0])) <= (arr_13 [(unsigned short)7] [i_2] [i_1 + 1] [i_0] [i_0]))))));
                        arr_23 [i_1] [i_1] = ((/* implicit */int) ((arr_3 [i_1]) == (((/* implicit */long long int) min((((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_3])), ((+(((/* implicit */int) var_11)))))))));
                        var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((arr_19 [i_0] [(_Bool)1] [i_1] [i_0]), (1223988193)))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_2]), (((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0])))))) : (arr_3 [i_1 - 1]))), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_1] [i_0])) && (var_5)))))));
                        var_22 = ((/* implicit */unsigned int) arr_12 [i_2] [i_2] [i_2] [i_2] [i_2]);
                    }
                    arr_24 [i_2] [i_1] [i_0] [i_0] &= ((((/* implicit */unsigned int) 1223988185)) % (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 3] [i_1 - 4]))) | (arr_2 [i_1]))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_6 = 3; i_6 < 10; i_6 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_7 = 4; i_7 < 13; i_7 += 2) 
        {
            arr_30 [5LL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_28 [i_6]) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_7] [i_6]))) ^ (arr_25 [i_7]))))))));
            var_23 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_7]))) | ((+(((((/* implicit */_Bool) arr_28 [(short)5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_25 [i_6])))))));
            var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)22781)) && (((/* implicit */_Bool) 1223988193)))) && (((/* implicit */_Bool) var_17))));
            var_25 &= ((/* implicit */short) var_6);
        }
        var_26 = (+(((/* implicit */int) ((signed char) 1223988192))));
    }
    for (long long int i_8 = 1; i_8 < 11; i_8 += 3) 
    {
        var_27 ^= ((/* implicit */int) (((!(((/* implicit */_Bool) var_17)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1223988193)))))))) : (arr_32 [i_8])));
        var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_31 [(unsigned short)11])) ? (arr_31 [i_8]) : (((/* implicit */unsigned long long int) var_3)))) - (arr_31 [(_Bool)1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_8)))))))) : (((unsigned long long int) ((arr_32 [i_8]) << (((arr_32 [i_8]) - (6023526250248179801ULL))))))));
        arr_33 [1] = ((/* implicit */int) arr_32 [i_8 + 2]);
    }
    var_29 = (~(((/* implicit */int) ((signed char) min((((/* implicit */unsigned char) var_2)), ((unsigned char)160))))));
}
