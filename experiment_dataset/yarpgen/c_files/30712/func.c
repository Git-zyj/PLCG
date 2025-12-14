/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30712
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
    var_20 = ((/* implicit */unsigned long long int) var_13);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        arr_2 [(unsigned short)14] |= ((/* implicit */unsigned int) (!(((_Bool) arr_0 [i_0]))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned int) ((long long int) min((((/* implicit */unsigned long long int) min((arr_1 [i_1]), (arr_5 [(unsigned char)4] [i_1] [(unsigned char)4])))), (min((((/* implicit */unsigned long long int) var_3)), (arr_0 [i_0]))))));
            arr_6 [15ULL] = ((/* implicit */int) var_4);
            arr_7 [i_0] [3U] [i_1] = ((/* implicit */unsigned char) var_8);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        arr_14 [i_0] [7U] [7U] [i_3] |= 238759790;
                        var_22 = ((/* implicit */unsigned char) var_7);
                    }
                } 
            } 
        }
        for (int i_4 = 2; i_4 < 15; i_4 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(-17404223)))), (6736880734444113208ULL)))) ? (((/* implicit */int) ((arr_3 [i_4 - 1] [i_4 - 2]) != (arr_3 [i_4 - 1] [i_4 - 2])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 1349213049U)) < (arr_3 [i_4 - 2] [i_4 - 2]))))));
            var_24 -= ((/* implicit */unsigned short) var_0);
            var_25 = ((/* implicit */unsigned int) (((+(arr_3 [i_4 - 2] [i_4 + 1]))) >> (((1349213043U) - (1349213022U)))));
            arr_17 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((arr_16 [i_0]) << (((arr_3 [12] [12]) - (7714609016399422305ULL))))) < (min((arr_15 [15ULL]), (((/* implicit */long long int) (short)21051))))))) >> (((((((/* implicit */_Bool) arr_11 [(unsigned char)1] [i_4 + 1] [i_4] [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_4 + 1]))) : (var_0))) - (28059ULL)))));
        }
        for (int i_5 = 2; i_5 < 15; i_5 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_5])) ? (((/* implicit */unsigned long long int) max((arr_1 [i_5 + 1]), (((/* implicit */long long int) arr_18 [6U] [6U] [i_5]))))) : (((unsigned long long int) 1013299383407825676ULL))));
            var_27 = (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_19 [i_0] [i_5 - 2])) : (arr_15 [i_0]))));
        }
        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)19)))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_19 [i_6] [i_6])) < (((unsigned int) arr_5 [i_6] [(unsigned char)8] [i_6]))));
        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_6] [i_6])) : (((/* implicit */int) arr_9 [i_6] [i_6]))));
        arr_23 [(short)0] = arr_19 [i_6] [12];
        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_21 [i_6])))))))));
    }
    for (int i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned long long int) arr_25 [i_7] [i_7]);
        arr_28 [5U] = ((/* implicit */long long int) ((((max((((/* implicit */long long int) arr_8 [i_7] [i_7] [i_7] [i_7])), (arr_16 [(short)11]))) != (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_15 [i_7])))))) ? (min((max((((/* implicit */int) var_12)), (1753558995))), (((/* implicit */int) ((((/* implicit */int) (short)-23927)) != (((/* implicit */int) var_12))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_8)))))));
        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) max((arr_3 [11LL] [6U]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_1 [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)-4531)))) : (arr_15 [i_7])))))))));
    }
    for (int i_8 = 0; i_8 < 16; i_8 += 2) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((var_6) == (-11))))))));
        arr_32 [i_8] = ((((/* implicit */_Bool) (+(min((((/* implicit */long long int) var_5)), (arr_11 [i_8] [15U] [9LL] [i_8])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_8] [i_8])) ? (arr_22 [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (short)21072)))))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_8] [i_8] [i_8] [(short)8] [i_8] [i_8])) ? (((/* implicit */long long int) var_7)) : ((-9223372036854775807LL - 1LL))))));
    }
    var_35 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) var_10)), ((-(1013299383407825676ULL))))), (var_0)));
}
