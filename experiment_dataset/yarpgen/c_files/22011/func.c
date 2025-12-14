/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22011
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
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max(((unsigned short)59555), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0)))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_16 ^= ((/* implicit */short) (~(max((((unsigned long long int) (signed char)-11)), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-20)))))))));
                arr_4 [i_0 + 2] [i_0] = (-(min((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) | (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) (unsigned short)42552)) ? (var_4) : (arr_1 [i_0]))))));
                var_17 ^= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)54558)) >= (var_14))))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_10)) >> (((/* implicit */int) (signed char)10))))))) : (((unsigned long long int) (+(arr_2 [i_1]))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) arr_6 [i_0 - 2] [i_0 - 1] [i_0 - 2]);
                            arr_9 [(short)8] [i_0] [i_2] [i_3] = ((/* implicit */int) var_7);
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) arr_7 [i_0] [(short)2] [i_2]))))) ? (((/* implicit */int) arr_0 [i_2])) : (((((/* implicit */int) min((var_11), (var_9)))) - (((/* implicit */int) (signed char)7)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        var_21 ^= ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-20)))) * ((+(((/* implicit */int) arr_0 [i_4]))))));
        var_22 = ((/* implicit */_Bool) ((short) arr_7 [i_4] [i_4] [i_4]));
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 9; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) ((short) (short)-22473));
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) (signed char)11))));
                    var_25 = ((/* implicit */int) (+(arr_13 [i_5 + 1] [i_5 - 3] [i_5 + 3])));
                }
            } 
        } 
        var_26 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_4] [i_4])) | (((/* implicit */int) arr_10 [i_4])))))));
        var_27 ^= ((/* implicit */short) (~(281474976710655LL)));
    }
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
    {
        arr_24 [i_7] = ((/* implicit */int) arr_0 [(_Bool)1]);
        var_28 = ((/* implicit */long long int) arr_23 [(signed char)3]);
    }
    /* LoopNest 2 */
    for (short i_8 = 0; i_8 < 12; i_8 += 3) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                arr_30 [i_8] = ((/* implicit */int) arr_0 [i_8]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    arr_33 [i_8] [i_10 - 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_8]))));
                    var_29 -= ((/* implicit */short) (-(((unsigned long long int) (short)-11124))));
                    var_30 ^= ((/* implicit */long long int) (-(arr_26 [i_8])));
                    var_31 = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned short)20863)) ? (1728879376) : (((/* implicit */int) arr_10 [i_8]))))));
                }
                var_32 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_14 [i_8] [8ULL] [i_9]), (arr_14 [i_8] [(unsigned short)6] [i_8])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) min((arr_14 [i_8] [2] [i_9]), (arr_14 [i_8] [(unsigned short)6] [i_9]))))));
            }
        } 
    } 
    var_33 = ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((short) (signed char)-16))) : (((/* implicit */int) var_9)))) >= (var_14));
}
