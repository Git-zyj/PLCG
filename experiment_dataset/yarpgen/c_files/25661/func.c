/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25661
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
    var_12 = ((/* implicit */int) max(((+(var_8))), (((/* implicit */unsigned long long int) var_4))));
    var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) 201795077366195374LL)), ((+(var_8)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] [(_Bool)1] = ((/* implicit */signed char) ((unsigned int) 17328448901502501383ULL));
            arr_6 [i_0] [(signed char)12] [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [(signed char)3] [i_1])), (var_5)));
        }
        for (int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_3 [i_0 - 2]), (arr_3 [i_0 - 2])))) ? ((+(((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 1])))) : (((/* implicit */int) ((_Bool) arr_3 [i_0 + 2])))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
            {
                arr_13 [i_0 + 1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) 1016517603)) >= ((-9223372036854775807LL - 1LL))))) & (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0 - 1])) <= (((/* implicit */int) arr_0 [(signed char)11] [i_3])))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    for (signed char i_5 = 1; i_5 < 9; i_5 += 2) 
                    {
                        {
                            var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))))) ? (((var_8) | (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 1]))))))));
                            var_16 = var_8;
                            arr_19 [i_0] [i_5] [(_Bool)1] [i_5] [i_5] [i_4] = ((/* implicit */int) arr_15 [i_0 + 2] [i_5 + 4] [i_5] [(short)8]);
                        }
                    } 
                } 
                var_17 ^= arr_8 [i_0] [i_2] [(unsigned short)6];
            }
            for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_0] [i_0 - 1])))))));
                arr_23 [(_Bool)1] [(_Bool)1] = var_8;
                arr_24 [i_0] [i_0] [i_6] = ((/* implicit */_Bool) var_9);
                /* LoopSeq 2 */
                for (short i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    var_19 += ((/* implicit */short) (_Bool)1);
                    var_20 ^= ((/* implicit */int) max((((201795077366195374LL) & (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0 + 2] [i_0] [i_6] [i_7]))))), (((/* implicit */long long int) (unsigned char)13))));
                    arr_27 [i_0] [(_Bool)1] [i_6] [i_7] = ((/* implicit */int) var_11);
                }
                for (int i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    arr_30 [i_0] [i_8] [i_6] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_9 [i_0 + 1])), (536854528LL))), (((/* implicit */long long int) min((arr_8 [i_0 + 1] [i_0] [i_0]), ((+(((/* implicit */int) arr_12 [i_0] [12U] [i_0])))))))));
                    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)150))));
                    arr_31 [8] = ((/* implicit */_Bool) (unsigned char)163);
                }
            }
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3059136705U)) ? (5ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0 + 1])) != (((/* implicit */int) arr_14 [i_0] [(unsigned char)4] [i_0 + 2] [i_2] [i_0 + 2]))))) : (((/* implicit */int) arr_9 [i_0 - 2]))));
        }
        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)246)) ? (-536854536LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) 390460541U))));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)22449)), (255525011U)))) ? (((/* implicit */unsigned long long int) 536854535LL)) : (max((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) -536854555LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11987135193548534693ULL)))))));
            arr_35 [(short)7] [i_9] [(unsigned short)11] = ((/* implicit */short) arr_18 [i_0 - 1] [i_0 - 1] [(unsigned char)0] [i_0 + 2] [i_0 + 1] [i_0] [i_0 - 1]);
            arr_36 [i_0] = ((/* implicit */long long int) var_7);
        }
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -191897123)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (_Bool)1))))) : (arr_16 [i_0] [i_0] [i_0 - 2] [i_0] [i_0])));
        arr_37 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_16 [i_0 - 2] [i_0 + 1] [i_0] [i_0 - 2] [i_0]), (arr_16 [i_0 - 1] [i_0] [i_0] [i_0] [(_Bool)1])))) ? (((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0 + 1] [0LL] [i_0 + 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_16 [i_0 + 1] [i_0] [i_0] [i_0] [i_0]))) : ((+((-9223372036854775807LL - 1LL))))));
    }
    for (signed char i_10 = 4; i_10 < 21; i_10 += 2) 
    {
        arr_40 [i_10] = ((/* implicit */_Bool) 8796092891136LL);
        arr_41 [i_10 + 2] [(signed char)17] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */int) arr_38 [i_10] [i_10])) : (((/* implicit */int) var_4))))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)80)) <= (((/* implicit */int) (signed char)11))))))) <= (((((((/* implicit */_Bool) arr_39 [i_10] [i_10])) ? (((/* implicit */int) arr_39 [i_10] [i_10])) : (((/* implicit */int) arr_38 [i_10] [i_10])))) % (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) (signed char)21))))))));
    }
}
