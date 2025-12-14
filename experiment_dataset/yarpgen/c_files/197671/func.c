/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197671
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_13 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_0 [i_0]))));
        var_14 ^= ((/* implicit */short) ((((/* implicit */int) (short)27045)) | (((/* implicit */int) (short)23797))));
        var_15 = ((/* implicit */unsigned long long int) ((var_0) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))))));
        var_16 = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        var_17 = (((-((-(var_5))))) / (((/* implicit */unsigned int) max((((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (short)-31168))))), (((((var_8) + (2147483647))) >> (((var_4) - (18328983516259240901ULL)))))))));
        arr_4 [i_1] = ((/* implicit */short) (-((+(((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_1)))))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 17; i_3 += 1) 
        {
            for (int i_4 = 3; i_4 < 16; i_4 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) (-(arr_3 [i_4 - 3] [i_4])));
                    arr_13 [i_4] [(_Bool)0] [i_2] |= ((/* implicit */unsigned long long int) ((arr_1 [i_4 - 1] [i_3 + 1]) - (arr_1 [i_4 + 1] [i_3 - 2])));
                }
            } 
        } 
        arr_14 [i_2] = ((((/* implicit */_Bool) var_8)) ? (arr_11 [i_2]) : (arr_11 [i_2]));
    }
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
    {
        var_19 *= ((/* implicit */short) ((unsigned short) ((unsigned int) ((arr_2 [i_5]) * (var_2)))));
        var_20 = ((/* implicit */unsigned short) ((unsigned int) ((0ULL) ^ (((/* implicit */unsigned long long int) ((arr_8 [(_Bool)1]) ? (arr_9 [13]) : (4294967280U)))))));
    }
    /* LoopSeq 1 */
    for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
    {
        var_21 ^= ((((/* implicit */_Bool) ((13990822572269316338ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */int) arr_19 [(unsigned short)2])) - (((/* implicit */int) arr_19 [12U])))) : (((((/* implicit */_Bool) (short)-32168)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_19 [4])))));
        arr_21 [0U] [0U] &= ((/* implicit */unsigned char) max((max((((/* implicit */int) arr_19 [6ULL])), ((~(((/* implicit */int) var_10)))))), (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (_Bool)1))))));
    }
}
