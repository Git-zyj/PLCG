/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201304
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_10 *= ((/* implicit */signed char) (~(7857841505314669250LL)));
                                var_11 *= ((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) ((signed char) arr_6 [i_3]))) ? (((/* implicit */int) arr_4 [i_0] [(unsigned short)16] [i_2] [i_3 + 2])) : ((-(((/* implicit */int) arr_7 [i_0] [i_3]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 3; i_5 < 16; i_5 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (+(((/* implicit */int) (((+(747435191121225682LL))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_12 [i_0] [i_1] [(unsigned short)4] [i_2] [i_5 - 2]))))))))))))));
                        var_13 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) var_1))))), (((7857841505314669250LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243)))))))) ? (2114264175U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(unsigned char)10])))));
                        var_14 += ((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned char)183)) * (((/* implicit */int) ((signed char) var_8)))))));
                        arr_14 [i_5] [i_1] [(short)15] [i_1] [(unsigned short)8] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_5] [i_2]))))))))) & ((-(-7857841505314669251LL)))));
                    }
                    var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_3 [(_Bool)0] [i_1])) <= (((/* implicit */int) arr_7 [i_1] [i_0])))))) ? (((/* implicit */int) ((_Bool) max((var_8), (((/* implicit */unsigned int) arr_13 [i_2] [i_2] [i_2] [i_1] [i_0] [i_0 - 2])))))) : (((((((/* implicit */_Bool) arr_12 [i_2] [i_1] [6LL] [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_0] [i_1] [i_2])) : (((/* implicit */int) var_3)))) + ((-(((/* implicit */int) arr_1 [i_1]))))))));
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) arr_4 [i_0 - 3] [(unsigned short)10] [i_1] [i_2]))));
                    arr_15 [i_1] [i_1] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */_Bool) ((((((/* implicit */int) max((arr_6 [i_1]), (arr_6 [i_1])))) + (2147483647))) >> (((((/* implicit */int) min((arr_6 [i_1]), (arr_6 [i_1])))) + (17583)))))) : (((/* implicit */_Bool) ((((((/* implicit */int) max((arr_6 [i_1]), (arr_6 [i_1])))) + (2147483647))) >> (((((((/* implicit */int) min((arr_6 [i_1]), (arr_6 [i_1])))) + (17583))) - (14744))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_6 = 1; i_6 < 19; i_6 += 2) 
    {
        for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((signed char) (short)23220)))));
                arr_22 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_20 [i_6])))), (((/* implicit */int) max((((/* implicit */unsigned char) arr_16 [i_6])), ((unsigned char)31))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -1LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 7857841505314669250LL)) ? (((/* implicit */int) (unsigned short)39191)) : (((/* implicit */int) (signed char)74)))))))) : ((~(((((/* implicit */int) arr_18 [i_6 - 1])) << (((((/* implicit */int) arr_19 [i_6])) - (168)))))))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_6 - 1])) ? (((((/* implicit */int) arr_18 [i_6 + 1])) | (((/* implicit */int) ((unsigned short) (_Bool)1))))) : (max((((((((/* implicit */int) (signed char)-75)) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (signed char)-33)) & (((/* implicit */int) (signed char)38))))))));
                arr_23 [i_6] [i_6] = (((-(((/* implicit */int) arr_17 [i_6] [i_6])))) <= (((((/* implicit */_Bool) arr_19 [i_6 + 1])) ? (((/* implicit */int) arr_16 [i_6 + 1])) : (((/* implicit */int) arr_16 [i_6 + 1])))));
                var_19 = ((/* implicit */_Bool) min((max((((/* implicit */long long int) (unsigned char)204)), (7857841505314669244LL))), (((/* implicit */long long int) arr_17 [i_6] [i_6]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((unsigned short) var_1));
        var_21 = arr_5 [i_8];
        /* LoopNest 3 */
        for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            for (short i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                for (unsigned short i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    {
                        var_22 = ((/* implicit */signed char) ((((_Bool) arr_25 [i_8] [i_11])) ? (((/* implicit */int) ((signed char) arr_18 [i_8]))) : (((((/* implicit */_Bool) arr_30 [i_8] [i_9] [i_11])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-11)) < (((/* implicit */int) (short)32767))))) : (((/* implicit */int) ((_Bool) var_6)))))));
                        var_23 = ((/* implicit */short) (-(13LL)));
                        arr_33 [i_8] [i_8] [i_10] [i_11] = ((/* implicit */long long int) (-(((((/* implicit */int) arr_18 [i_11])) ^ (((((/* implicit */int) var_4)) >> (((((/* implicit */int) arr_19 [i_10])) - (177)))))))));
                    }
                } 
            } 
        } 
        arr_34 [i_8] [i_8] = ((/* implicit */signed char) max((max((-7857841505314669250LL), (((/* implicit */long long int) max(((_Bool)1), ((_Bool)1)))))), (((/* implicit */long long int) var_3))));
    }
}
