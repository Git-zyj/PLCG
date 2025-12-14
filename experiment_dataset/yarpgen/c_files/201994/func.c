/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201994
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
    var_10 = ((/* implicit */signed char) var_9);
    var_11 = ((/* implicit */long long int) (+(((/* implicit */int) var_9))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_12 += ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) -738603139)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
        var_13 = ((/* implicit */int) arr_0 [i_0 + 1]);
        var_14 = ((/* implicit */_Bool) ((long long int) min((((/* implicit */short) var_8)), (arr_1 [i_0 + 1]))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 14; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */long long int) arr_1 [i_1]);
        var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)92)) >> (0LL)))) && (((/* implicit */_Bool) var_5))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    {
                        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
                        {
                            arr_18 [i_2] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) ((unsigned short) (unsigned short)51702)))));
                            arr_19 [i_1] [i_1] [6LL] [i_1] [i_1] [(unsigned char)3] [(unsigned char)3] = ((/* implicit */unsigned short) arr_3 [i_3] [i_2]);
                        }
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
                        {
                            arr_22 [i_6] [i_4] [(signed char)3] [(signed char)3] [(signed char)3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1554858967)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_5))));
                            var_17 -= ((/* implicit */unsigned int) ((var_2) + (((/* implicit */long long int) -389071686))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
                        {
                            var_18 = ((/* implicit */_Bool) (signed char)127);
                            arr_26 [i_1] [i_1] [i_1] [i_4] [i_7] = ((/* implicit */unsigned long long int) var_5);
                        }
                    }
                } 
            } 
            arr_27 [i_1] = ((/* implicit */signed char) -5908565781856248891LL);
            var_19 = ((((/* implicit */_Bool) arr_7 [i_1 - 1])) ? (arr_7 [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
        }
    }
    for (signed char i_8 = 2; i_8 < 14; i_8 += 1) /* same iter space */
    {
        var_20 ^= ((/* implicit */unsigned int) (((-(((((/* implicit */_Bool) arr_15 [i_8] [(unsigned char)4] [i_8] [(signed char)10] [i_8])) ? (arr_2 [i_8] [i_8 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))) == ((-9223372036854775807LL - 1LL))));
        var_21 = (_Bool)1;
        arr_31 [(signed char)14] &= ((((((/* implicit */_Bool) (signed char)86)) ? (min((var_2), (((/* implicit */long long int) (unsigned short)18201)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 10044002108068378509ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (1353098964U)))))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [i_8 - 2] [i_8 + 1])))))));
    }
}
