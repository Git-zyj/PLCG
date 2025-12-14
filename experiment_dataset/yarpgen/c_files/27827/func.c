/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27827
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
    var_12 = ((/* implicit */signed char) var_4);
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-21)))), (((((/* implicit */int) var_9)) / (((/* implicit */int) (unsigned short)54771))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (min((((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_11))), (((/* implicit */long long int) 2124924826))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) * ((-(((/* implicit */int) var_6))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            arr_6 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) ((((unsigned int) (signed char)20)) <= (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
            /* LoopSeq 1 */
            for (signed char i_2 = 1; i_2 < 7; i_2 += 3) 
            {
                var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) || (((arr_1 [(unsigned short)0] [(_Bool)1]) < (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
                {
                    arr_14 [i_3] [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((var_2) ? (((/* implicit */int) (short)9239)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [(short)4] [i_0])))) >= ((-(((/* implicit */int) var_10)))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 1; i_4 < 7; i_4 += 3) 
                    {
                        arr_18 [i_4 + 1] [i_0] [i_0] [i_1 + 1] [i_0] = ((/* implicit */int) arr_2 [i_0] [i_1]);
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (~(((/* implicit */int) var_7)))))));
                        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-((-(arr_10 [i_0] [i_1] [i_1]))))))));
                        var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)127))));
                    }
                    arr_19 [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)146)) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) var_2))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_2 [i_0] [i_0])))) / (max(((+(185233163))), (((185233163) / (((/* implicit */int) var_8))))))));
                    var_19 ^= ((/* implicit */short) min((14815874347292378590ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!((_Bool)1)))))))));
                    arr_23 [i_2 - 1] [i_0] [i_2] [2ULL] [i_1] = ((/* implicit */int) arr_10 [i_0] [i_2 + 3] [i_5]);
                }
                arr_24 [i_0] [3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)57584), (((/* implicit */unsigned short) var_8))))) ? (((/* implicit */int) ((short) (signed char)-93))) : (((/* implicit */int) arr_22 [i_0 + 2] [i_1] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < ((+(((/* implicit */int) var_8)))))))) : (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60503))) - (arr_10 [i_2] [(short)4] [i_2])))))));
            }
            var_20 += (short)121;
            var_21 = ((/* implicit */_Bool) 2683343515U);
        }
        for (short i_6 = 4; i_6 < 8; i_6 += 4) 
        {
            var_22 *= ((/* implicit */short) (((((-(((/* implicit */int) (signed char)64)))) + (2147483647))) >> (((min((arr_0 [i_6]), (var_7))) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1877423796U)) || (((/* implicit */_Bool) 1877423796U))))))))));
            var_23 = ((/* implicit */unsigned int) max(((signed char)71), (((/* implicit */signed char) (_Bool)0))));
            var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_15 [0] [i_6] [i_0] [i_6] [i_6 - 2] [i_6]))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_15 [i_0 + 1] [i_6 + 1] [i_0 - 1] [i_0] [i_6] [i_6])) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) arr_15 [i_0] [i_0 + 1] [i_0] [i_6] [i_6] [i_6])))))));
        }
        for (int i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)1136)) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) (short)-26917))));
            arr_31 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_29 [i_0])), (arr_11 [i_0] [(unsigned short)5] [i_0 + 1] [(signed char)9] [i_0 - 1])))) : (((/* implicit */int) (short)-19875)));
            arr_32 [i_0] = ((/* implicit */_Bool) ((arr_9 [i_0 + 2] [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)496)))));
            arr_33 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))));
        }
    }
    /* LoopSeq 1 */
    for (long long int i_8 = 0; i_8 < 10; i_8 += 1) 
    {
        var_26 = ((/* implicit */unsigned short) (_Bool)1);
        arr_36 [i_8] = ((/* implicit */unsigned char) ((unsigned int) ((arr_8 [i_8] [i_8] [i_8]) / (arr_8 [i_8] [i_8] [i_8]))));
        var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_8] [i_8] [(short)4] [i_8] [(_Bool)1] [(unsigned short)6])))))));
    }
}
