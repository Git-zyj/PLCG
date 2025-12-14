/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/329
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) ((short) (short)-32752)))));
        var_16 -= (~(((((/* implicit */_Bool) -3314848415371767875LL)) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) arr_0 [i_0])))));
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)15))));
            arr_8 [i_1] [i_2] = ((max((var_10), (((/* implicit */unsigned long long int) (short)-32752)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))));
        }
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            arr_11 [i_3] = min((arr_0 [(_Bool)1]), (((/* implicit */signed char) (((~(((/* implicit */int) arr_2 [(short)2])))) >= ((~(((/* implicit */int) (signed char)-46))))))));
            var_18 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_3 [i_1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32752))) + (var_10))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [2])) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) var_4)))))));
            var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_14)))) ^ (max((1555785868), (((/* implicit */int) (_Bool)1))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 724783295)) / (9223372036854775807LL)))), ((~(var_10)))))));
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((short) max((var_11), (((/* implicit */int) var_9)))))) >> ((((((_Bool)1) ? (((/* implicit */int) (short)8160)) : (((/* implicit */int) arr_9 [i_4] [i_3] [i_5])))) - (8135)))));
                            var_21 = ((/* implicit */unsigned long long int) min((((int) 7862715029575840139LL)), (((/* implicit */int) min((((/* implicit */signed char) ((_Bool) var_8))), (arr_12 [i_4] [i_4] [i_4] [i_4]))))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((((((/* implicit */int) arr_6 [i_3])) / (-1555785896))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [5ULL] [5ULL] [i_5] [i_6]))))))))));
                            var_23 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_16 [i_1] [i_3] [i_1] [i_1] [i_6]))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            var_24 = min((((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1])), (var_3));
            var_25 ^= ((/* implicit */unsigned short) (((+(((/* implicit */int) var_0)))) & (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_7] [i_1])) || (var_2)))) > ((~(((/* implicit */int) (signed char)-48)))))))));
            arr_20 [i_1] [i_7] [(signed char)4] = ((/* implicit */unsigned short) arr_17 [i_1] [i_7] [i_1] [i_1] [i_7]);
        }
        arr_21 [i_1] |= (short)3144;
    }
    for (int i_8 = 0; i_8 < 23; i_8 += 1) 
    {
        arr_26 [i_8] [i_8] = ((/* implicit */short) min((var_0), (((/* implicit */unsigned short) (short)-8155))));
        arr_27 [7LL] = ((/* implicit */unsigned char) var_6);
        arr_28 [i_8] [i_8] = ((/* implicit */int) min((((((/* implicit */_Bool) ((63U) - (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) arr_25 [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32765))) : (var_6))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)34596)), (2391757702750056806LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)8168)) ? (((/* implicit */int) var_13)) : (-587640092)))) % (arr_24 [i_8] [i_8]))))));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_24 [i_8] [i_8])))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [2LL] [i_8]))) * (var_10))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-3145))))) : (max((arr_24 [i_8] [(unsigned char)3]), (((/* implicit */long long int) var_9)))))))));
    }
    /* LoopNest 3 */
    for (short i_9 = 0; i_9 < 25; i_9 += 1) 
    {
        for (unsigned short i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            for (long long int i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        for (short i_13 = 2; i_13 < 24; i_13 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)248)) <= (((/* implicit */int) (short)21847))));
                                var_28 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_39 [i_13 + 1] [i_12] [(_Bool)0] [i_10] [i_9]))))) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_39 [i_13 - 2] [i_12] [(signed char)22] [i_10] [i_9])) : (((/* implicit */int) var_12))))));
                                var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-19)) ? (max((((/* implicit */long long int) var_13)), (arr_33 [(_Bool)1]))) : (((((/* implicit */long long int) var_3)) & (min((arr_29 [(signed char)4]), (((/* implicit */long long int) var_9)))))))))));
                                arr_44 [i_9] [i_9] [i_10] [i_11] [i_9] [i_13] = ((/* implicit */_Bool) arr_39 [i_9] [i_10] [i_9] [i_12] [i_9]);
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)96)) || ((_Bool)1)));
                }
            } 
        } 
    } 
    var_31 = var_6;
}
