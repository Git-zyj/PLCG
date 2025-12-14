/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34657
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
    var_10 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (short)-23644))))))), (((/* implicit */int) (unsigned short)63592))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) -2147483629)) ? (((/* implicit */int) (_Bool)1)) : (2147483629))) & ((-(((/* implicit */int) (unsigned short)65535)))))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            arr_8 [i_1] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) max((arr_5 [i_0] [i_1 - 1] [9ULL]), ((short)-23236)))))) & (((/* implicit */int) min((arr_1 [i_1 - 1] [i_1 - 1]), (arr_1 [i_1 - 1] [(unsigned short)3]))))));
            var_11 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((long long int) (unsigned char)255)) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)57))))))));
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (long long int i_3 = 1; i_3 < 22; i_3 += 4) 
                {
                    for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        {
                            arr_15 [i_1] = ((/* implicit */long long int) 1079235949U);
                            arr_16 [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (short)10319))) && (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1 - 1] [i_2])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) (unsigned short)65519))))))));
                            arr_17 [(unsigned char)19] [12] [i_2] [i_3] [i_1] [i_1] [i_2] = ((/* implicit */long long int) -433544645);
                            var_12 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)9))));
                            arr_18 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [(unsigned short)17] [i_3] [i_0] [i_1] [i_3 - 1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)41))));
                        }
                    } 
                } 
            } 
            var_13 = max((((var_8) - (((/* implicit */long long int) arr_6 [i_0] [i_1 + 2])))), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (signed char)24)) ? (2147483629) : (((/* implicit */int) (signed char)119)))))));
        }
        for (unsigned long long int i_5 = 4; i_5 < 23; i_5 += 2) /* same iter space */
        {
            arr_22 [i_0] [i_5] |= ((/* implicit */_Bool) arr_6 [i_0] [i_5 - 2]);
            arr_23 [i_5] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)38897)) << (((((/* implicit */int) (unsigned short)65530)) - (65524))))) / (((/* implicit */int) arr_4 [i_0] [i_5]))));
            var_14 = ((/* implicit */short) var_9);
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 4; i_6 < 23; i_6 += 2) /* same iter space */
        {
            arr_26 [i_6 - 4] = ((/* implicit */short) arr_25 [i_0] [i_0] [(signed char)1]);
            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_8))) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [(unsigned char)14]))));
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65526)) >= (((/* implicit */int) arr_12 [i_0] [i_6 - 2] [(signed char)0] [i_6]))));
        }
        arr_27 [i_0] = ((/* implicit */short) ((min((((/* implicit */unsigned int) -60438081)), (1073741312U))) << ((((-(2305842871774740480ULL))) - (16140901201934811117ULL)))));
        arr_28 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0])) : ((~(((/* implicit */int) arr_0 [i_0]))))));
    }
}
