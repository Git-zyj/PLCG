/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247436
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
    var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) var_11))) % (var_16))), (((var_8) % (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((signed char) var_5))), ((-(var_5)))))) : (var_16)));
    var_19 = ((/* implicit */int) max((var_19), (((int) (~((+(var_17))))))));
    var_20 ^= ((/* implicit */long long int) var_13);
    var_21 *= ((((/* implicit */long long int) ((int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) != (var_4))))) / (min((((/* implicit */long long int) min((var_11), (((/* implicit */unsigned short) var_0))))), (((((/* implicit */long long int) ((/* implicit */int) var_15))) ^ (var_16))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) % (arr_0 [i_0] [(_Bool)1])))) ? ((~(arr_0 [(signed char)23] [i_0]))) : ((~(arr_0 [(short)19] [(signed char)17])))));
        arr_2 [i_0] = arr_0 [i_0] [(unsigned short)4];
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 + 3] [i_2 + 1])) > (((/* implicit */int) arr_1 [i_0 + 2] [i_2 + 2]))));
                        var_24 = ((/* implicit */unsigned char) var_11);
                        arr_13 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (~((+(((/* implicit */int) var_15))))));
                        var_25 = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_3]))))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */long long int) ((signed char) arr_11 [12] [12] [i_0] [i_0 - 1] [i_0 + 1]));
        var_26 ^= ((/* implicit */int) ((((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0])) * (((long long int) arr_9 [(short)16] [(short)16] [(short)16] [i_0]))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 4; i_4 < 17; i_4 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */short) ((arr_0 [i_4] [i_4 - 4]) == (arr_0 [21] [i_4 + 1])));
        var_28 = ((/* implicit */int) (+((-(arr_7 [i_4] [i_4] [i_4 - 4])))));
        var_29 *= ((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_4 - 2] [i_4] [i_4]))));
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
        {
            var_30 = ((/* implicit */_Bool) ((((var_9) + (9223372036854775807LL))) << (((/* implicit */int) ((((/* implicit */int) var_11)) != (arr_0 [i_4 - 4] [i_5]))))));
            var_31 = ((((/* implicit */_Bool) arr_3 [i_5] [i_5])) ? (arr_0 [i_4 + 2] [i_4 + 2]) : (((/* implicit */int) arr_8 [i_4 + 1] [i_4 + 2])));
        }
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
        {
            var_32 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4 + 4] [(unsigned char)20] [i_4] [i_4] [i_4] [i_4 - 3]))) == (arr_3 [i_4] [i_4])));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 20; i_7 += 3) 
            {
                for (int i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    {
                        var_33 -= ((/* implicit */short) (((~(var_12))) | (((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_6])) << (((arr_9 [13U] [i_6] [i_7] [(unsigned short)16]) - (848863865))))))));
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_4] [i_4 + 3] [i_7 - 1])) | (arr_11 [i_4] [i_7 - 1] [i_4] [i_4] [i_4])));
                    }
                } 
            } 
            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_4 - 4])) || (((/* implicit */_Bool) arr_18 [i_4] [i_4 + 2] [i_4 - 3])))))));
            arr_25 [14] [11LL] [14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_6])) ? ((~(((/* implicit */int) arr_8 [i_6] [i_4 + 1])))) : ((~(arr_0 [i_6] [i_6])))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 4) /* same iter space */
        {
            arr_28 [i_9] [i_9] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(_Bool)1])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */int) var_10)) & (arr_11 [i_4] [i_4 + 1] [i_4 + 2] [i_4 + 1] [(unsigned short)12]))) : (((/* implicit */int) arr_8 [i_4] [i_4 + 3]))));
            var_36 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) arr_22 [i_9] [i_9] [6ULL] [i_9])))));
        }
    }
    for (unsigned int i_10 = 4; i_10 < 17; i_10 += 2) /* same iter space */
    {
        var_37 = ((/* implicit */int) min((((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_10] [i_10]))) - (var_4))) - (((/* implicit */long long int) ((int) -2131715725))))), (((/* implicit */long long int) arr_5 [i_10] [i_10] [i_10]))));
        arr_31 [(unsigned char)6] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_10] [i_10]))) == ((((-(arr_7 [i_10] [i_10] [i_10 + 1]))) << (((((/* implicit */int) ((unsigned short) arr_16 [i_10]))) - (48758)))))));
        /* LoopNest 2 */
        for (unsigned int i_11 = 1; i_11 < 19; i_11 += 3) 
        {
            for (int i_12 = 0; i_12 < 21; i_12 += 3) 
            {
                {
                    var_38 = ((/* implicit */unsigned int) min((arr_11 [i_10] [i_11] [i_12] [(unsigned char)0] [(_Bool)1]), ((-((~(((/* implicit */int) arr_17 [i_12] [i_11 + 1] [i_10]))))))));
                    var_39 = ((/* implicit */int) max((var_39), (((((/* implicit */int) min((arr_27 [i_11 + 2] [i_11 + 2] [i_10 - 4]), (arr_27 [i_11 - 1] [i_11 - 1] [i_10 - 4])))) + ((+((~(((/* implicit */int) var_11))))))))));
                }
            } 
        } 
        arr_38 [i_10] = (~(((/* implicit */int) arr_35 [(unsigned char)7] [14LL] [17U] [i_10 + 1])));
    }
    for (unsigned int i_13 = 4; i_13 < 17; i_13 += 2) /* same iter space */
    {
        arr_43 [i_13] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) >= (((/* implicit */int) ((short) arr_39 [18LL]))))))));
        arr_44 [i_13 + 3] = ((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_6 [9] [i_13] [i_13]))));
    }
}
