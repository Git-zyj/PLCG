/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235168
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_1) > (((/* implicit */unsigned long long int) arr_1 [i_0 + 2] [i_0])))))) : (arr_0 [i_0] [i_0 + 2])));
        var_19 = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((arr_1 [i_0 - 1] [i_0]) < (((((arr_0 [i_0] [i_0]) + (9223372036854775807LL))) << (((var_12) - (2170811213U)))))))) : (((/* implicit */long long int) ((arr_1 [i_0 - 1] [i_0]) < (((((((arr_0 [i_0] [i_0]) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((var_12) - (2170811213U))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 1) /* same iter space */
    {
        arr_5 [(signed char)13] = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) * (var_0))))), (((/* implicit */unsigned long long int) ((var_0) >= (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_4 [i_1 + 1])), (var_9)))))))));
        var_20 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_2 [i_1 - 1])), ((-(((/* implicit */int) arr_2 [i_1 - 2]))))))) < (min((((/* implicit */unsigned long long int) (unsigned short)23276)), (var_5)))));
        var_21 = ((/* implicit */unsigned short) ((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 3])))));
        arr_6 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 10793476317138431950ULL))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            var_22 = ((/* implicit */signed char) arr_9 [i_2]);
            var_23 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_16)))) <= (arr_9 [i_3]))) ? (((((/* implicit */unsigned long long int) ((var_15) ? (((/* implicit */unsigned int) var_2)) : (var_8)))) / (arr_9 [i_2]))) : (((unsigned long long int) ((signed char) var_17)))));
            var_24 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */unsigned long long int) 3195255307U)) : (((var_14) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52149)))))))));
            var_25 ^= ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) arr_11 [i_3] [i_3] [i_2])), (var_1)))));
        }
        arr_13 [(unsigned short)18] = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_12 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_7 [i_2])))), (((/* implicit */int) arr_7 [i_2]))));
    }
    for (long long int i_4 = 1; i_4 < 13; i_4 += 1) 
    {
        var_26 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_14 [i_4 - 1]))))));
        var_27 = ((/* implicit */signed char) ((var_12) + (((/* implicit */unsigned int) ((((/* implicit */int) ((var_8) >= (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) | (((/* implicit */int) arr_12 [i_4 + 2] [i_4 + 2] [i_4 - 1])))))));
        var_28 = ((/* implicit */short) (+(((/* implicit */int) ((short) arr_11 [i_4] [i_4] [i_4])))));
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) ((var_11) <= (var_11)))))) | (((/* implicit */int) (unsigned char)218)))))));
    }
    var_30 = ((/* implicit */unsigned short) var_17);
    /* LoopSeq 2 */
    for (int i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            var_31 = ((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) arr_21 [(unsigned short)13] [(unsigned short)13])))));
            var_32 &= ((((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) 3195255286U)) | (-1806198731617914914LL))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)-121)) ? (7999164937041191408LL) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6] [i_6]))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_20 [(signed char)12] [i_5] [i_6])), (var_17))))))) : (((unsigned long long int) var_5)));
            var_33 = ((/* implicit */unsigned short) ((signed char) (+(((/* implicit */int) var_7)))));
        }
        arr_22 [i_5] = ((/* implicit */long long int) var_4);
    }
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        arr_26 [i_7] = (+(max((arr_25 [i_7]), (((/* implicit */long long int) arr_24 [i_7])))));
        arr_27 [i_7] [i_7] &= ((signed char) ((var_11) < (((/* implicit */unsigned int) (~(((/* implicit */int) var_16)))))));
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            var_34 = ((/* implicit */unsigned long long int) ((long long int) ((signed char) arr_28 [i_7] [i_8] [i_7])));
            arr_32 [i_7] [i_8] = ((/* implicit */long long int) (+((-(arr_24 [i_7])))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
            {
                arr_35 [16LL] [(unsigned char)20] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_7] [i_8] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_7] [i_7]))) : (arr_34 [i_7] [i_8] [i_9])));
                var_35 = ((/* implicit */unsigned short) (_Bool)1);
                var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((unsigned short) arr_23 [i_7])))));
                var_37 = ((/* implicit */_Bool) ((((((/* implicit */int) var_16)) + (2147483647))) >> (((((/* implicit */int) arr_33 [i_8] [i_9])) - (36352)))));
            }
            for (unsigned short i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
            {
                arr_38 [i_10] [i_8] [i_8] [i_10] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) arr_24 [i_8])) - (var_5))) | (((/* implicit */unsigned long long int) ((unsigned int) var_7)))));
                arr_39 [i_7] [(signed char)9] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_23 [i_7])) ? (var_0) : (var_1))))))));
                var_38 = min(((-(((((/* implicit */long long int) var_2)) ^ (arr_25 [i_7]))))), (((/* implicit */long long int) var_17)));
            }
            for (unsigned short i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
            {
                arr_42 [i_7] [i_7] [(unsigned char)19] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_8] [i_8]))) : (((unsigned long long int) (signed char)100))));
                var_39 = ((/* implicit */long long int) max((((/* implicit */signed char) ((var_10) || (((/* implicit */_Bool) arr_31 [i_7] [i_8]))))), (max((((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)224)) || (((/* implicit */_Bool) (unsigned short)13393))))), (var_16)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_12 = 0; i_12 < 22; i_12 += 1) 
                {
                    arr_47 [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) (+(arr_34 [i_12] [i_7] [i_7])));
                    arr_48 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) arr_40 [(_Bool)1]);
                }
            }
        }
    }
}
