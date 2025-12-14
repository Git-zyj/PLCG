/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30322
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_8)))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) var_8)) & (((/* implicit */int) var_12))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (unsigned short i_3 = 1; i_3 < 13; i_3 += 4) 
                {
                    {
                        arr_9 [(unsigned char)0] [(unsigned short)13] [(unsigned short)13] &= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */long long int) ((/* implicit */int) var_10))) | (var_0))) : (((/* implicit */long long int) ((int) (signed char)27))))) + (9223372036854775807LL))) >> (((var_1) - (1908652029543297392ULL)))));
                        var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned short) ((9223372036854775794LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)229))))))), (((((/* implicit */int) var_6)) - (((/* implicit */int) (signed char)37))))));
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) 3596348254U))));
                    }
                } 
            } 
        } 
        var_23 = ((short) ((unsigned short) 5691520695362972283ULL));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_4 = 1; i_4 < 15; i_4 += 3) 
        {
            arr_14 [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)37)) - (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) var_15))));
            var_24 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [i_4]))) < (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_16)))));
            arr_15 [i_4] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) arr_7 [i_0 - 1] [i_4])) / (((/* implicit */int) var_9)))));
        }
        for (short i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            var_25 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)15132))) + (((((/* implicit */unsigned long long int) var_7)) - (var_19)))))));
            var_26 = ((/* implicit */unsigned char) var_4);
            arr_19 [i_0 + 1] [i_5] = ((/* implicit */short) (+(((/* implicit */int) min(((!(((/* implicit */_Bool) var_0)))), ((!(((/* implicit */_Bool) arr_0 [i_0])))))))));
            arr_20 [i_0] = ((/* implicit */short) arr_3 [i_5]);
        }
        arr_21 [i_0] [i_0 + 1] = ((/* implicit */short) var_1);
    }
    for (signed char i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */signed char) ((long long int) ((signed char) (unsigned char)215)));
        arr_24 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_16 [i_6] [i_6] [i_6]))) <= (((/* implicit */int) ((short) ((((((/* implicit */int) (signed char)-107)) + (2147483647))) << (((((((/* implicit */int) var_11)) + (87))) - (14)))))))));
        var_28 = var_14;
    }
    for (signed char i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
    {
        arr_29 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_3))))) || (((/* implicit */_Bool) ((unsigned short) var_3)))))) < (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 4; i_9 < 12; i_9 += 1) 
            {
                {
                    arr_36 [i_7] [i_7] [i_8] [i_9] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_7] [i_9])) && (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) var_2)))));
                    var_29 = ((/* implicit */long long int) var_2);
                    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) arr_7 [i_7] [i_7]))));
                }
            } 
        } 
        arr_37 [(short)4] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned char) ((signed char) var_10))))))) + ((~((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_19)))))));
        arr_38 [i_7] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_10 [i_7] [(signed char)14])), (var_19)));
    }
    var_31 = (((((+(var_19))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) << (((((/* implicit */int) max((var_15), (((unsigned char) (unsigned char)40))))) - (133))));
    var_32 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (signed char)(-127 - 1)))) ? (((/* implicit */int) ((unsigned short) var_16))) : ((+(((/* implicit */int) var_3))))))), (((((/* implicit */long long int) ((/* implicit */int) var_2))) & (var_16)))));
}
