/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224477
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_11 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) var_4)), (4294967290U)))))) & (min((((/* implicit */unsigned long long int) (~(-1)))), (((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))))));
        var_12 &= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) ((short) 4294967295U))) : (((/* implicit */int) ((unsigned short) arr_1 [i_0] [13ULL])))))), (min((((/* implicit */unsigned long long int) (+(-13)))), ((-(arr_1 [2] [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [8] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((int) (_Bool)0))) ? (((((/* implicit */_Bool) -1LL)) ? (-722823735) : (722823750))) : ((-(((/* implicit */int) (unsigned short)32146))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_7 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -722823735)) ? (((/* implicit */int) (short)29668)) : (((/* implicit */int) (short)5037))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    {
                        arr_13 [2ULL] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)124))));
                        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (_Bool)1)) : (722823750)))) : (6119958298801854366ULL)));
                    }
                } 
            } 
        }
        for (signed char i_5 = 2; i_5 < 10; i_5 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
            {
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_5] [i_5 + 3] [i_5 + 4])) ? (((((/* implicit */unsigned long long int) arr_11 [i_6] [i_6] [i_1] [i_1] [i_1])) - (arr_14 [i_1] [i_5 + 1] [i_5 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((arr_12 [i_5 - 1] [i_5 + 3] [i_5 + 2] [i_5] [i_5 + 2]) / (((/* implicit */int) ((short) 16692939710335148358ULL))))))));
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned char i_8 = 4; i_8 < 10; i_8 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))));
                            var_17 += ((/* implicit */short) (~(((((/* implicit */int) var_9)) | (((/* implicit */int) (unsigned char)64))))));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) arr_12 [i_1] [i_5] [i_6] [i_7] [i_8 + 2]))));
                        }
                    } 
                } 
            }
            for (int i_9 = 0; i_9 < 14; i_9 += 2) /* same iter space */
            {
                arr_28 [i_5 + 1] [i_5 + 1] = ((/* implicit */int) (unsigned char)1);
                var_19 ^= ((/* implicit */unsigned long long int) ((unsigned int) ((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)27809))))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (((_Bool)0) || (((/* implicit */_Bool) -722823751)))))));
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) 0U)) : (6119958298801854366ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_10))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))) : (((/* implicit */int) (unsigned short)34867))))) : ((~(((((/* implicit */_Bool) (short)-27810)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-27809))) : (var_3))))))))));
            }
            for (unsigned int i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                var_22 += ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (unsigned short)34867)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)8)))) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_22 [i_1] [i_5] [i_1] [i_5 - 2] [i_5]))))));
                var_23 = ((/* implicit */unsigned int) min((var_23), ((((~(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (var_7))))) >> ((~((~(((/* implicit */int) (_Bool)1))))))))));
            }
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) -2049493005))));
        }
        for (short i_11 = 0; i_11 < 14; i_11 += 1) 
        {
            var_25 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : ((~(((/* implicit */int) (short)27802)))));
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)30691)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_25 [i_1] [i_1]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_15 [i_1] [i_1] [i_1])), (var_5)))) ? (673807153) : (((/* implicit */int) (unsigned char)80))))) : (min((var_7), (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-32760)) + (2147483647))) >> (((/* implicit */int) var_0)))))))));
        }
        for (unsigned short i_12 = 0; i_12 < 14; i_12 += 2) 
        {
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)17858)) * (((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)255)), (16692939710335148358ULL)))) ? (min((arr_8 [i_1] [i_12] [i_12] [i_1]), (338594202))) : (((((/* implicit */int) var_8)) / (((/* implicit */int) (short)-5861)))))) : ((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))))))))));
            /* LoopSeq 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                arr_40 [i_1] = ((/* implicit */_Bool) (unsigned char)210);
                var_28 = -722823735;
            }
            for (unsigned int i_14 = 1; i_14 < 10; i_14 += 2) 
            {
                arr_45 [i_1] [(unsigned short)13] [i_14] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)30664)), (((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_14 + 3] [8ULL] [i_1])) ? (((/* implicit */int) var_0)) : (722823734)))));
                var_29 = ((/* implicit */unsigned short) ((min((1753804363374403258ULL), (5834508581998711929ULL))) > (min((((5834508581998711927ULL) ^ (arr_27 [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) arr_0 [(short)5]))))));
                var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned char)202)))))))));
                var_31 = ((/* implicit */int) ((_Bool) 6119958298801854366ULL));
            }
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 14; i_15 += 1) 
            {
                for (int i_16 = 0; i_16 < 14; i_16 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_17 = 0; i_17 < 14; i_17 += 1) 
                        {
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((((/* implicit */_Bool) -673807153)) ? (((/* implicit */int) (unsigned char)238)) : (718671558))) - (((/* implicit */int) arr_15 [(short)7] [i_16] [(short)7])))))));
                            var_33 = ((/* implicit */unsigned short) (-((+(arr_27 [i_12] [i_15] [i_16] [(short)13])))));
                            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_1))))) <= (((long long int) arr_29 [i_1] [i_12] [i_15]))))))))));
                        }
                        var_35 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)75)) | (407496719))))) >= (-722823768)));
                        arr_53 [i_16] [4U] [i_16] [i_16] [i_16] = ((/* implicit */short) ((unsigned char) (short)2060));
                    }
                } 
            } 
        }
    }
    var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19964)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) ((2771525025U) > (((/* implicit */unsigned int) 1073741822)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((((/* implicit */_Bool) (short)24576)) && (((/* implicit */_Bool) 0ULL)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1308681397)) && (((/* implicit */_Bool) (short)25859))))))))));
}
