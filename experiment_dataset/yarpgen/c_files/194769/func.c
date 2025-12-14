/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194769
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
    var_14 = var_5;
    var_15 ^= ((/* implicit */signed char) 8589934591ULL);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((int) ((((/* implicit */int) (signed char)-38)) ^ (0)))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] = (+((-(((/* implicit */int) ((((/* implicit */_Bool) 11U)) || ((_Bool)1)))))));
            var_17 = ((/* implicit */long long int) (+((+(((/* implicit */int) ((_Bool) arr_4 [i_0] [i_0])))))));
            var_18 = ((/* implicit */unsigned char) arr_1 [0LL] [(_Bool)0]);
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((70368744161280LL) < (((/* implicit */long long int) min(((~(((/* implicit */int) arr_4 [i_0] [i_0])))), (((/* implicit */int) (short)32767)))))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_1] [i_3] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) (~(2941899377U)))))));
                            var_19 += ((/* implicit */unsigned short) ((1741120480U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [(unsigned char)10] [i_2] [i_0] [i_0] [i_4])))));
                            var_20 = ((/* implicit */signed char) ((unsigned long long int) (-(arr_7 [i_1] [i_2] [i_3]))));
                            var_21 |= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-39))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_3))))) : (arr_13 [i_0] [i_0] [(unsigned char)14] [i_0])))));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (var_11)));
                        }
                    } 
                } 
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_3))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)7))))) : (((((/* implicit */_Bool) var_9)) ? (604597555U) : (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [(unsigned short)0]))))))) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_0] [i_5])) : (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) || ((_Bool)1))))));
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (+(((/* implicit */int) (short)-19259)))))));
            }
            for (long long int i_6 = 2; i_6 < 15; i_6 += 4) 
            {
                arr_21 [i_1] [i_1] [i_0] = ((/* implicit */int) arr_20 [i_0] [i_0] [(_Bool)1] [i_6]);
                var_25 = ((/* implicit */long long int) ((arr_11 [i_0] [i_1] [i_0] [i_1] [(signed char)8] [i_0]) ? ((+(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_19 [i_6 - 2] [i_6] [i_1] [i_0]))));
                /* LoopSeq 3 */
                for (signed char i_7 = 3; i_7 < 14; i_7 += 4) 
                {
                    arr_25 [i_0] [i_0] [i_0] [i_1] [i_0] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_11))))))) * (0)));
                    arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = arr_0 [i_1];
                    arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_12 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0])), (arr_23 [i_0])));
                }
                for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 4) 
                {
                    var_26 = ((long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    arr_30 [i_0] [i_1] [i_0] [(unsigned char)4] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [15]))))) ? (((((/* implicit */_Bool) arr_1 [i_6] [i_8])) ? (arr_3 [i_0] [i_8]) : (-6460543122464379681LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_9 [i_0] [i_0] [i_0])))))))));
                }
                for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    var_27 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */int) (signed char)124)) : (-13)));
                    arr_34 [i_0] [i_0] [i_6] = ((/* implicit */short) arr_18 [i_0] [(signed char)1] [i_0] [i_0]);
                }
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_15 [8U] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) -1467453608)) : (arr_1 [i_0] [i_0]))))))))));
            }
            /* LoopSeq 3 */
            for (long long int i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                var_29 = ((/* implicit */unsigned int) arr_4 [i_10] [(short)14]);
                var_30 = ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]);
            }
            for (int i_11 = 2; i_11 < 15; i_11 += 4) 
            {
                var_31 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) max((arr_32 [i_0] [i_1] [i_1] [i_1]), (((/* implicit */short) (unsigned char)252))))) || (((/* implicit */_Bool) ((int) arr_0 [i_11]))))))));
                var_32 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0]))) || ((((_Bool)1) && (arr_2 [i_1])))));
            }
            for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 4) 
            {
                var_33 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_17 [i_1] [i_1])) ? (arr_17 [i_0] [i_1]) : (arr_17 [i_1] [i_12])))));
                var_34 = ((((/* implicit */_Bool) arr_17 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) max(((-(4158058862U))), (((/* implicit */unsigned int) arr_20 [(unsigned char)5] [i_1] [i_1] [i_12]))))) : ((-(9100781866974116698ULL))));
                var_35 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((arr_29 [i_12] [i_12] [i_0] [i_0] [i_1] [i_0]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_40 [i_12]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_11)))));
            }
        }
    }
}
