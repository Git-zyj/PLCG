/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19749
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
    var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)110)) || (((/* implicit */_Bool) var_5))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    arr_9 [(signed char)7] [(unsigned char)2] [0LL] [(_Bool)1] = ((/* implicit */unsigned char) (-(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)110))))));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_12 [(signed char)10] [3U] [4LL] [7LL] [(unsigned char)10] [(unsigned char)12] [(unsigned char)9] = ((/* implicit */unsigned char) ((var_0) && (((/* implicit */_Bool) (unsigned char)162))));
                        arr_13 [0LL] [(unsigned char)5] [8U] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)253)) | (((/* implicit */int) (_Bool)1))));
                    }
                }
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 2105823143978601492LL))))) | (((/* implicit */int) (unsigned char)150))));
                    arr_17 [(signed char)2] [(_Bool)0] [(signed char)3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)19))))) || (((/* implicit */_Bool) (+(5329660582579352851LL))))));
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_21 [(_Bool)0] [i_5] = ((/* implicit */unsigned char) (~((+(2296835809958952960LL)))));
                        var_19 = ((/* implicit */unsigned char) (-(((var_14) | (((/* implicit */int) var_10))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((var_10) && (((/* implicit */_Bool) var_8)))))));
                        arr_25 [(_Bool)1] [i_5] = ((/* implicit */unsigned char) var_7);
                        arr_26 [i_5] [(unsigned short)8] [2LL] [3LL] [3U] [(unsigned char)2] = ((/* implicit */long long int) ((3550352474U) | (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                    }
                }
            }
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */int) (short)-11587)) | (((/* implicit */int) (_Bool)1)))))));
        }
        arr_27 [(unsigned char)4] [(unsigned char)6] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)94)) || ((_Bool)1))))));
        arr_28 [(short)8] = ((/* implicit */unsigned char) var_2);
        var_22 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) ((((/* implicit */int) var_16)) ^ ((-2147483647 - 1))))), (((var_8) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26))))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)93))) - (var_7)))));
    }
    var_23 ^= ((/* implicit */_Bool) max((var_14), (min((((/* implicit */int) max((((/* implicit */short) (unsigned char)136)), (var_9)))), ((+(((/* implicit */int) (signed char)62))))))));
}
