/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218509
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
    var_17 = ((/* implicit */long long int) var_2);
    var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_4))));
    var_19 = ((/* implicit */short) var_11);
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) var_5)))))), (arr_1 [i_0])));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) 0U)), (var_9))))));
        arr_3 [i_0 + 2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_1 [i_0 + 2]) > (arr_1 [i_0 + 2]))))));
    }
    for (int i_1 = 2; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (~(-1955269692)))) > (((((var_6) > (arr_1 [i_1]))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))))))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
        {
            arr_10 [i_1] [i_1] [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_14) : (((/* implicit */unsigned long long int) arr_8 [i_1 + 1] [i_2] [i_2]))))) ? (((((((/* implicit */long long int) var_16)) + (var_5))) / (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_2] [i_2]))) - (arr_6 [i_2])))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)123)) > (((/* implicit */int) (_Bool)0))))))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                arr_14 [i_1 - 1] [i_2] [i_3] = ((/* implicit */signed char) (short)32103);
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
                {
                    var_22 -= ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) 196558553U)) ? (8755480331566974645LL) : (7288142894051416476LL))))) > (((/* implicit */long long int) ((/* implicit */int) ((min((var_12), (-8755480331566974676LL))) > (((/* implicit */long long int) arr_0 [i_3]))))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 2; i_5 < 20; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */short) (((-(196558553U))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_5 - 1]))))))));
                        var_24 -= ((/* implicit */unsigned long long int) (+(((-236805724) + (((/* implicit */int) arr_4 [i_1 - 1]))))));
                        arr_20 [i_1 - 2] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */int) ((((((/* implicit */int) ((_Bool) (short)-25323))) > (((/* implicit */int) ((var_2) > (((/* implicit */int) arr_17 [i_1 + 1]))))))) ? ((-((+(-8755480331566974676LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_5] [i_5 + 2] [i_5 - 2] [i_5 - 2] [(unsigned short)9]))))))));
                    }
                }
                for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
                {
                    arr_24 [i_1] [i_2] [(short)15] [i_6] [i_1] [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_18 [i_1] [i_1])) ? (var_16) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_6]))))))), (min((((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-54))))), (((/* implicit */unsigned int) arr_15 [i_1 + 2] [i_1 - 1] [i_1 - 2]))))));
                    var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_1] [i_2] [i_2] [12U] [i_3] [i_6])))))));
                    var_26 -= ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) arr_9 [i_1] [i_3])), (var_7))), (((/* implicit */unsigned int) (!(((((/* implicit */int) var_10)) > (268402688))))))));
                    arr_25 [i_3] [i_3] [i_3] [i_2] [i_1 + 2] [i_1] = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_13)))))));
                }
            }
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) max(((signed char)54), ((signed char)-46))))))) ? (((/* implicit */int) ((short) (unsigned char)149))) : (((/* implicit */int) (signed char)46))));
            var_28 &= ((/* implicit */int) (((~(arr_19 [i_1 - 2] [i_1 - 2]))) | (((/* implicit */long long int) ((int) ((var_6) & (((/* implicit */unsigned int) var_11))))))));
        }
        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
        {
            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) var_1))));
            arr_28 [i_7] [i_1 - 2] [i_1] = ((/* implicit */short) (~((+(((/* implicit */int) ((((/* implicit */int) arr_22 [i_1 - 2] [i_1])) > (((/* implicit */int) (signed char)-54)))))))));
            arr_29 [i_7] [i_1 + 2] = max((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1] [i_1 + 2])) ? (2391005539221232210LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
            arr_30 [i_7] [i_1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min((var_10), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)21))))))))) > (((((/* implicit */_Bool) arr_26 [i_1 - 2] [i_7])) ? (arr_19 [i_1 - 1] [i_1 - 1]) : (arr_19 [i_1] [i_1 - 1])))));
            var_30 = ((/* implicit */unsigned short) (~((((!(((/* implicit */_Bool) 2147483647)))) ? (((/* implicit */int) arr_12 [i_1] [i_7] [i_1 + 2] [i_7])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) > (var_9))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            arr_35 [i_8] [i_1] [i_1] = (+(((/* implicit */int) ((unsigned short) var_0))));
            var_31 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_8])) ? (3936743737U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_8] [i_1 + 1])))));
            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_1 + 1] [i_1])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
        }
        var_33 ^= ((/* implicit */unsigned int) ((signed char) var_14));
    }
    for (int i_9 = 2; i_9 < 21; i_9 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_10 = 1; i_10 < 21; i_10 += 3) 
        {
            for (short i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                for (int i_12 = 4; i_12 < 19; i_12 += 3) 
                {
                    {
                        var_34 += ((/* implicit */unsigned short) (~((+(((/* implicit */int) (unsigned char)196))))));
                        arr_47 [i_9] [3] [i_11] [i_12] = max((((/* implicit */unsigned int) arr_42 [i_9 - 1] [i_10] [i_12 - 1])), (((var_16) * (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_9 - 1] [i_9 - 1] [i_12 - 4]))))));
                        var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)31))))) ? (((arr_6 [i_9]) + (arr_41 [i_10 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-3752))))))));
                        arr_48 [i_12] [i_12] [i_9] = ((/* implicit */int) 4294967295U);
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)31)) | (((/* implicit */int) arr_17 [i_9 - 1])))) | ((~(((/* implicit */int) arr_17 [i_9 - 1])))))))));
    }
}
