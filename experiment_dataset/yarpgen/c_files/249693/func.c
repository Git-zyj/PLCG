/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249693
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
    var_16 = ((/* implicit */unsigned long long int) var_9);
    var_17 *= ((/* implicit */unsigned short) min((((/* implicit */long long int) max((((/* implicit */int) var_3)), ((+(((/* implicit */int) (_Bool)1))))))), (((((var_4) && (((/* implicit */_Bool) var_12)))) ? (((7676234375005735666LL) + (((/* implicit */long long int) 581927556)))) : (((/* implicit */long long int) (+(((/* implicit */int) var_14)))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        arr_2 [18U] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))))) == (((((/* implicit */_Bool) (unsigned short)56268)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_9)))));
        arr_3 [i_0] = ((/* implicit */short) var_8);
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_6 [i_1]), (((/* implicit */long long int) (signed char)104))))) ? ((+(arr_6 [12]))) : (((-324780475040483854LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
        var_18 ^= ((/* implicit */unsigned char) arr_6 [(_Bool)1]);
        var_19 = ((/* implicit */signed char) max(((+(((/* implicit */int) arr_4 [i_1])))), (((((/* implicit */int) (unsigned char)189)) * (((/* implicit */int) (unsigned char)62))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_9 [(unsigned short)2] [i_4])) ? (var_9) : (((/* implicit */long long int) var_7))))))) && (((16622610725692542971ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2 + 2] [i_2 - 1])))))));
                        arr_16 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) arr_9 [i_2 + 1] [i_4])), (arr_12 [i_3] [i_3] [0]))), (((/* implicit */unsigned int) arr_4 [i_2 + 1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)24640)) + (((/* implicit */int) (signed char)65))))) : (((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (0LL))))))));
                    }
                    var_21 = ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_2 - 1] [i_2 + 2])) >= (((/* implicit */int) arr_8 [i_2 - 1] [i_2 + 2]))))) | ((-(((/* implicit */int) (unsigned short)65535)))));
                    arr_17 [i_1] [i_2] [10ULL] [i_1] = ((/* implicit */long long int) (~(((((/* implicit */int) ((unsigned char) arr_0 [i_2]))) ^ (((/* implicit */int) ((unsigned short) var_15)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_5 = 1; i_5 < 20; i_5 += 3) 
                    {
                        var_22 -= ((/* implicit */short) (-(((/* implicit */int) arr_19 [(unsigned short)6] [i_5] [i_5 + 1] [i_5]))));
                        var_23 = ((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_5 - 1]))));
                    }
                }
            } 
        } 
        arr_21 [i_1] [i_1] = ((/* implicit */int) var_0);
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] [(unsigned char)16] &= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-65)) & (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            var_24 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)32765)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) arr_11 [i_6] [(signed char)15]))))));
            arr_27 [i_6] = arr_18 [i_6] [i_7] [i_6] [(unsigned char)2] [i_7];
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            for (unsigned char i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 1; i_11 < 22; i_11 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [(unsigned char)0] [(short)8] [(unsigned short)18] [i_9] [i_6])) * (((/* implicit */int) var_4))));
                                var_26 = ((/* implicit */unsigned long long int) ((arr_15 [i_9] [i_10] [(unsigned char)3] [i_11 + 1] [(_Bool)1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_19 [6] [i_8] [i_8] [i_9])) && (((/* implicit */_Bool) arr_22 [12U])))) && (((((/* implicit */_Bool) (unsigned short)24640)) || (((/* implicit */_Bool) var_6))))));
                    var_28 -= ((/* implicit */signed char) var_15);
                }
            } 
        } 
    }
    var_29 = ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
}
