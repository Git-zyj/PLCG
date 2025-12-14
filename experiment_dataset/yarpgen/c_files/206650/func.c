/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206650
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            arr_5 [9U] = ((/* implicit */unsigned short) (-(((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) << (((var_19) - (56278135459047953LL)))))));
            arr_6 [i_0] = ((/* implicit */int) arr_4 [i_0]);
            arr_7 [i_0 - 2] [i_1] [i_1] = ((/* implicit */unsigned int) ((short) 3304721924079080463ULL));
        }
        for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [i_0])) : (((((/* implicit */int) arr_10 [(_Bool)1] [(_Bool)1])) >> (((((/* implicit */int) arr_3 [(unsigned short)9])) - (8781)))))));
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        {
                            arr_18 [i_2] [i_2] [i_3] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */signed char) ((unsigned int) arr_14 [i_0] [i_2] [i_0] [(short)2] [i_5]));
                            var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 2]))) <= (arr_14 [i_0 + 3] [i_0 + 3] [i_0 + 3] [(unsigned char)7] [i_5])));
                            var_22 ^= ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_0 + 3]))));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) -1)) : (arr_14 [i_0] [i_2] [i_0] [i_4] [i_5]))))));
                        }
                    } 
                } 
                arr_19 [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_0] [i_2]))));
            }
            for (int i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                var_24 -= ((/* implicit */signed char) ((arr_17 [(signed char)12] [i_6] [(signed char)12] [i_2] [i_2] [i_2] [i_6]) >> (((((((/* implicit */_Bool) arr_8 [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) - (3583290235U)))));
                /* LoopSeq 1 */
                for (unsigned int i_7 = 2; i_7 < 21; i_7 += 3) 
                {
                    arr_25 [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_14)) ? (arr_4 [21]) : (((/* implicit */unsigned long long int) arr_17 [(unsigned char)2] [i_2] [i_6] [(_Bool)1] [i_7] [i_6] [i_6])))) << (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (4194048LL))) - (229LL)))));
                    arr_26 [i_2] [i_6] [i_2] [i_7 + 3] = ((/* implicit */unsigned short) ((arr_13 [i_7 + 2] [i_2] [i_7 + 2] [i_7 + 2]) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_7 + 2] [i_6] [i_6] [i_6])))));
                }
                arr_27 [i_0] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0] [i_0 - 2] [i_6] [i_2])) | (((/* implicit */int) arr_12 [8] [i_0 - 2] [i_6] [i_6]))));
            }
            var_25 &= ((signed char) ((((/* implicit */int) arr_13 [i_0] [24ULL] [i_2] [i_0 - 1])) * (-11)));
            var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_15 [i_2] [i_2] [i_2] [(unsigned short)21] [(_Bool)1] [i_2])))) | (arr_15 [i_0] [i_2] [i_2] [i_0 + 2] [i_2] [(unsigned char)23])));
        }
        for (signed char i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_0 + 3] [i_0 + 3] [i_8])) ? (((/* implicit */int) arr_29 [i_0 + 2] [i_8] [i_8])) : (((/* implicit */int) arr_29 [i_0 - 2] [i_8] [i_8]))));
            arr_32 [i_0] [i_8] [i_8] = ((/* implicit */long long int) ((signed char) arr_14 [i_0] [i_0] [i_0] [i_0 + 2] [i_0]));
            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_8] [9U] [9U] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-366))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_8])) || (((/* implicit */_Bool) (unsigned char)109))))) : (((/* implicit */int) var_7)))))));
            var_29 += ((/* implicit */unsigned short) var_17);
            arr_33 [i_0 + 3] [i_8] = ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */_Bool) arr_22 [i_8] [i_8])) ? (arr_21 [i_0 - 1] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32762))))) : (((/* implicit */unsigned long long int) var_17))));
        }
        var_30 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0 + 2] [(signed char)1] [i_0])) ? (arr_8 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((((/* implicit */_Bool) (unsigned short)27088)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) arr_3 [i_0]))));
        arr_34 [4U] = ((/* implicit */short) (-(var_4)));
        var_31 = ((/* implicit */_Bool) (signed char)-69);
    }
    var_32 = ((unsigned long long int) ((((/* implicit */int) ((unsigned char) var_12))) / (((/* implicit */int) var_14))));
    var_33 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_17)))) ? (((/* implicit */int) min((var_14), (((/* implicit */short) var_1))))) : (var_17)))) ^ (((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_8))))))));
}
