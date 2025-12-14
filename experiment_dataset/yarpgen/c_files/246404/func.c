/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246404
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_6))));
    var_17 = ((/* implicit */unsigned long long int) var_5);
    var_18 = ((/* implicit */long long int) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [0U])) + (((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 4; i_1 < 8; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 3; i_2 < 8; i_2 += 1) 
            {
                var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) 549639444308862518ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (3023173937U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) 549639444308862518ULL)) ? (((/* implicit */unsigned long long int) 1271793358U)) : (2604141837473597041ULL)))));
                arr_9 [0] [(signed char)9] [i_1] [i_0] = ((/* implicit */short) ((arr_1 [i_1 - 2]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))));
                arr_10 [i_0] [i_0] [(_Bool)1] [(unsigned char)5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 3023173937U)) > ((~(8095326736910388789ULL)))));
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)66)))))))));
            }
            var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 4]))));
        }
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
        {
            var_23 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (14736532560233868167ULL)))) ? ((~(((/* implicit */int) arr_7 [(unsigned short)3] [2] [i_0] [i_0])))) : (((/* implicit */int) var_1))));
            arr_13 [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) var_5)) | (((/* implicit */int) (unsigned char)19))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                for (long long int i_5 = 1; i_5 < 8; i_5 += 4) 
                {
                    {
                        arr_20 [i_0] [i_0] [i_3] [i_4] [(signed char)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned short)57422)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))));
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            arr_23 [0] [(_Bool)1] [3U] [(_Bool)1] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [3LL] [i_3 + 1] [3U] [i_5 + 1]))));
                            arr_24 [i_0] [i_0] [(signed char)3] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-83)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)127)) - (123)))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_14)) - (((/* implicit */int) arr_12 [0LL] [i_3 + 1]))))) / ((+(1271793359U)))));
                            var_25 = ((/* implicit */long long int) (unsigned short)59900);
                        }
                    }
                } 
            } 
            arr_27 [i_0] = ((/* implicit */unsigned int) var_7);
        }
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
        {
            var_26 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (unsigned short)65535))))) != ((~(((/* implicit */int) (unsigned short)57422))))));
            var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_1))))) % (var_8)));
        }
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
        {
            arr_34 [(_Bool)1] [i_9] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((var_7) + (9223372036854775807LL))) << (((1379115391) - (1379115391))))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_9 + 1] [i_9 + 1])))));
            var_28 = ((/* implicit */unsigned char) arr_14 [i_9]);
        }
    }
}
