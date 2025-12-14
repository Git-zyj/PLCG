/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226485
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) var_4);
                                var_21 += ((/* implicit */unsigned int) max((8816798506435330794ULL), (((/* implicit */unsigned long long int) var_6))));
                                var_22 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (arr_0 [i_2 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 + 1] [i_3 - 2])))))));
                                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((short) 2178959510551712426LL));
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((unsigned long long int) -1807176863)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-112)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                {
                    arr_23 [5LL] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((int) ((2147483392LL) < (((/* implicit */long long int) var_9)))));
                    var_24 = ((/* implicit */unsigned long long int) ((unsigned short) arr_17 [i_5]));
                }
            } 
        } 
        var_25 ^= ((/* implicit */short) (~((+(var_0)))));
        var_26 = ((/* implicit */int) ((long long int) (_Bool)1));
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 19; i_10 += 3) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_27 = ((/* implicit */short) max((var_27), (arr_26 [i_8 + 1] [11ULL])));
                        arr_34 [i_8] [i_9] [i_9] [i_8] = ((/* implicit */long long int) (-(var_0)));
                        arr_35 [(unsigned short)3] [i_8] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */short) (((+(7287160864911689050ULL))) - (((/* implicit */unsigned long long int) arr_24 [i_8 + 1] [i_8 + 1]))));
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (arr_31 [(short)2] [(short)2])));
                    }
                } 
            } 
            var_29 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) -960617163)) ? (8816798506435330794ULL) : (9629945567274220832ULL)));
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 19; i_12 += 4) 
            {
                for (long long int i_13 = 3; i_13 < 16; i_13 += 2) 
                {
                    {
                        var_30 = ((/* implicit */signed char) 960617163);
                        /* LoopSeq 2 */
                        for (unsigned short i_14 = 1; i_14 < 16; i_14 += 4) 
                        {
                            arr_46 [i_8] [8ULL] [(short)1] [i_13] [i_13] [i_8] [8ULL] = ((/* implicit */unsigned short) -9223372036854775791LL);
                            arr_47 [i_8] [i_9] [i_12] [i_13] [i_13] [i_14] [i_14] = 8816798506435330794ULL;
                            var_31 = ((/* implicit */unsigned long long int) ((_Bool) 2147483421LL));
                        }
                        for (unsigned long long int i_15 = 2; i_15 < 17; i_15 += 2) 
                        {
                            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_45 [i_12] [i_15] [i_15 - 1] [i_12] [8ULL]), (arr_45 [i_12] [i_12] [i_15 + 1] [(_Bool)1] [i_9])))) ? (arr_45 [i_12] [i_9] [i_15 + 2] [i_9] [i_9]) : (((((/* implicit */_Bool) arr_45 [i_9] [i_9] [i_15 + 2] [i_9] [i_15])) ? (arr_45 [i_9] [i_9] [i_15 + 1] [i_9] [i_8]) : (arr_45 [i_15] [i_9] [i_15 + 2] [i_8] [(short)2]))))))));
                            var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) var_2)))));
                            var_34 += ((/* implicit */unsigned short) arr_29 [i_8] [i_8] [17LL]);
                            var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) min((arr_32 [i_12] [i_13] [i_12] [i_9] [(signed char)14] [i_8 + 1]), (((/* implicit */short) (unsigned char)216))))) : (((/* implicit */int) arr_42 [i_8] [i_13 + 1] [6LL] [i_13 + 3]))))) ? (((long long int) 8816798506435330793ULL)) : (((/* implicit */long long int) max((((/* implicit */int) (short)-32574)), (437770727)))))))));
                            var_36 = ((/* implicit */int) min((var_12), (((/* implicit */short) (_Bool)1))));
                        }
                        arr_51 [i_8] [i_9] [i_12] [i_8] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5943)) ? (arr_29 [i_8] [i_9] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)43)) ? (arr_31 [i_9] [i_9]) : (var_16)))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_40 [i_8 + 1] [i_8] [i_12]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) (unsigned char)38))))) ? (8816798506435330794ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))));
                        arr_52 [i_8] [i_8] [i_12] [i_8] [i_12] [i_13 - 3] = ((/* implicit */unsigned char) ((((((unsigned long long int) (short)-5943)) & (var_1))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
            arr_53 [i_8] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)112))))) ? (8816798506435330794ULL) : (((/* implicit */unsigned long long int) -1615282363))))));
        }
        for (long long int i_16 = 3; i_16 < 18; i_16 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_17 = 0; i_17 < 19; i_17 += 3) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 1) 
                {
                    for (long long int i_19 = 0; i_19 < 19; i_19 += 4) 
                    {
                        {
                            arr_63 [i_8] [i_16] [i_19] [i_18] [i_17] [i_16] = ((/* implicit */_Bool) arr_57 [i_16] [i_18]);
                            arr_64 [i_8] [i_8] = ((/* implicit */signed char) ((long long int) (((+(-1615282349))) & (((/* implicit */int) var_18)))));
                            arr_65 [4ULL] [i_8] [(unsigned char)18] [4ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((var_16) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)55023))))) ? (((/* implicit */int) var_10)) : ((-(((/* implicit */int) var_12))))));
                        }
                    } 
                } 
            } 
            var_37 = ((/* implicit */unsigned long long int) max((var_37), (((max((((/* implicit */unsigned long long int) ((var_2) < (((/* implicit */unsigned long long int) 4079931789U))))), (((((/* implicit */_Bool) (unsigned char)33)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_8] [i_8] [i_16]))))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)144))))))))))));
            arr_66 [i_8] = ((/* implicit */long long int) arr_40 [i_8] [i_8] [i_8]);
        }
        var_38 = ((long long int) var_14);
    }
    var_39 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_19))));
}
