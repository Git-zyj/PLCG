/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206642
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
    var_16 &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(3625174705U)))) ? ((~(var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)190), (((/* implicit */unsigned char) (_Bool)1))))))))));
    var_17 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (max((max((var_11), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (var_12)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) 2097002270)))));
        var_19 = var_13;
        arr_3 [i_0] = ((/* implicit */unsigned int) ((long long int) (unsigned char)65));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */short) arr_4 [i_1]);
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)9)) ? (((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)191))) : (9223372036854775805LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-31633)))));
    }
    for (unsigned int i_2 = 1; i_2 < 18; i_2 += 2) 
    {
        arr_8 [i_2 - 1] [i_2] = ((short) -1LL);
        arr_9 [i_2] = ((/* implicit */_Bool) var_8);
        var_22 = ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_2]))))) ? (min((((/* implicit */unsigned int) (signed char)-1)), (4294967295U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_6 [i_2])))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_3 = 1; i_3 < 21; i_3 += 1) /* same iter space */
        {
            arr_14 [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2 + 1] [i_2 + 2] [i_2 + 3]))) + (arr_11 [i_2 + 4] [i_2 + 1] [i_2 + 3])));
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (long long int i_6 = 4; i_6 < 18; i_6 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) -307315443452842201LL)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (signed char)-30))))));
                            var_24 ^= 1LL;
                            arr_22 [i_2] [i_2 + 4] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_10 [i_2] [i_2]))) << (((((/* implicit */int) var_5)) - (26094)))));
                            var_25 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned char)65)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2] [(_Bool)1] [i_4] [(_Bool)1])) ? (var_1) : (((/* implicit */long long int) 4294967295U)))))));
                        }
                    } 
                } 
                var_26 = var_1;
                arr_23 [i_3 + 1] [i_2] = ((((/* implicit */_Bool) -1LL)) ? (6LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)233))));
                var_27 = ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) > (((14920999U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)68))))));
            }
        }
        /* vectorizable */
        for (unsigned int i_7 = 1; i_7 < 21; i_7 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */signed char) (-((+(arr_17 [i_2] [i_2] [i_7 - 1] [i_7 + 1])))));
            arr_28 [i_2 + 1] [i_7 + 1] = ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
        }
        /* vectorizable */
        for (unsigned int i_8 = 1; i_8 < 21; i_8 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */signed char) (((~(((/* implicit */int) (unsigned char)68)))) & (((/* implicit */int) (unsigned char)27))));
            arr_31 [i_2] [i_8] [i_8] = ((/* implicit */short) (~(((/* implicit */int) arr_13 [i_2] [i_8 - 1] [i_2 + 1]))));
        }
        /* vectorizable */
        for (unsigned int i_9 = 1; i_9 < 21; i_9 += 1) /* same iter space */
        {
            arr_34 [i_2] [i_9 + 1] [i_9] = ((/* implicit */short) (~((~(((/* implicit */int) (short)15108))))));
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 0; i_12 < 22; i_12 += 2) 
                        {
                            arr_42 [i_10] [i_9] [i_10] [i_10] [i_12] [i_2] [i_12] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) -1LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-40))))));
                            var_30 = ((/* implicit */_Bool) (+(var_14)));
                            arr_43 [(unsigned short)18] [i_9] [i_9] [i_9] [i_11] [i_12] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)127))));
                        }
                        var_31 *= ((/* implicit */signed char) (+(var_14)));
                        var_32 = ((/* implicit */unsigned int) ((int) arr_18 [i_9 - 1] [i_2 + 1]));
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [i_2 + 2] [i_2 - 1] [i_9 - 1])) % (((/* implicit */int) arr_33 [i_2 + 1] [i_2 + 2] [i_9 + 1]))));
                    }
                } 
            } 
        }
    }
}
