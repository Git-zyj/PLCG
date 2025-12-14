/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40157
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_15 -= var_11;
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_1 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(short)20])) && (((/* implicit */_Bool) (unsigned char)35)))))))) ? (((/* implicit */int) ((short) var_4))) : ((-(((/* implicit */int) var_11)))))))));
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((int) arr_4 [i_1 + 3] [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 3] [i_1 + 1]))));
                var_18 &= ((/* implicit */unsigned short) (unsigned char)221);
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 3] [i_1] [(signed char)11]))) : (((((/* implicit */_Bool) var_10)) ? (arr_3 [i_0]) : (arr_3 [i_0])))));
            }
        } 
    } 
    var_20 &= ((/* implicit */short) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_2 = 2; i_2 < 24; i_2 += 1) 
    {
        var_21 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_14)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)78))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))) > (2058179425144058105ULL)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            var_22 = ((/* implicit */unsigned int) arr_8 [i_2 - 1] [i_2 - 2] [i_2 + 1]);
            /* LoopSeq 1 */
            for (long long int i_4 = 4; i_4 < 23; i_4 += 4) 
            {
                var_23 = ((/* implicit */long long int) ((arr_9 [i_4 + 1] [i_4] [i_4]) + (arr_9 [i_4 - 4] [i_4] [(short)16])));
                var_24 = ((/* implicit */unsigned char) var_11);
                /* LoopSeq 2 */
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) arr_7 [i_2]);
                        var_26 |= arr_11 [i_3] [i_4 - 3] [i_4 - 3];
                    }
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [20ULL] [20ULL] [i_3] [i_4] [20ULL] [i_7] [i_4])) ? (arr_5 [i_2]) : (((/* implicit */unsigned int) -16))))) : (arr_18 [i_2])));
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_5])) ? (var_1) : (((/* implicit */int) var_10)))))));
                        var_29 = ((/* implicit */long long int) var_6);
                        var_30 = (+(((/* implicit */int) ((((/* implicit */long long int) 3519422759U)) < (var_3)))));
                    }
                    var_31 = ((/* implicit */unsigned int) (unsigned char)252);
                }
                for (long long int i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    var_32 = 533878163325189741ULL;
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 3; i_9 < 24; i_9 += 4) 
                    {
                        var_33 = ((/* implicit */long long int) arr_21 [i_2]);
                        var_34 = ((/* implicit */unsigned short) var_8);
                        var_35 &= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)32762)) : (((/* implicit */int) (_Bool)1)))));
                        var_36 = ((/* implicit */signed char) ((527876290) / (((/* implicit */int) arr_16 [i_2 - 1] [i_4 - 3] [i_4] [i_4] [i_2] [i_4]))));
                        var_37 = ((((/* implicit */_Bool) arr_6 [i_9 + 1])) ? (arr_14 [i_3] [i_3] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
                    }
                    for (unsigned char i_10 = 2; i_10 < 24; i_10 += 2) 
                    {
                        var_38 = ((/* implicit */unsigned int) arr_16 [i_10 + 1] [i_2] [18] [i_4 - 4] [i_2] [i_3]);
                        var_39 = ((/* implicit */unsigned char) (_Bool)0);
                        var_40 &= arr_24 [i_10] [i_4] [i_2] [i_8];
                        var_41 |= ((/* implicit */signed char) ((long long int) (~(var_1))));
                        var_42 |= ((/* implicit */int) (+((-9223372036854775807LL - 1LL))));
                    }
                    for (unsigned long long int i_11 = 3; i_11 < 24; i_11 += 4) 
                    {
                        var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-3)) ? (((/* implicit */int) arr_6 [i_4 - 3])) : (((/* implicit */int) (short)-23658))));
                        var_44 = ((/* implicit */signed char) ((short) arr_29 [i_11 - 1] [i_11] [i_2 - 1] [i_8] [i_2]));
                        var_45 = ((/* implicit */unsigned short) (((~(-1756650443))) | (((/* implicit */int) (signed char)0))));
                    }
                }
            }
            arr_35 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17592186043904LL)) ? (298614939U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19668)))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_46 |= ((((/* implicit */_Bool) var_9)) ? (arr_22 [i_2] [i_2 + 1] [i_2] [i_2 - 1] [i_2] [i_2]) : (((/* implicit */int) var_8)));
            var_47 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_32 [i_2] [i_2] [i_12] [i_2] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_7)))));
            var_48 = ((/* implicit */int) (-(17592186043902LL)));
        }
        var_49 = ((/* implicit */unsigned short) (-2147483647 - 1));
        var_50 = ((/* implicit */long long int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_37 [i_2 + 1] [i_2 - 1]))));
        var_51 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)19))));
    }
}
