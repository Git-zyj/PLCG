/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31618
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) min((((/* implicit */long long int) var_3)), (min((-1444663668323026216LL), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_1] [19U])) > (((/* implicit */int) var_8)))))))));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) (unsigned char)49)))));
                    var_17 = ((/* implicit */int) arr_2 [i_0 + 2]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned char)205)) - (((/* implicit */int) (unsigned char)234))))))), (var_2)));
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        for (unsigned char i_4 = 3; i_4 < 10; i_4 += 4) 
        {
            {
                var_19 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) min(((short)-11446), (((/* implicit */short) (unsigned char)230))))) / (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) (unsigned short)39574)) : (((/* implicit */int) arr_11 [i_3])))))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_20 [i_3] [i_3] [i_3] = ((/* implicit */short) arr_10 [i_3] [(short)2] [i_5]);
                            /* LoopSeq 3 */
                            for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                            {
                                var_20 = ((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_3] [(signed char)12] [i_3]))) / ((+(2961291350241703591LL))))));
                                arr_24 [6LL] [i_4] [i_7] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_5]))))) * (((((/* implicit */int) (unsigned char)19)) >> (((((/* implicit */int) (unsigned char)49)) - (19)))))))) ? (min(((~(var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-9)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? ((-(((/* implicit */int) (unsigned char)57)))) : (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)207))))))))));
                                arr_25 [i_3] [i_3] [i_3] [i_3] [(_Bool)1] = ((/* implicit */signed char) min(((-(((/* implicit */int) max((arr_19 [i_4 + 2] [i_5] [i_3]), (var_1)))))), ((((+(((/* implicit */int) (unsigned short)8191)))) * (((/* implicit */int) (signed char)11))))));
                            }
                            for (unsigned char i_8 = 4; i_8 < 12; i_8 += 1) 
                            {
                                arr_28 [i_3] [i_3] [i_5] [i_5] [i_8 + 1] [i_5] |= ((/* implicit */signed char) (~(((/* implicit */int) arr_5 [i_5]))));
                                arr_29 [i_8] [i_3] [i_3] [i_3] [i_3] [9] = ((/* implicit */long long int) var_11);
                                var_21 = ((/* implicit */int) min(((~(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_3])) << (((((/* implicit */int) var_5)) & (((/* implicit */int) arr_22 [i_3] [i_3] [(unsigned short)1] [i_6] [9U] [i_5] [i_4])))))))));
                            }
                            for (short i_9 = 0; i_9 < 13; i_9 += 1) 
                            {
                                var_22 = ((/* implicit */unsigned char) arr_15 [i_3] [i_4] [i_9] [i_3]);
                                arr_34 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (signed char)120);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
