/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23327
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
    var_16 -= ((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) ((((/* implicit */_Bool) min(((short)63), (((/* implicit */short) (_Bool)1))))) || (((/* implicit */_Bool) (+(var_5)))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_17 -= (-(((/* implicit */int) arr_1 [i_0] [i_0])));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
        {
            var_18 *= ((/* implicit */_Bool) -539200565);
            var_19 ^= ((/* implicit */short) (-(((/* implicit */int) arr_2 [0ULL]))));
            var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) ((var_0) | (((/* implicit */unsigned long long int) -866992631311798086LL))))) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))));
            var_21 ^= ((/* implicit */unsigned char) ((((var_14) > (357352617))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(_Bool)1]))) : (((arr_3 [i_0] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        }
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) 2147483647))));
            var_23 &= ((/* implicit */short) ((((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned short)4358)))) ^ (((((/* implicit */int) (signed char)127)) | (((/* implicit */int) var_4))))))) ? ((+(((/* implicit */int) (unsigned char)187)))) : (min(((-(((/* implicit */int) (unsigned char)93)))), ((+(((/* implicit */int) (short)3982))))))));
            var_24 += ((/* implicit */short) (((((+(4294967295U))) == (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)114))))))) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) var_4))))));
            var_25 += ((/* implicit */long long int) (+(min((((/* implicit */int) arr_4 [i_2] [i_0] [i_2])), ((-(((/* implicit */int) var_4))))))));
        }
        var_26 |= ((/* implicit */short) (~(((/* implicit */int) arr_1 [6LL] [(unsigned short)13]))));
        var_27 ^= ((/* implicit */unsigned char) ((unsigned short) (((_Bool)1) ? ((-2147483647 - 1)) : ((~(((/* implicit */int) var_8)))))));
    }
    for (int i_3 = 1; i_3 < 13; i_3 += 4) 
    {
        var_28 += ((/* implicit */long long int) ((((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) (unsigned char)137)) : (2147483647))), (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) || (((((/* implicit */_Bool) arr_8 [i_3])) && (((/* implicit */_Bool) arr_8 [i_3 - 1]))))));
        var_29 |= ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_4 [i_3] [i_3 - 1] [i_3 - 1])))) > ((-(((/* implicit */int) arr_4 [i_3] [i_3] [i_3]))))));
        var_30 &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 3525305676580037653ULL)))) ? (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))) > (arr_6 [i_3 - 1])))) : ((~((~(((/* implicit */int) arr_1 [i_3] [i_3]))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) min(((+(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_13 [i_4])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [14ULL])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)100))))) ? (((/* implicit */int) arr_11 [i_4])) : (((/* implicit */int) arr_13 [i_4])))))))));
        var_32 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) (unsigned char)4)))) > (((((/* implicit */int) arr_13 [i_4])) >> (((((/* implicit */int) arr_13 [i_4])) - (35467)))))));
    }
    for (int i_5 = 2; i_5 < 15; i_5 += 4) 
    {
        arr_16 [i_5] |= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)18))));
        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_10 [i_5 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_5 - 1])) < (((/* implicit */int) arr_10 [i_5 - 1])))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5 - 1]))) : (var_13))))))));
        var_34 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)47)) : (357352617)))));
        var_35 &= ((/* implicit */unsigned char) -1849065911);
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 15; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                {
                    var_36 |= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)58), (((/* implicit */unsigned char) (_Bool)1)))))))) != (((/* implicit */int) (unsigned char)198))));
                    var_37 |= ((((((/* implicit */int) var_10)) * (((/* implicit */int) (_Bool)0)))) * (((/* implicit */int) ((arr_17 [i_6 + 1] [i_6 + 1] [i_5 - 1]) < (arr_17 [i_6 - 3] [i_6 + 1] [i_5 + 1])))));
                }
            } 
        } 
    }
}
