/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34052
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
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) (-(2095216068)))) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))))) : (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned char)114))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [(signed char)14] [i_0])) : (((/* implicit */int) arr_0 [i_0])))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) arr_1 [i_1] [i_1]);
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
        {
            arr_9 [(unsigned char)9] [i_1] [(unsigned char)9] = ((((/* implicit */_Bool) 16551425184298281715ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-85))))) : ((-(((/* implicit */int) var_8)))));
            arr_10 [i_1] = ((/* implicit */int) var_4);
            arr_11 [(signed char)7] [i_2] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (var_4)));
            var_13 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (unsigned char)93))))));
            var_14 = ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
        }
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    {
                        arr_20 [(signed char)0] [i_5] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_3])) ? (var_6) : ((+(((/* implicit */int) var_0))))));
                        arr_21 [i_1] [i_4] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) 2095216068);
                        var_15 = ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_6 [i_5])))));
                    }
                } 
            } 
            var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_1]))));
            arr_22 [(_Bool)0] [i_3] [(unsigned char)8] = ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != (((((/* implicit */_Bool) 9084876533893241015LL)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [2]))))));
            arr_23 [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_1])) | (((/* implicit */int) var_8))));
            arr_24 [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)63600)) >> (((arr_14 [i_3] [i_3] [i_1]) - (1172271586)))));
        }
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
        {
            arr_28 [(short)0] [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_1]))));
            arr_29 [i_6] [11] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_1] [i_6] [(_Bool)1])) ^ (((/* implicit */int) (unsigned short)64162)))))));
            /* LoopSeq 1 */
            for (signed char i_7 = 1; i_7 < 10; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    for (signed char i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        {
                            arr_38 [i_8] [i_8] [(unsigned char)11] [1ULL] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) (short)-23338);
                            var_17 = ((/* implicit */int) var_9);
                            arr_39 [i_1] [i_6] [i_7] [8ULL] [8ULL] [(signed char)3] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) arr_3 [i_6]))));
                        }
                    } 
                } 
                arr_40 [i_1] [(_Bool)1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_7] [i_6] [i_7 + 2])) ? (((/* implicit */int) (short)26806)) : (((/* implicit */int) arr_17 [i_7] [i_6] [i_7 + 1]))));
            }
        }
    }
    /* vectorizable */
    for (short i_10 = 0; i_10 < 19; i_10 += 2) 
    {
        arr_43 [i_10] = ((/* implicit */signed char) ((((/* implicit */int) arr_41 [i_10] [i_10])) | (((/* implicit */int) ((unsigned char) -1744075848)))));
        arr_44 [(unsigned char)7] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_41 [i_10] [i_10]))))) ? (((/* implicit */int) ((short) (unsigned char)175))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (-1081715135)))));
    }
    var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (signed char)77))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1145509284)) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) var_1))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 13343691812079254802ULL))))))));
}
