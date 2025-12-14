/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232827
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_13 = ((min((arr_2 [i_0] [i_0]), (arr_1 [i_0]))) % ((+(arr_1 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) max((((unsigned long long int) min((5657928684030850193LL), (((/* implicit */long long int) (signed char)102))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((signed char)-74), (((/* implicit */signed char) (_Bool)1))))) && (((((/* implicit */long long int) ((/* implicit */int) var_0))) != (arr_2 [i_0] [i_0]))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max((var_10), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_10))))))))));
        arr_7 [i_1] = ((/* implicit */_Bool) var_8);
        var_14 += ((/* implicit */unsigned int) arr_1 [i_1]);
    }
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 19; i_2 += 2) 
    {
        arr_11 [i_2] [(unsigned char)11] = (_Bool)1;
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (long long int i_4 = 3; i_4 < 18; i_4 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 4; i_5 < 17; i_5 += 2) 
                    {
                        var_15 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_4 - 1] [i_4 - 2] [i_4 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))));
                        arr_18 [i_2] [i_3] [i_3] [i_5] [i_5] [i_5] |= ((/* implicit */unsigned short) ((signed char) (+(((/* implicit */int) var_8)))));
                        var_16 = ((/* implicit */long long int) ((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2 + 1])))));
                        arr_19 [i_2] [i_2] [i_4 + 1] [i_2] = ((/* implicit */unsigned char) ((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-103))) == (-8653638039739274762LL)))))));
                    }
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_2] [16ULL] [i_4] [16ULL] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_3] [i_3] [i_4 + 1] [i_6]))) : (var_7)));
                        /* LoopSeq 4 */
                        for (signed char i_7 = 4; i_7 < 20; i_7 += 3) /* same iter space */
                        {
                            var_18 = ((/* implicit */_Bool) ((signed char) arr_23 [i_2 - 1] [i_7 - 4]));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_4 - 3] [i_4 - 3] [i_2] [i_4 + 1])) * (arr_20 [i_2 - 1] [i_2 + 2] [i_2] [i_7 + 1])));
                            var_20 = ((/* implicit */signed char) (+((+(((/* implicit */int) var_9))))));
                        }
                        for (signed char i_8 = 4; i_8 < 20; i_8 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */long long int) ((unsigned char) (_Bool)1));
                            arr_26 [i_2] [i_2 + 1] [i_2] = ((/* implicit */unsigned char) arr_17 [i_8] [i_6] [i_4 - 2] [(_Bool)1] [3LL]);
                            arr_27 [i_3] [i_3] [i_3] [i_4] [i_3] [i_2 + 1] &= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_2] [i_3] [i_3] [(unsigned char)0])) || (((/* implicit */_Bool) arr_20 [i_2 - 1] [i_3] [i_3] [i_3])))))));
                        }
                        for (signed char i_9 = 4; i_9 < 20; i_9 += 3) /* same iter space */
                        {
                            var_22 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_2)) | (arr_17 [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 2])));
                            var_23 = ((/* implicit */unsigned long long int) ((arr_10 [i_2 - 1]) && (((/* implicit */_Bool) var_10))));
                            var_24 -= ((/* implicit */_Bool) var_1);
                        }
                        for (signed char i_10 = 0; i_10 < 21; i_10 += 1) 
                        {
                            arr_33 [i_10] [i_10] [i_10] [i_6] [i_10] &= ((/* implicit */_Bool) (+(8653638039739274753LL)));
                            arr_34 [i_3] [i_3] [i_3] &= ((/* implicit */long long int) (+(var_12)));
                            arr_35 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_2 - 1] [i_3] [i_4] [i_10])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_4))));
                        }
                        arr_36 [i_2] = ((/* implicit */signed char) var_0);
                    }
                    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        arr_40 [i_2] [i_2] [i_2] [i_3] [i_4] [i_11] = ((/* implicit */_Bool) ((short) (_Bool)0));
                        var_25 = ((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-98))));
                    }
                    var_26 *= ((/* implicit */unsigned int) ((signed char) arr_10 [i_2 + 2]));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned int i_12 = 1; i_12 < 9; i_12 += 1) 
    {
        for (unsigned int i_13 = 4; i_13 < 7; i_13 += 4) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) arr_9 [(unsigned short)17] [i_14]);
                    var_28 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_12]))) | (((var_7) ^ (((/* implicit */unsigned long long int) arr_2 [i_12 - 1] [i_12])))))) >= (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_2))))))));
                    var_29 *= ((/* implicit */unsigned long long int) var_5);
                }
            } 
        } 
    } 
    var_30 = ((((/* implicit */int) var_9)) != (((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0)))));
}
