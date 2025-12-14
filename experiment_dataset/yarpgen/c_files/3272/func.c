/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3272
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (~(7710210784654687380ULL)))) ? ((~((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_3);
            arr_6 [i_1] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) arr_2 [i_1])) <= (((/* implicit */int) arr_0 [i_0])))));
        }
        for (short i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            arr_10 [(_Bool)1] = ((/* implicit */short) -9223372036854775801LL);
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2])) || (((/* implicit */_Bool) 9223372036854775792LL)))))))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (arr_3 [(unsigned short)18]))))))) : (((/* implicit */int) ((short) ((_Bool) var_5))))));
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_16 [i_4] [i_4]))))) + (((((/* implicit */_Bool) arr_16 [i_2] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)28))) : (var_15)))));
                            var_21 -= ((/* implicit */unsigned short) arr_17 [i_2] [i_3] [i_4] [i_5]);
                        }
                    } 
                } 
            } 
        }
        arr_20 [i_0] = ((/* implicit */_Bool) arr_19 [(short)2] [(short)2] [2LL] [(_Bool)1] [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_11)) ? (var_2) : (arr_8 [i_7] [i_6] [i_0])))))));
                    var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_0))));
                }
            } 
        } 
        arr_26 [12ULL] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) var_16)))) : (((/* implicit */int) (unsigned short)45260))))), (((((/* implicit */_Bool) 1685114908)) ? (((/* implicit */long long int) (-(var_12)))) : (((((/* implicit */_Bool) (unsigned short)11538)) ? (564922153190942835LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_29 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_8] [i_8] [i_8] [i_8])) & ((~((-(((/* implicit */int) var_6))))))));
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) -18)) && (((/* implicit */_Bool) ((((1074369743) <= (((/* implicit */int) arr_21 [9LL])))) ? (arr_23 [i_8]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_8] [i_8]))))))))));
    }
    var_25 ^= ((/* implicit */int) (-9223372036854775807LL - 1LL));
}
