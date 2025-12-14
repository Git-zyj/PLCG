/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214652
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [i_1]);
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [(signed char)1] [i_1])) - (((/* implicit */int) arr_3 [i_0] [(signed char)11] [i_0]))));
        }
        arr_7 [i_0] = ((/* implicit */unsigned long long int) var_4);
        var_17 *= ((/* implicit */signed char) (-(((unsigned long long int) (!(((/* implicit */_Bool) var_2)))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_3 = 3; i_3 < 23; i_3 += 1) 
            {
                var_18 = ((/* implicit */_Bool) (+(((((/* implicit */int) (signed char)3)) ^ (((/* implicit */int) (unsigned char)224))))));
                var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_0])))))));
            }
            /* LoopSeq 3 */
            for (unsigned short i_4 = 3; i_4 < 22; i_4 += 3) 
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((_Bool) ((int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_4])))))))));
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    arr_16 [i_0] [i_0] [(_Bool)1] [(unsigned char)7] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_12 [i_5] [i_4] [i_2] [(signed char)14]))));
                    var_21 = (!(((/* implicit */_Bool) ((0U) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 5ULL))))))));
                    /* LoopSeq 4 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_19 [i_5] [i_5] [i_4] [i_0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((var_10), (((/* implicit */long long int) arr_12 [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1]))))) | (min((((unsigned long long int) 12ULL)), (((/* implicit */unsigned long long int) (+(var_10))))))));
                        var_22 = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-2367)) * (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14)))))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0] [i_0]), (((/* implicit */short) var_11)))))) > (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) 7709948964812128490LL)))))))));
                        var_23 = ((/* implicit */long long int) (_Bool)1);
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)2377))) >= (var_0))) ? (((/* implicit */int) ((signed char) (signed char)-47))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)83)) || (arr_8 [i_0] [22LL] [i_4]))))));
                        var_25 = ((/* implicit */unsigned short) arr_8 [i_0] [i_5] [i_0]);
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0])) && (((/* implicit */_Bool) var_1))));
                        var_27 += ((/* implicit */unsigned long long int) var_1);
                        arr_25 [i_0] [i_2] [i_4 + 2] [i_5] [12ULL] [i_8] [i_0] = ((/* implicit */short) (unsigned short)0);
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((var_3) + (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_2] [i_4 - 2] [i_9] [i_9]))))))));
                        var_29 = ((/* implicit */signed char) 946029822U);
                    }
                }
                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_4] [0LL] [i_4])) && (((/* implicit */_Bool) ((unsigned int) var_13)))))) != (((/* implicit */int) arr_4 [i_2] [i_4])))))));
            }
            for (short i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                var_31 &= ((/* implicit */long long int) min((min((((int) (-2147483647 - 1))), (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) arr_17 [i_10] [i_2] [i_2] [4U] [4U] [i_0]))))))))));
                arr_32 [i_0] [(signed char)10] [i_10] [i_10] |= ((/* implicit */long long int) (+(min((((unsigned long long int) (signed char)11)), (((/* implicit */unsigned long long int) var_11))))));
            }
            for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                arr_36 [i_0] [i_0] [(unsigned char)23] [i_11] = ((/* implicit */signed char) (~(((/* implicit */int) min((arr_28 [i_2] [i_2] [(unsigned char)2] [i_2] [i_2] [i_0] [i_2]), (arr_28 [i_0] [i_0] [i_2] [i_11] [i_11] [i_11] [i_11]))))));
                var_32 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (arr_31 [i_2] [i_0]))))))), (arr_27 [i_0] [(unsigned short)2] [i_2] [i_2] [i_2] [i_2] [i_2])));
            }
        }
    }
    var_33 = ((/* implicit */short) var_8);
}
