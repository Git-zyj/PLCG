/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210384
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        arr_2 [18U] = ((/* implicit */unsigned short) max((max((max((15445549192763524633ULL), (((/* implicit */unsigned long long int) var_4)))), (var_6))), (((var_7) / (((/* implicit */unsigned long long int) arr_1 [19LL]))))));
        var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-70)) >= (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)0))))))));
                    var_13 = ((/* implicit */unsigned long long int) ((short) max((max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)1))), (((/* implicit */unsigned char) (signed char)96)))));
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_3 [i_0] [2U] [i_2])))) & (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_3] [10U])) & (((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) (unsigned short)12)))) : (((/* implicit */int) max((((/* implicit */short) arr_5 [i_3] [i_3])), (var_5)))))))))));
        arr_10 [(short)8] = ((/* implicit */short) var_6);
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_5 [i_3] [i_3])) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) arr_5 [i_3] [i_3]))))))) ? (((/* implicit */int) min((max((((/* implicit */unsigned short) arr_5 [i_3] [i_3])), ((unsigned short)10449))), (var_3)))) : (((/* implicit */int) (signed char)62)))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
    {
        arr_15 [(unsigned char)8] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4])))))));
        arr_16 [21] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_4])) % (((/* implicit */int) ((unsigned short) arr_4 [19LL] [i_4])))));
    }
    /* LoopSeq 3 */
    for (unsigned short i_5 = 2; i_5 < 9; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 1; i_6 < 8; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 2; i_7 < 8; i_7 += 3) 
            {
                {
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_5] [i_5] [(short)6])) - (((/* implicit */int) var_1)))))))))))));
                    var_18 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) (_Bool)0)))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_7] [(short)16]))))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (831578233U)))))), ((~(((/* implicit */int) var_10))))));
    }
    for (long long int i_8 = 0; i_8 < 15; i_8 += 1) 
    {
        var_20 = ((/* implicit */_Bool) arr_12 [i_8]);
        arr_29 [5U] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (short)8191)), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-110))))) ? ((~(var_6))) : (((/* implicit */unsigned long long int) ((int) arr_25 [i_8])))))));
    }
    for (short i_9 = 0; i_9 < 10; i_9 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_10 = 2; i_10 < 9; i_10 += 1) 
        {
            arr_37 [i_10] [i_9] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)0))));
            var_21 = ((/* implicit */short) arr_23 [i_10 + 1] [i_10 - 1] [i_10 - 1]);
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-97)), (var_0)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_9])))))) : (4525462025532631845ULL))))))));
            var_23 = ((/* implicit */unsigned short) max((((unsigned int) max((((/* implicit */unsigned long long int) arr_4 [i_10] [(short)16])), (var_7)))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((short) var_8))))))));
        }
        for (long long int i_11 = 3; i_11 < 7; i_11 += 3) 
        {
            arr_40 [i_11] = ((/* implicit */short) ((unsigned long long int) 3824723097479954504LL));
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (-(((((/* implicit */int) arr_32 [i_9])) | ((~(((/* implicit */int) arr_39 [0U] [i_9] [i_9])))))))))));
            arr_41 [i_11] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (arr_23 [i_9] [i_11 - 1] [(signed char)4])))), ((~(((/* implicit */int) var_10))))));
        }
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 10; i_12 += 3) 
        {
            for (unsigned int i_13 = 0; i_13 < 10; i_13 += 1) 
            {
                {
                    arr_48 [i_12] [i_12] = ((/* implicit */unsigned long long int) (short)12265);
                    arr_49 [i_9] [i_12] [i_9] [i_9] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 562949953421312ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_4)))) ? (((/* implicit */int) arr_3 [i_13] [i_9] [i_9])) : (((/* implicit */int) arr_24 [i_9] [i_9] [i_9] [i_9]))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_28 [i_13])) >= (((/* implicit */int) arr_28 [i_9]))))))));
                    /* LoopNest 2 */
                    for (short i_14 = 4; i_14 < 8; i_14 += 4) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 3) 
                        {
                            {
                                arr_56 [(signed char)2] [i_12] [i_12] [i_14] [i_15] = max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_12] [2U] [1U] [6ULL])) && (var_10))))) & (var_7))), (((/* implicit */unsigned long long int) arr_21 [i_9] [i_12] [(short)5])));
                                arr_57 [i_9] [5U] [i_13] [i_12] [i_15] = ((int) var_6);
                                arr_58 [i_12] [i_13] = ((/* implicit */int) min((max((((/* implicit */unsigned int) ((_Bool) (signed char)81))), (min((arr_20 [i_12] [(short)0] [i_12]), (((/* implicit */unsigned int) var_1)))))), (((/* implicit */unsigned int) ((((var_10) ? (3346407533U) : (((/* implicit */unsigned int) 401928968)))) != (arr_47 [i_12] [(signed char)8] [i_14 + 1] [i_14]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned short) max(((((!(((/* implicit */_Bool) (unsigned char)236)))) ? (((unsigned int) var_4)) : ((+(64615891U))))), (((/* implicit */unsigned int) ((signed char) (_Bool)1)))));
    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((short) var_9)))));
}
