/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23131
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
    var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_15))))))))));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? ((((~(var_7))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)0])) && (((/* implicit */_Bool) var_9)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) var_11)), (var_9)))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_2 [(unsigned short)2]))))))) : (((/* implicit */int) arr_0 [i_1]))));
            var_18 = ((/* implicit */unsigned int) var_0);
            arr_7 [i_1] [i_0] [i_1] = ((/* implicit */int) arr_0 [i_0 - 2]);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                arr_14 [i_2] [i_2] = ((/* implicit */long long int) (-(min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) var_10))))));
                arr_15 [i_0] = var_1;
            }
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                var_19 &= (~(((/* implicit */int) (_Bool)0)));
                var_20 &= ((/* implicit */unsigned short) 15662370880830637333ULL);
                /* LoopSeq 3 */
                for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 4) 
                    {
                        arr_22 [2U] [i_2] [i_2] [i_4] [(_Bool)1] [0LL] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_18 [(short)7] [(unsigned char)10] [i_6]))))) + (arr_11 [11U])));
                        arr_23 [i_0] [i_5] [i_4] [(unsigned short)8] [i_6] [i_0] [(unsigned short)12] = ((arr_20 [11ULL] [i_6] [i_6 + 2] [(unsigned short)1] [i_6] [i_6 + 4]) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-80))));
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_0))));
                        arr_24 [i_0] [i_2] [(unsigned char)10] [11U] [i_5] [i_6] = ((/* implicit */unsigned char) arr_13 [7ULL]);
                        arr_25 [i_0] [i_2] [(_Bool)1] [i_4] [i_5] [i_5] [(_Bool)0] = ((/* implicit */unsigned short) var_6);
                    }
                    arr_26 [i_4] [i_4] &= ((/* implicit */unsigned char) (_Bool)0);
                }
                for (unsigned short i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
                {
                    var_22 *= ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) 14377143967056483010ULL))));
                }
                for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
                {
                    arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+((+(((var_6) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))))));
                    arr_32 [i_2] [i_2] [(short)5] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_28 [3LL] [i_0] [i_0] [i_0 + 1])), ((-(((/* implicit */int) arr_28 [i_0] [12LL] [i_0] [i_0 - 1]))))));
                }
            }
            /* LoopSeq 1 */
            for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                /* LoopSeq 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)127)) ? (arr_29 [i_0 + 1] [7]) : (arr_29 [i_0 - 1] [i_0]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) >> (((arr_29 [i_0 + 1] [i_0]) - (7881486716403117413ULL))))))));
                    arr_37 [i_10] = ((/* implicit */long long int) (+((+(((/* implicit */int) var_13))))));
                    arr_38 [i_10] [i_2] [i_10] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)0))));
                    var_25 = ((/* implicit */unsigned char) arr_17 [i_0] [i_0] [i_0]);
                }
                for (unsigned char i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    arr_42 [i_11] [i_9] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_13 [i_0 + 1]), (((/* implicit */short) var_5)))))));
                    var_26 = (-((+(18446744073709551615ULL))));
                }
                var_27 = ((/* implicit */int) min((var_27), (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (arr_12 [i_0] [i_0 - 1] [i_0 - 2])))) ? (((/* implicit */int) max((var_14), (((/* implicit */short) var_11))))) : ((+(((/* implicit */int) (short)-11197))))))));
                arr_43 [i_9] [i_2] [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) min((1ULL), (((/* implicit */unsigned long long int) var_2))))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_0] [i_2] [i_0] [i_2]))) : (892968602U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))));
            }
            var_28 *= ((/* implicit */_Bool) (~((~(1ULL)))));
            arr_44 [4U] = ((/* implicit */unsigned char) min(((-(arr_11 [i_0 + 1]))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
            arr_45 [i_2] = ((/* implicit */unsigned short) (unsigned char)31);
        }
        for (short i_12 = 0; i_12 < 13; i_12 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_13 = 0; i_13 < 13; i_13 += 2) 
            {
                for (unsigned short i_14 = 0; i_14 < 13; i_14 += 1) 
                {
                    {
                        var_29 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) -4218995620158998015LL)), (arr_29 [i_0 - 2] [i_0 + 1])));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) * ((-(((/* implicit */int) var_11))))));
                    }
                } 
            } 
            arr_57 [i_0] [i_12] [i_0] = ((/* implicit */unsigned char) var_2);
        }
        for (long long int i_15 = 1; i_15 < 12; i_15 += 1) 
        {
            arr_60 [i_0] [i_15] = ((/* implicit */_Bool) (+(arr_12 [i_0] [i_0] [i_15])));
            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_15]))))), ((+(var_4))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) (unsigned char)31)), (arr_10 [i_0] [i_15])))) < (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))))))))));
            var_32 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_15] [i_15] [i_15] [i_0] [i_0] [3ULL])))))) != (arr_49 [8U] [i_15] [i_15]))) ? ((~(((/* implicit */int) arr_19 [i_0] [i_15])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0 - 2])))))));
        }
        arr_61 [i_0] [5] &= (_Bool)1;
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_33 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (unsigned char)31))))))) % (((var_4) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))))));
        var_34 ^= var_1;
    }
    for (unsigned char i_17 = 0; i_17 < 17; i_17 += 2) 
    {
        arr_68 [i_17] = ((/* implicit */short) (-((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_17]))) + (2784373192878914269ULL)))))));
        /* LoopSeq 1 */
        for (short i_18 = 2; i_18 < 16; i_18 += 1) 
        {
            var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) 0ULL))));
            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) max((((/* implicit */short) (unsigned char)251)), ((short)2518))))));
            arr_73 [i_18] [i_18] [14LL] = ((/* implicit */unsigned int) var_7);
            var_37 = var_2;
        }
        var_38 = ((/* implicit */long long int) var_6);
    }
    var_39 = ((/* implicit */long long int) max((var_14), (((/* implicit */short) var_6))));
}
