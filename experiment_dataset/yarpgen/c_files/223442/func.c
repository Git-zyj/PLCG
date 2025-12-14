/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223442
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
    var_10 = min(((+(((/* implicit */int) ((short) var_5))))), (var_4));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)154), (((/* implicit */unsigned char) (_Bool)1)))))) - (max((max((950388002U), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) ((unsigned short) 1152358554653425664ULL)))))));
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (min((arr_1 [i_0]), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)157)))) : (((/* implicit */int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0]))))) && (((/* implicit */_Bool) -1LL))))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    var_13 = (+(((/* implicit */int) max((arr_7 [i_2] [i_2 + 3] [i_2 + 3] [i_2]), (arr_7 [i_2] [i_2 - 1] [i_2 + 1] [i_2])))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || ((!((_Bool)1))))))));
                }
            } 
        } 
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) var_5))));
    }
    for (unsigned short i_3 = 2; i_3 < 10; i_3 += 2) 
    {
        var_16 += ((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_8 [i_3] [i_3])))))))));
        arr_11 [i_3] = ((/* implicit */short) (-((((_Bool)1) ? (((/* implicit */int) (unsigned short)32894)) : (((/* implicit */int) (_Bool)1))))));
        var_17 += arr_9 [i_3 - 2];
        arr_12 [i_3 - 1] = ((/* implicit */short) arr_8 [i_3] [i_3 + 1]);
    }
    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)38)) != (((/* implicit */int) arr_13 [i_4] [i_4]))));
        arr_15 [i_4] = ((/* implicit */long long int) arr_14 [i_4]);
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned int) var_6);
    }
    for (unsigned char i_5 = 1; i_5 < 9; i_5 += 1) 
    {
        var_19 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5 + 1] [(unsigned short)0])))))) ? (var_3) : (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (_Bool)1)))))))));
        var_20 = ((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_5] [i_5] [i_5 + 1] [(_Bool)1]))))), (((long long int) var_4))));
        var_21 = ((/* implicit */unsigned int) var_9);
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_6 = 2; i_6 < 10; i_6 += 2) 
        {
            arr_23 [i_5] = ((/* implicit */unsigned int) var_1);
            arr_24 [i_5] [i_6] = ((/* implicit */long long int) ((int) arr_0 [i_5 - 1]));
            var_22 = ((/* implicit */_Bool) ((((int) arr_3 [i_6] [i_5])) + (((/* implicit */int) (short)27691))));
        }
        for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        {
                            arr_35 [i_7] = (_Bool)0;
                            var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_30 [i_5] [i_5] [i_8] [i_8])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (arr_33 [i_8] [i_10]))))) : (min((((/* implicit */long long int) (signed char)-90)), (1LL))))))));
                        }
                    } 
                } 
            } 
            arr_36 [i_5 + 2] [i_7] = ((/* implicit */signed char) ((unsigned char) 9223372036854775807LL));
        }
    }
    var_24 = ((/* implicit */short) var_8);
}
