/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230800
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
    var_20 = ((/* implicit */short) (-((-(var_12)))));
    var_21 = ((/* implicit */int) var_12);
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0]))));
        var_23 = (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_24 = ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_1]))));
        var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [(unsigned char)15]))));
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) -9223372036854775796LL)) ? (7592140015461779011LL) : (7592140015461779011LL)));
    }
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        var_27 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_2]))))) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) var_19))));
        var_28 ^= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_0 [i_2]))))));
        var_29 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_2 [i_2]))))));
        var_30 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (unsigned char)139))))));
    }
    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_31 = ((/* implicit */signed char) (+((~(((/* implicit */int) arr_6 [i_3]))))));
            /* LoopNest 3 */
            for (short i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_18 [i_5] [i_4] = ((/* implicit */unsigned int) arr_13 [i_3] [3ULL] [3ULL] [8ULL]);
                            var_32 += ((/* implicit */unsigned long long int) arr_2 [(unsigned char)16]);
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_5] [i_4 - 1]))))) ? ((-(((/* implicit */int) arr_15 [i_4 - 1] [i_7] [i_7] [i_7] [i_7] [i_7])))) : (((/* implicit */int) (!(var_6))))));
                            arr_19 [i_5] [(unsigned short)9] [13U] = ((/* implicit */short) (+(((/* implicit */int) arr_9 [i_4 - 1]))));
                        }
                    } 
                } 
            } 
            arr_20 [i_3] [i_4] = arr_15 [i_4] [i_4 - 1] [(_Bool)1] [(_Bool)1] [i_4 - 1] [i_4 - 1];
        }
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            var_34 &= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_3] [i_3]))));
            /* LoopSeq 3 */
            for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 2; i_10 < 21; i_10 += 2) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 2) 
                    {
                        {
                            var_35 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_8 + 1])) ? (((/* implicit */int) arr_9 [i_8 + 1])) : (((/* implicit */int) arr_9 [i_8 + 1]))));
                            arr_34 [i_8] [i_11] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_32 [i_10 - 1] [i_8] [i_9] [i_8] [i_8]))));
                            arr_35 [i_10] [17] [i_10] [i_10] [i_8] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_0 [(unsigned char)7]))))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned short) var_19);
            }
            for (signed char i_12 = 3; i_12 < 21; i_12 += 1) 
            {
                arr_39 [i_8] [i_3] [i_8] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_3] [i_8] [i_12]))));
                var_37 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_8 + 1]))));
            }
            for (unsigned int i_13 = 0; i_13 < 23; i_13 += 4) 
            {
                arr_44 [i_3] [i_13] [i_13] [i_13] |= ((/* implicit */unsigned short) arr_43 [i_13] [16U] [i_13]);
                var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_8] [i_3] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_3] [i_8] [i_13])))))) : (arr_25 [i_8 + 1] [10U] [i_8])));
                /* LoopSeq 3 */
                for (unsigned long long int i_14 = 2; i_14 < 19; i_14 += 2) 
                {
                    var_39 = ((/* implicit */signed char) arr_27 [i_3] [i_3] [i_13] [i_14]);
                    var_40 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_22 [i_8] [i_13] [i_8]))));
                    arr_49 [i_3] [i_3] [i_8] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_3]))));
                    arr_50 [i_3] [11ULL] [i_8] [i_3] = ((/* implicit */int) arr_13 [8ULL] [i_3] [8ULL] [i_3]);
                }
                for (signed char i_15 = 2; i_15 < 22; i_15 += 2) /* same iter space */
                {
                    var_41 += ((/* implicit */short) ((arr_26 [i_15] [i_15 - 2] [i_15] [i_15 - 2]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_3 [i_13]))))) : ((+(var_14)))));
                    arr_53 [i_3] [12ULL] [i_13] [i_15] |= ((/* implicit */int) arr_40 [i_8 + 1] [i_8] [i_15] [(_Bool)1]);
                    arr_54 [i_8] [i_8] = ((/* implicit */unsigned char) (+(arr_12 [i_8 + 1] [i_8] [i_15 + 1] [i_15])));
                }
                for (signed char i_16 = 2; i_16 < 22; i_16 += 2) /* same iter space */
                {
                    var_42 = ((/* implicit */unsigned short) ((arr_32 [i_13] [(_Bool)1] [i_16] [i_8] [i_16 - 1]) ? (((/* implicit */int) arr_32 [i_8] [i_13] [i_16] [i_8] [i_16 + 1])) : (((/* implicit */int) arr_32 [i_13] [i_13] [i_13] [i_8] [i_16 - 2]))));
                    var_43 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-23)))))));
                    arr_57 [i_3] [i_8 + 1] [i_8] [i_13] [i_16] = ((/* implicit */long long int) (!(arr_26 [i_16] [i_16] [i_16 - 1] [i_16 - 2])));
                }
                /* LoopSeq 1 */
                for (unsigned int i_17 = 0; i_17 < 23; i_17 += 2) 
                {
                    var_44 = ((/* implicit */long long int) arr_36 [i_8 + 1] [i_17] [i_17] [i_8]);
                    var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [10LL] [10LL] [i_13])) ? (((/* implicit */int) arr_28 [i_8 + 1] [i_8] [i_8])) : (arr_21 [11LL] [i_8] [i_8 + 1])));
                    var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_3] [i_3] [i_8] [i_3] [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) var_4)))))));
                }
            }
            var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) arr_25 [i_8] [i_8] [i_8 + 1]))));
            var_48 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_8 + 1] [i_8] [i_8 + 1])) ? (arr_25 [i_8 + 1] [i_8] [i_8]) : (arr_25 [i_8 + 1] [i_8] [i_8])));
            var_49 -= ((/* implicit */long long int) (~(((/* implicit */int) arr_17 [(short)19] [i_8] [(short)19] [i_3] [i_3] [(_Bool)1] [(short)19]))));
        }
        var_50 = ((/* implicit */unsigned long long int) max((var_50), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [(_Bool)1])) ? (((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_43 [i_3] [i_3] [i_3])))))))));
    }
    var_51 = ((/* implicit */unsigned long long int) (!(var_5)));
}
