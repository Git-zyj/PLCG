/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240183
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_18 -= ((/* implicit */_Bool) (signed char)28);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                var_19 = arr_3 [i_1];
                var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_2 + 2] [i_2] [i_2 - 2] [i_2 + 2])) : (((/* implicit */int) var_12))))));
                var_21 = (signed char)-10;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_16))));
                            var_23 ^= ((/* implicit */unsigned long long int) arr_9 [i_0 - 1] [i_0 + 2] [i_2 - 1] [i_3]);
                        }
                    } 
                } 
            }
            for (short i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                var_24 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [(unsigned char)16] [i_0] [i_5] [i_1]))))), (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) ^ (((/* implicit */unsigned int) (+(((((/* implicit */int) arr_12 [(unsigned short)22] [i_1])) / (((/* implicit */int) (signed char)88)))))))));
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (+(((/* implicit */int) min((((/* implicit */short) (signed char)-1)), (arr_3 [(short)4])))))))));
                arr_17 [i_0 + 2] [i_1] [6] [15] = ((/* implicit */short) arr_7 [i_1]);
            }
            arr_18 [i_1] [(unsigned char)2] = ((/* implicit */_Bool) ((((/* implicit */int) ((var_14) < (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(short)1] [i_0 - 2] [(_Bool)1])))))) | (((/* implicit */int) var_17))));
            var_26 = var_3;
            var_27 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_11 [i_1] [i_1] [(unsigned char)23] [(unsigned short)18])) ? (arr_11 [i_1] [i_1] [i_1] [i_0]) : (arr_11 [i_0] [i_0] [i_1] [i_1]))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (signed char)-3))))))));
            arr_19 [(signed char)0] [(signed char)20] [6] |= ((/* implicit */short) var_11);
        }
        for (unsigned char i_6 = 2; i_6 < 22; i_6 += 1) 
        {
            var_28 = ((/* implicit */int) (signed char)-10);
            var_29 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (unsigned char)220)) | (((/* implicit */int) arr_20 [i_0] [i_0])))))) ? (((201786273) & (((((/* implicit */int) (unsigned short)65532)) >> (((arr_11 [i_0] [i_0 - 2] [i_6] [i_6 - 2]) - (981954973))))))) : (((((/* implicit */_Bool) arr_7 [i_0 - 2])) ? (((((/* implicit */_Bool) var_7)) ? (arr_4 [i_0] [(signed char)18] [(unsigned short)5]) : (((/* implicit */int) var_12)))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_13 [i_0 + 1] [(signed char)0] [(signed char)8] [i_6] [(signed char)18] [i_6])), (arr_7 [(signed char)10]))))))));
            var_30 -= ((/* implicit */signed char) min((min((min((var_14), (((/* implicit */unsigned int) arr_2 [i_0] [18ULL])))), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [18])) ? (((/* implicit */int) arr_3 [(unsigned short)18])) : (((/* implicit */int) arr_3 [(unsigned short)4])))))));
            var_31 = ((/* implicit */unsigned char) var_16);
        }
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)30)) != (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_15 [(signed char)22] [(unsigned char)22] [i_0] [i_0 + 2])) : (((/* implicit */int) (unsigned char)255))))));
        var_33 |= ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_0] [7U]);
        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) arr_4 [i_0 - 1] [i_0 - 2] [i_0]))));
    }
    for (unsigned char i_7 = 2; i_7 < 22; i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            for (short i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                {
                    var_35 += ((/* implicit */short) (unsigned char)12);
                    var_36 &= ((/* implicit */signed char) min((min((((/* implicit */unsigned int) var_1)), (arr_29 [i_7]))), (((/* implicit */unsigned int) arr_24 [i_7] [0U]))));
                }
            } 
        } 
        arr_32 [i_7] [i_7] = ((/* implicit */int) (signed char)10);
    }
    var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) var_17))));
}
