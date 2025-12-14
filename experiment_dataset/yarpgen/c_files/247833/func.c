/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247833
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
    var_19 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) (((-(arr_0 [(_Bool)1] [i_0]))) + (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_4))))));
        var_21 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) < (2139095040U))) ? (((((/* implicit */_Bool) ((((arr_2 [i_0] [i_0]) + (2147483647))) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (arr_2 [i_0] [i_0]))) : (((/* implicit */int) (!(((((/* implicit */_Bool) arr_0 [12] [i_0])) || (((/* implicit */_Bool) var_16)))))))));
        var_22 = ((/* implicit */unsigned long long int) var_1);
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((var_12) | (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))));
        arr_7 [i_1] = ((((/* implicit */unsigned int) (-(min((((/* implicit */int) var_11)), (528482304)))))) > (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) * (((var_0) ^ (((/* implicit */unsigned int) arr_2 [i_1] [i_1])))))));
        arr_8 [i_1] = ((/* implicit */_Bool) ((max((arr_5 [i_1]), (((/* implicit */long long int) arr_2 [i_1] [i_1])))) % (((/* implicit */long long int) ((/* implicit */int) ((var_14) < (((/* implicit */int) arr_3 [i_1]))))))));
    }
    for (int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        var_23 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))))))) | (arr_11 [i_2])));
        var_24 += ((/* implicit */_Bool) arr_9 [i_2] [i_2]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_3 = 4; i_3 < 20; i_3 += 2) 
        {
            var_25 = ((/* implicit */_Bool) ((var_0) >> (((/* implicit */int) (unsigned char)0))));
            var_26 = ((/* implicit */signed char) ((arr_12 [i_3] [i_3 - 3]) >= (arr_12 [i_3 + 1] [i_3 + 1])));
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
            {
                var_27 = ((/* implicit */signed char) (+(arr_14 [i_2] [i_4] [i_3 + 2])));
                arr_17 [(unsigned char)19] [3ULL] = ((/* implicit */_Bool) ((signed char) arr_9 [i_3 - 3] [i_4]));
                var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_3 - 1]))));
                arr_18 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */long long int) arr_12 [i_3 - 2] [i_3]);
                var_29 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_3] [i_3 - 2]))));
            }
            for (int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_6 = 2; i_6 < 23; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) ((((/* implicit */long long int) arr_22 [i_7])) < (arr_21 [i_3] [i_3 - 3] [i_6 - 1])));
                            arr_26 [i_7] [i_7] [i_5] [i_7] [i_2] = ((/* implicit */unsigned int) ((var_13) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_10)));
                            arr_27 [(_Bool)1] [i_2] [i_2] [i_2] [i_7] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */long long int) var_4);
                var_32 = ((/* implicit */signed char) ((var_12) & (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13)))))));
            }
        }
        arr_28 [i_2] = ((/* implicit */unsigned char) ((((arr_20 [i_2] [i_2] [i_2]) && (arr_20 [i_2] [i_2] [(unsigned short)13]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) arr_20 [i_2] [19U] [i_2]))));
    }
    var_33 &= ((/* implicit */unsigned char) (_Bool)1);
    var_34 = ((/* implicit */long long int) var_1);
    var_35 = min((((/* implicit */int) max((var_13), (var_4)))), (((int) max((((/* implicit */int) var_15)), (var_18)))));
}
