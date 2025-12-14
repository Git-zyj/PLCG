/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204447
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
    var_16 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) ((_Bool) (unsigned char)24));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 4; i_3 < 21; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned int) -9223372036854775797LL);
                        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) arr_0 [i_2]);
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 1) 
                    {
                        arr_12 [i_2] = ((/* implicit */unsigned long long int) ((int) -9223372036854775797LL));
                        arr_13 [i_2] [i_1] [i_2] [i_2] [i_4 - 2] = ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])))))) : (((((/* implicit */_Bool) ((var_8) ? (arr_3 [(signed char)12] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775797LL)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) : (arr_3 [i_4 - 2] [i_2] [i_1 - 2]))));
                        arr_14 [i_2] [i_0] [i_1] [i_1 + 2] [i_2] [13ULL] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) 9223372036854775797LL)) ? (-9223372036854775798LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)150)))))))));
                        arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] = var_3;
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((unsigned int) -9223372036854775797LL)))));
                    }
                    var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775798LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (9223372036854775791LL)));
                    arr_16 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (unsigned short)65535))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_20 [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 3] [i_1])))))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((((/* implicit */_Bool) arr_2 [i_1] [i_1 + 3] [i_1 - 1])) ? (arr_2 [i_0] [(signed char)1] [i_1 - 4]) : (((/* implicit */unsigned long long int) arr_10 [i_6] [i_6] [i_1 + 2] [i_1 + 3] [i_1 + 3] [i_0]))))));
                            var_23 = ((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_0] [i_2] [i_6] [i_1 + 2]);
                            var_24 = ((/* implicit */unsigned int) var_2);
                        }
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (unsigned short)0))));
                        arr_21 [10U] [i_2] [(_Bool)1] [(_Bool)1] [10U] = ((/* implicit */unsigned char) ((arr_5 [i_2] [i_1 + 3]) ^ (arr_5 [i_2] [i_1 + 3])));
                    }
                }
            } 
        } 
        arr_22 [i_0] [i_0] = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [(unsigned short)7] [i_0] [i_0])) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)154))))))) % (((/* implicit */unsigned long long int) (+(arr_17 [11ULL] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 0U)) % (((((/* implicit */_Bool) arr_4 [(unsigned char)21] [(unsigned char)21] [i_7] [i_7])) ? (((((/* implicit */_Bool) arr_4 [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7]))) : (arr_3 [i_7] [(signed char)2] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_15))))))));
        arr_26 [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) (unsigned char)102)))));
        var_27 &= (+(((unsigned long long int) arr_24 [i_7])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_8 = 4; i_8 < 22; i_8 += 4) 
        {
            var_28 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */int) var_15)) % (((/* implicit */int) arr_20 [(unsigned short)8] [i_8 + 1] [(unsigned short)8] [i_8] [i_8])))) : (((/* implicit */int) ((var_1) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)10460))))))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                for (unsigned char i_10 = 4; i_10 < 23; i_10 += 2) 
                {
                    {
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_19 [i_10]))) ? (arr_32 [i_10 - 3] [(signed char)1] [i_10 + 1] [i_10 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_10 + 1])))));
                        var_30 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */_Bool) var_3)) ? (arr_3 [i_7] [i_8] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                        var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)244))));
                    }
                } 
            } 
        }
    }
    var_32 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
    var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((+(((/* implicit */int) var_15)))), ((-(((/* implicit */int) var_0)))))))));
}
