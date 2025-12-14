/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199496
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
    var_12 &= ((/* implicit */short) var_11);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((short) ((short) arr_0 [i_0 + 1])));
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)124)) ? (var_6) : (((/* implicit */int) arr_0 [i_0 - 1])))) - (1163739627))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_8);
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
        {
            arr_10 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_7))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (var_0) : (-1479377826))))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 3; i_3 < 21; i_3 += 1) 
            {
                for (int i_4 = 1; i_4 < 21; i_4 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 2) 
                        {
                            var_14 = ((/* implicit */int) 51974460U);
                            arr_17 [i_1] [i_2] [i_1] [i_4] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_0 [i_1])) - (28))))), (((/* implicit */int) arr_7 [i_3] [i_3] [i_2]))))) ? (arr_14 [i_3 + 1] [i_2] [i_3] [i_2]) : (((unsigned long long int) (~(17524438451099554469ULL))))));
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (arr_8 [(unsigned char)15]))))))) ? (((var_9) << (((((/* implicit */int) var_7)) - (5542))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)0)))))));
                            arr_18 [i_2] [i_2] [i_3] = min(((-(((/* implicit */int) arr_12 [i_2] [i_3] [i_4 - 1])))), (((/* implicit */int) var_1)));
                        }
                        arr_19 [i_1] [i_1] [i_2] [2U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2])) | (((/* implicit */int) (short)32764))))) ? (arr_11 [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 910240700)) ? (1969719244) : (1969719244))))))) ? ((~(arr_15 [i_2] [i_2] [i_4 - 1] [17] [i_4 - 1] [i_4]))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), ((~(arr_9 [6])))))));
                        arr_20 [i_1] [i_2] [i_2] = -194999961;
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        {
                            arr_31 [i_1] [i_2] [i_2] [i_6] [i_7] [i_8] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_6] [i_7] [i_2])) && (((/* implicit */_Bool) ((arr_29 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) | (((/* implicit */long long int) 910240720))))))));
                            var_16 = ((((/* implicit */int) ((signed char) arr_21 [i_1] [i_2] [i_7] [i_8]))) * (((/* implicit */int) arr_21 [i_1] [i_6] [i_7] [i_8])));
                        }
                    } 
                } 
                var_17 = ((/* implicit */int) arr_15 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
                var_18 = ((/* implicit */int) ((max((arr_6 [i_1] [i_2]), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))) : (arr_30 [i_1] [(unsigned char)4] [i_6]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) max((arr_4 [i_1]), (((unsigned short) (signed char)-12))))))));
            }
            for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                var_19 |= 910240705;
                var_20 = (~((-(((unsigned int) 7ULL)))));
                arr_34 [i_1] [i_1] &= ((/* implicit */short) (-(((/* implicit */int) ((var_4) >= (((/* implicit */unsigned long long int) arr_30 [i_1] [i_1] [i_1])))))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 1) 
            {
                arr_38 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_33 [i_1] [i_2] [i_10] [i_1])) || (((/* implicit */_Bool) 18446744073709551608ULL)))) ? (((int) arr_7 [15U] [i_2] [i_2])) : (min((((/* implicit */int) arr_7 [i_1] [i_2] [i_2])), (var_10)))));
                var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_10] [i_1] [i_2])))))));
                arr_39 [i_1] [i_2] = ((/* implicit */int) ((unsigned long long int) 7293829639013595281ULL));
            }
            var_22 = ((/* implicit */long long int) var_3);
        }
        /* vectorizable */
        for (unsigned char i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)27)) ? (-194999961) : (962354532))))));
            var_24 &= ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
        }
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) | (((/* implicit */int) arr_12 [(unsigned char)10] [14] [i_1]))));
    }
}
