/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195056
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) 63LL))));
    var_19 = ((unsigned long long int) var_8);
    var_20 = ((/* implicit */int) min((var_20), (((((((/* implicit */_Bool) min((562949953413120ULL), (((/* implicit */unsigned long long int) var_3))))) ? (((((/* implicit */int) (short)5726)) + (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_3)))))) - ((~(((/* implicit */int) min((var_5), (((/* implicit */short) var_13)))))))))));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_11))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_22 = -63LL;
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) max(((+(arr_9 [i_2 - 2] [3U] [i_2 - 2]))), ((+(((/* implicit */int) var_0)))))))));
                            /* LoopSeq 3 */
                            for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                            {
                                arr_15 [i_0] [i_0] [i_2] [(short)14] [i_0] [i_1] [i_2] &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_5 [i_2] [i_3 - 1] [i_4]) : (((/* implicit */int) (short)13067)))) & (arr_5 [i_0] [i_1 - 3] [i_2])));
                                var_24 = max(((~(((/* implicit */int) (short)13047)))), (((/* implicit */int) (unsigned char)19)));
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) == (max((((/* implicit */unsigned int) ((unsigned short) 1482637170))), (var_9))))))));
                            }
                            for (short i_5 = 4; i_5 < 12; i_5 += 1) 
                            {
                                arr_19 [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3] [i_5] [i_5 - 2] [i_3] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [i_2 + 1])) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_3] [15ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_17)))) : (max((234881024U), (((/* implicit */unsigned int) arr_2 [i_2])))))) : (max((((/* implicit */unsigned int) var_12)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_10)))))));
                                arr_20 [i_0] |= ((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) arr_10 [(short)8] [i_3] [i_3] [i_3])))));
                                var_26 = ((/* implicit */unsigned short) min((var_26), (var_15)));
                                var_27 = ((/* implicit */long long int) (unsigned char)237);
                                var_28 = ((/* implicit */unsigned short) min(((~(var_2))), (((/* implicit */unsigned int) ((arr_9 [i_5 - 4] [i_2 + 1] [i_1 + 3]) < (((/* implicit */int) var_5)))))));
                            }
                            for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 2) 
                            {
                                var_29 ^= ((/* implicit */short) var_7);
                                var_30 = (+(arr_23 [i_1] [i_1] [(unsigned short)0] [i_1] [6LL] [10ULL] [i_1]));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
                            {
                                arr_32 [2ULL] [i_9] [i_7] [2ULL] [(unsigned char)3] [i_7] = max((((/* implicit */unsigned short) var_16)), (((unsigned short) max((arr_13 [(unsigned char)3] [i_9]), (((/* implicit */short) var_8))))));
                                var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 1482637170)) ? (((/* implicit */int) arr_6 [i_1 + 2] [i_1 - 3] [12U])) : (((/* implicit */int) (!(((/* implicit */_Bool) 9075999458580228762LL))))))))))));
                                var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_31 [i_9] [i_1] [i_0] [(short)13] [(short)13] [i_9])) ? (((/* implicit */long long int) arr_22 [i_7] [i_0])) : (9075999458580228762LL))))) < (arr_5 [i_0] [i_0] [i_0]))))));
                                var_33 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_17 [(short)3] [i_8] [i_7] [i_1 - 2] [3] [i_0])), (arr_28 [i_7] [i_1])))) || (((/* implicit */_Bool) max((arr_17 [i_0] [i_0] [(unsigned char)2] [(short)12] [(unsigned char)10] [i_9]), (((/* implicit */int) (signed char)26))))))))) ^ (234881040U)));
                            }
                            /* vectorizable */
                            for (long long int i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
                            {
                                var_34 = ((/* implicit */unsigned short) ((arr_9 [i_0] [i_1 - 1] [i_8]) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_10] [i_8] [i_7] [(_Bool)1] [i_0])))))));
                                arr_37 [i_10] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_34 [i_1] [i_1 - 2] [i_1] [i_1 + 1] [i_1 - 3]))));
                                var_35 = ((/* implicit */int) min((var_35), (arr_31 [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 3] [i_1 + 3] [i_1 + 1])));
                                var_36 -= ((/* implicit */unsigned char) arr_35 [(short)5]);
                                var_37 = ((/* implicit */short) (unsigned char)249);
                            }
                            arr_38 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((signed char) 63LL))) - (((int) (short)21348)))) % ((-(((/* implicit */int) arr_34 [i_0] [i_0] [i_7] [i_1 - 2] [(unsigned char)14]))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_11 = 1; i_11 < 12; i_11 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 13; i_12 += 3) 
                    {
                        for (int i_13 = 0; i_13 < 16; i_13 += 4) 
                        {
                            {
                                var_38 = ((/* implicit */signed char) max(((+(((/* implicit */int) arr_36 [i_1 - 3] [i_11 - 1] [i_12 + 3] [i_11 - 1] [i_12])))), (((/* implicit */int) ((unsigned char) 2006665868)))));
                                var_39 ^= ((/* implicit */unsigned short) (-(-5196081884613765564LL)));
                                var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) (!((!(var_7))))))));
                            }
                        } 
                    } 
                    var_41 = max(((-(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-1)))))), (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned char) arr_3 [i_0] [i_0])), (arr_10 [i_0] [i_0] [(unsigned char)7] [i_11]))))));
                    var_42 = ((/* implicit */int) max((4060086278U), (((/* implicit */unsigned int) var_14))));
                }
                arr_48 [i_0] = ((/* implicit */unsigned char) max((60LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 + 3])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((var_7) ? (((/* implicit */int) arr_47 [i_1 + 1] [(short)11] [(short)11] [i_0])) : (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
}
