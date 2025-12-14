/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23549
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_4 [i_0] [(signed char)18] = ((/* implicit */unsigned int) arr_2 [(short)17] [i_0]);
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)110)) / (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (signed char)-110))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                var_16 *= ((/* implicit */unsigned long long int) ((long long int) -1LL));
                arr_13 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 429073775U))));
            }
        }
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
        {
            arr_16 [i_0] [i_0] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-75))));
            var_17 = ((/* implicit */unsigned int) max((var_17), ((+(arr_8 [i_0])))));
        }
        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    for (unsigned short i_7 = 3; i_7 < 17; i_7 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_4)) : (10528406629705927776ULL)))));
                            var_19 = ((/* implicit */int) var_9);
                            arr_27 [(unsigned short)1] [(unsigned short)1] [i_5] [i_6] [(unsigned short)1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(var_5))))));
                        }
                    } 
                } 
                arr_28 [i_5] [i_4] [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */int) (signed char)-66)) - (((((/* implicit */_Bool) arr_21 [i_0] [(unsigned short)13] [i_0])) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) var_8))))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5] [i_4] [i_0]))) & (9223372036854775807LL)));
            }
            arr_29 [i_0] = ((/* implicit */long long int) (((-(((/* implicit */int) arr_2 [i_4] [i_4])))) == (((/* implicit */int) ((((/* implicit */int) (unsigned char)244)) > (((/* implicit */int) (unsigned char)4)))))));
            var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)85)) | (((/* implicit */int) (signed char)-51)))))));
        }
        /* LoopSeq 1 */
        for (int i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            var_22 = ((/* implicit */short) (+(((/* implicit */int) arr_11 [i_8]))));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-83)))))) ? (((/* implicit */long long int) (~(163684044U)))) : (arr_24 [i_8] [i_8] [i_0] [i_0] [i_0])));
        }
        arr_32 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7181)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48436))) : ((-9223372036854775807LL - 1LL))))) ? (9223372036854775807LL) : (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]));
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) 
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 18; i_10 += 2) 
        {
            for (long long int i_11 = 1; i_11 < 16; i_11 += 2) 
            {
                for (unsigned int i_12 = 2; i_12 < 17; i_12 += 1) 
                {
                    {
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (-(-15LL))))));
                        var_25 = (~((+(((/* implicit */int) var_8)))));
                        arr_42 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)77)) ^ (arr_10 [i_11] [i_11] [i_11 - 1] [i_11 - 1])));
                        var_26 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) 16777215))))));
                    }
                } 
            } 
        } 
        var_27 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)-1))))) : (arr_19 [(short)9] [i_9]));
        arr_43 [i_9] [i_9] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)14498))) : (arr_40 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])));
        arr_44 [9LL] = ((/* implicit */long long int) ((_Bool) (signed char)90));
        var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)98))));
    }
    var_29 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (var_4)));
    var_30 = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) var_11)))));
    var_31 = ((/* implicit */signed char) var_4);
}
