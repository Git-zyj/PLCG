/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220738
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
    var_18 = var_17;
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        {
                            var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))));
                            var_20 = (short)-18863;
                        }
                    } 
                } 
            } 
            var_21 ^= arr_0 [(short)15] [i_1];
            arr_13 [(unsigned char)8] [(unsigned char)8] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)68))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_18 [(short)16] &= ((/* implicit */unsigned short) var_3);
            var_22 *= ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_5] [i_0] [(unsigned short)21])) > (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])))))));
            arr_19 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)5477)) >= (((/* implicit */int) (unsigned short)35215))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_17 [i_7])))))));
                arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_22 [(_Bool)1] [i_6] [i_7]))));
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((-4247026485044616397LL) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)2625))))))))));
            }
            var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)2625)) ^ (((/* implicit */int) var_13)))))));
        }
        for (long long int i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                for (signed char i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    {
                        var_26 *= ((/* implicit */short) (unsigned short)37114);
                        arr_37 [(short)3] [i_10] [(_Bool)0] [i_8] [i_0] = ((/* implicit */_Bool) var_4);
                        arr_38 [i_0] [i_8] [i_9] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? ((+(var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
            {
                arr_42 [i_11] [(unsigned short)10] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_0] [i_0]))));
                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-24729)) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)-9480)))))));
                arr_43 [i_8] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_8] [i_11] [i_11] [(short)2] [i_8])) ? (((/* implicit */int) arr_8 [i_0] [4LL] [i_0] [i_11] [20LL] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_8] [i_11] [i_8] [i_8] [i_0]))));
            }
            for (long long int i_12 = 0; i_12 < 22; i_12 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned short i_13 = 0; i_13 < 22; i_13 += 2) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) (short)5477)))));
                    arr_49 [i_0] [(short)12] [i_0] [(unsigned char)10] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_12] [i_12] [i_8])) ? (((/* implicit */int) (short)2625)) : (((/* implicit */int) arr_6 [i_0] [i_12] [i_13]))));
                }
                for (unsigned short i_14 = 0; i_14 < 22; i_14 += 2) /* same iter space */
                {
                    var_29 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_6 [i_0] [(short)1] [(unsigned char)0])) ? (((/* implicit */int) (short)-5478)) : (((/* implicit */int) arr_8 [i_0] [i_8] [i_12] [i_14] [(unsigned short)16] [i_14]))))));
                    var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_50 [4LL] [i_8])))))))));
                }
                var_31 &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_12] [i_8] [i_0]))) % (arr_2 [4LL])));
            }
        }
        var_32 = ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13)))) >= ((+(((/* implicit */int) arr_14 [8LL])))));
    }
    var_33 = ((/* implicit */long long int) var_17);
}
