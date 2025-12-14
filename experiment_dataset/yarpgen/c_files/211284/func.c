/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211284
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
    var_16 = ((/* implicit */unsigned int) ((unsigned short) var_11));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(max((((/* implicit */long long int) max((var_12), (var_11)))), (((var_0) & (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
        arr_4 [i_0] = ((/* implicit */short) ((unsigned short) max(((short)15607), (((/* implicit */short) ((unsigned char) var_12))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_7 [12ULL] = ((/* implicit */unsigned char) ((1152851135862669312LL) < (((/* implicit */long long int) var_1))));
        var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                for (unsigned char i_4 = 1; i_4 < 16; i_4 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            arr_18 [i_1] [i_4] [i_2] [i_2] [i_2] [i_1] = (~(-1156661934));
                            var_18 ^= ((/* implicit */short) (-(8624854244930713568LL)));
                            var_19 = ((/* implicit */_Bool) ((short) var_3));
                        }
                        for (unsigned char i_6 = 1; i_6 < 16; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */int) ((unsigned char) (unsigned char)255));
                            var_21 = ((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) var_10)));
                            arr_21 [i_2] [i_2] [i_2] [i_4] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) + (((/* implicit */int) (unsigned char)154))));
                            var_22 = ((/* implicit */unsigned int) 272980266);
                        }
                        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((unsigned short) (_Bool)0)))));
                            var_24 += ((/* implicit */int) (unsigned short)49152);
                        }
                        for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            arr_28 [i_2] [6ULL] [i_3] [i_4] [i_8] [i_3] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)19))));
                            arr_29 [i_2] [i_2] [i_3] [i_4] [i_2] = ((/* implicit */int) ((unsigned char) ((unsigned char) 714762147U)));
                            arr_30 [i_1] [(unsigned short)1] [i_2] [5U] [i_8] = ((/* implicit */short) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_12))));
                            var_25 = ((/* implicit */short) min((var_25), (((short) (+(0))))));
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) var_10))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 1; i_9 < 15; i_9 += 3) 
                        {
                            arr_33 [i_9] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (short)0))))) + (4542842507702871788LL)));
                            arr_34 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_1);
                        }
                        var_27 = ((4294967286U) < (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_2)))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_10 = 0; i_10 < 17; i_10 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_11 = 1; i_11 < 15; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                for (int i_13 = 0; i_13 < 17; i_13 += 3) 
                {
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)137)) && ((_Bool)1))) || (((/* implicit */_Bool) var_13)))))) < (((4294967277U) & (((/* implicit */unsigned int) 2147483647))))));
                        arr_45 [i_10] [i_13] [i_10] [i_10] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((((/* implicit */long long int) 0)) + (762576833205228607LL))) < ((+(var_0)))))), ((-(((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_14 = 2; i_14 < 15; i_14 += 4) 
            {
                arr_48 [i_10] [i_11] [(unsigned short)1] [i_11] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)31114))));
                arr_49 [i_10] = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)78))))) & (599659765U)));
                arr_50 [i_10] [i_11 - 1] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
                var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
            }
        }
        var_30 = ((/* implicit */signed char) var_0);
    }
    for (unsigned char i_15 = 0; i_15 < 12; i_15 += 2) 
    {
        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) min(((+(-1851080472))), (36300549))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_16 = 0; i_16 < 12; i_16 += 2) 
        {
            var_32 = ((var_0) + (((/* implicit */long long int) 714762149U)));
            var_33 -= ((/* implicit */int) ((((0LL) | (((/* implicit */long long int) var_13)))) >> (((/* implicit */int) (unsigned char)9))));
        }
        for (unsigned char i_17 = 0; i_17 < 12; i_17 += 2) 
        {
            arr_57 [i_15] = ((/* implicit */long long int) max((3917053488U), (((/* implicit */unsigned int) (signed char)-122))));
            arr_58 [i_15] [(unsigned char)1] = ((/* implicit */long long int) (~(((/* implicit */int) max(((short)28953), (((/* implicit */short) (unsigned char)247)))))));
            var_34 = -409349491;
            var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((unsigned char) min(((short)-30559), (((/* implicit */short) (unsigned char)81))))))));
        }
    }
}
