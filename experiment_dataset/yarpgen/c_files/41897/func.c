/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41897
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */long long int) (((((~(((/* implicit */int) var_2)))) + (2147483647))) >> (((/* implicit */int) arr_0 [i_0]))));
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) (+(1361794976U)))) ? (((/* implicit */int) arr_1 [i_0])) : ((+(((/* implicit */int) (_Bool)1)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_11 = ((/* implicit */_Bool) (-(min((max((arr_4 [i_1]), (((/* implicit */unsigned long long int) arr_6 [(unsigned char)4] [i_1])))), (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)0)))))));
        var_12 *= ((/* implicit */unsigned int) min((((/* implicit */int) max((arr_1 [i_1]), (((/* implicit */unsigned short) arr_0 [i_1]))))), ((+((+(((/* implicit */int) (_Bool)1))))))));
        var_13 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_1 [i_1])), (((arr_4 [i_1]) | (((/* implicit */unsigned long long int) arr_3 [(unsigned char)0] [(unsigned char)0]))))));
        var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (1236247145U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_6 [i_1] [i_1])), (var_2)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4251317679721330664ULL)) && ((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) ((arr_3 [i_1] [i_1]) & (((/* implicit */int) arr_0 [i_1]))))))))));
    }
    for (short i_2 = 3; i_2 < 14; i_2 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_3 = 1; i_3 < 15; i_3 += 4) 
        {
            var_16 += ((((_Bool) max((arr_7 [i_2 - 3]), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)255)), (arr_9 [10] [i_2 + 3]))))))));
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_5 [10ULL] [10ULL]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_4 = 3; i_4 < 17; i_4 += 1) 
            {
                arr_13 [i_4 - 2] [i_3] [i_2] = ((/* implicit */_Bool) (+(arr_3 [i_3] [i_3])));
                arr_14 [i_3] [6ULL] [i_3] = ((/* implicit */signed char) ((unsigned char) arr_1 [i_3]));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_11 [i_4 - 2] [i_3] [(unsigned short)8])) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))));
            }
        }
        /* vectorizable */
        for (unsigned char i_5 = 2; i_5 < 17; i_5 += 2) 
        {
            /* LoopSeq 4 */
            for (long long int i_6 = 1; i_6 < 17; i_6 += 1) 
            {
                arr_20 [i_6] [i_5] [i_2 + 4] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(1092961690U))))));
                arr_21 [i_6] [i_5] [i_6] = (_Bool)1;
            }
            for (unsigned short i_7 = 2; i_7 < 14; i_7 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) -1LL))));
                            var_20 |= ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29664)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_23 [i_5 - 2] [i_2 - 1])));
                        }
                    } 
                } 
                arr_30 [i_7] [i_5 - 2] [12U] = ((/* implicit */unsigned int) var_6);
                var_22 = ((/* implicit */_Bool) max((var_22), ((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_7] [i_7]))) - (arr_23 [i_7] [i_5]))))))));
                arr_31 [6] [6] = arr_8 [i_5];
            }
            for (unsigned short i_10 = 2; i_10 < 14; i_10 += 2) /* same iter space */
            {
                arr_35 [i_10 + 1] [i_2] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) arr_12 [i_10] [i_10]))));
                arr_36 [i_10] [i_2] = ((/* implicit */_Bool) ((unsigned long long int) (~(arr_34 [i_2] [i_2]))));
                /* LoopNest 2 */
                for (unsigned short i_11 = 2; i_11 < 16; i_11 += 2) 
                {
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) (-(((/* implicit */int) var_2))));
                            var_24 *= ((/* implicit */_Bool) var_2);
                        }
                    } 
                } 
            }
            for (unsigned short i_13 = 2; i_13 < 14; i_13 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_14 = 0; i_14 < 18; i_14 += 2) 
                {
                    arr_50 [6U] [i_13] [6U] [6U] = ((/* implicit */_Bool) ((unsigned long long int) arr_34 [i_2 - 2] [i_2 + 4]));
                    var_25 += (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (3020798527U));
                    arr_51 [i_14] [i_13] [i_5] [i_2] = ((/* implicit */short) ((int) arr_44 [i_13] [i_13] [i_2 + 4]));
                }
                arr_52 [i_13] [i_5] [i_2] = ((/* implicit */unsigned char) (~(arr_17 [i_13 + 2] [i_13 + 2] [i_5])));
            }
            /* LoopNest 3 */
            for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 3) 
            {
                for (int i_16 = 0; i_16 < 18; i_16 += 1) 
                {
                    for (int i_17 = 0; i_17 < 18; i_17 += 1) 
                    {
                        {
                            arr_60 [i_17] [i_16] [i_15] [i_15] [i_5] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) var_7)) / (((/* implicit */int) var_2)))) * (-1803101234)));
                            var_26 = ((/* implicit */long long int) arr_56 [i_15] [i_15]);
                            arr_61 [i_17] [i_17] [i_15] [i_15] [i_5 - 1] [i_2] = ((/* implicit */unsigned long long int) ((_Bool) var_2));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_26 [i_5 - 2] [i_5 + 1] [i_2] [i_2 + 3] [i_2])));
            var_28 ^= ((/* implicit */unsigned int) (~(var_0)));
        }
        /* vectorizable */
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
        {
            var_29 = ((/* implicit */unsigned int) ((arr_3 [(_Bool)1] [(_Bool)1]) | (((/* implicit */int) (_Bool)1))));
            arr_64 [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) arr_1 [i_18])))));
        }
        arr_65 [i_2 + 4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)0))));
    }
    var_30 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) ((signed char) -1162703610))) >= (((/* implicit */int) var_7)))));
    var_31 = ((/* implicit */signed char) var_4);
}
