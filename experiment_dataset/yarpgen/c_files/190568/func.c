/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190568
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = var_8;
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
        {
            var_15 = ((unsigned char) (-(((/* implicit */int) (unsigned char)233))));
            var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) arr_2 [i_0] [(unsigned short)2]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [0ULL])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)23467)) | (((/* implicit */int) (unsigned char)233))))) : (((unsigned int) (unsigned short)16934))))));
            arr_5 [(unsigned char)3] = (!(((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) arr_1 [i_0])))))));
            arr_6 [(unsigned char)5] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1])))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (9223372036854775744ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2)))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_2 + 1] [i_3 + 1])) ? (((/* implicit */int) (unsigned short)65535)) : (-201343783))) : (((/* implicit */int) (unsigned short)35837))));
                        arr_15 [i_0] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_2 + 1] [i_2 + 1]))));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [i_2] [12ULL] [i_2 + 1] [i_2])) ? (((/* implicit */int) arr_14 [(unsigned short)4] [i_2 + 1] [i_2] [i_2 + 1] [(unsigned char)1])) : (((/* implicit */int) arr_14 [13ULL] [12ULL] [i_0] [i_2 + 1] [i_2]))));
            var_19 &= ((/* implicit */unsigned long long int) arr_10 [i_2 + 1] [i_2]);
            var_20 = ((/* implicit */signed char) (!(((((/* implicit */int) arr_4 [i_0] [i_2])) >= (((/* implicit */int) arr_8 [i_0] [i_2]))))));
        }
        arr_16 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_0] [i_0])) != (((/* implicit */int) arr_8 [(unsigned char)8] [i_0]))));
    }
    var_21 += ((((/* implicit */int) var_10)) * (min((-1), (((/* implicit */int) (unsigned short)19439)))));
    var_22 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))));
    var_23 = ((/* implicit */unsigned int) 0ULL);
    /* LoopNest 3 */
    for (unsigned int i_5 = 4; i_5 < 19; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_24 [17ULL] [i_6] = ((/* implicit */unsigned short) (+(min((14160026649448558992ULL), (((/* implicit */unsigned long long int) ((_Bool) arr_19 [i_5])))))));
                    var_24 = ((/* implicit */_Bool) arr_19 [i_5]);
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 1; i_8 < 20; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) arr_23 [4U] [i_6] [i_6] [(unsigned short)15]);
                                arr_29 [i_5] [i_8] [i_9] [i_8] [i_9] = ((/* implicit */unsigned long long int) arr_21 [i_5] [i_6] [i_5]);
                                var_26 += ((/* implicit */_Bool) arr_25 [i_8] [i_8] [i_8]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
