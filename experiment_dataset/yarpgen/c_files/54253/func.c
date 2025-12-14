/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54253
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
    var_14 = ((/* implicit */short) max((((((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) & (max((((/* implicit */unsigned int) var_7)), (var_1))))), (((/* implicit */unsigned int) max((((/* implicit */int) (short)24858)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-3738)))))))));
    var_15 = ((/* implicit */unsigned int) max((var_15), (((((/* implicit */_Bool) ((((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_9))))))) ? (((((/* implicit */_Bool) (unsigned short)30931)) ? (((((/* implicit */_Bool) (short)3738)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_2))) : (((((/* implicit */_Bool) (unsigned short)34628)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34626)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (max((((((/* implicit */_Bool) (unsigned short)34628)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)34813)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)19219))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3541659035U)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)3738))))) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)3384), (((/* implicit */unsigned short) (short)3738))))))))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65533)) ? ((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-3738)) : (((/* implicit */int) (short)-3738)))))) : (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_2 [i_0]))))), (arr_2 [i_0]))))));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) min((((/* implicit */int) max((((var_8) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), ((_Bool)1)))), (((((((/* implicit */_Bool) (unsigned short)5162)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)19224)))) / (min((-1535863179), (((/* implicit */int) (short)-19801))))))));
        arr_7 [(short)4] &= min((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1])))), (((((/* implicit */_Bool) min((arr_2 [i_1]), (arr_2 [i_1])))) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */int) arr_5 [i_1])) + (((/* implicit */int) arr_5 [(unsigned char)18])))))));
    }
    for (short i_2 = 2; i_2 < 21; i_2 += 2) 
    {
        arr_11 [i_2 - 1] [i_2 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) * (((/* implicit */int) arr_10 [i_2 + 1])))) / (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)46304)) : (((/* implicit */int) var_12))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9))) : (((((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46311))))) * (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)19219)))))))));
        arr_12 [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)32050)) ? ((-(((((/* implicit */_Bool) (unsigned short)34628)) ? (595826628U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_10 [i_2 - 1])) : (((/* implicit */int) arr_10 [i_2 + 1])))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (unsigned char i_5 = 1; i_5 < 16; i_5 += 3) 
            {
                for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    {
                        var_17 += ((/* implicit */short) ((((/* implicit */int) (signed char)2)) | (((/* implicit */int) arr_17 [i_5 + 1] [(unsigned char)6] [i_5 + 2] [i_6]))));
                        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5]))))))) : (((((/* implicit */_Bool) arr_19 [16U] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [(short)13] [(_Bool)1]))) : (var_5)))));
                        arr_23 [i_5] [(signed char)0] [i_5] [i_5] = ((/* implicit */unsigned short) var_2);
                        arr_24 [6] [i_5] [i_5] [i_3] = ((/* implicit */short) arr_21 [i_3] [i_5] [i_5] [i_3]);
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned int) min((var_19), ((~((-(var_1)))))));
        arr_25 [(short)16] = ((/* implicit */unsigned short) ((arr_19 [12U] [12U]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_3] [i_3])))));
    }
    var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned char)45)) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)2)))))));
    var_21 = ((/* implicit */unsigned char) var_11);
}
