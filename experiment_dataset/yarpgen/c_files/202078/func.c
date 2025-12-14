/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202078
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [(unsigned short)24] |= ((/* implicit */unsigned char) (+(((/* implicit */int) (!((_Bool)1))))));
        var_12 = ((/* implicit */_Bool) (-(((/* implicit */int) ((var_8) >= (var_1))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) (unsigned short)37631)) : (((/* implicit */unsigned long long int) 2147483642))));
        var_13 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 13544374208152374187ULL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62206))))));
        var_14 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)27898)) : (var_1)))) ^ (((var_4) | (((/* implicit */unsigned long long int) var_0)))));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(var_10)))) + (((((/* implicit */_Bool) arr_1 [(unsigned char)10])) ? (var_7) : (((/* implicit */unsigned long long int) var_9))))))) ? (((/* implicit */unsigned long long int) (+(arr_0 [i_1])))) : (((((/* implicit */_Bool) var_4)) ? (((arr_1 [(unsigned char)24]) - (((/* implicit */unsigned long long int) var_5)))) : (((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_3))) == (var_1)));
            arr_9 [i_1] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_2]))));
        }
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            var_17 = ((/* implicit */_Bool) (((+(max((arr_0 [i_1]), (((/* implicit */int) arr_4 [i_3])))))) << (((/* implicit */int) min(((unsigned short)29117), (((/* implicit */unsigned short) arr_7 [i_1] [i_1] [i_3])))))));
            arr_12 [i_1] [(_Bool)1] [i_3] = -1209947386;
            var_18 &= ((/* implicit */int) max((((unsigned long long int) ((((/* implicit */unsigned long long int) var_6)) ^ (6704220212442787957ULL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */int) arr_6 [i_1])))))));
        }
        /* vectorizable */
        for (unsigned short i_4 = 4; i_4 < 14; i_4 += 4) 
        {
            var_19 |= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_8 [(unsigned short)4] [i_1]))) ? (2852090185530996325ULL) : (arr_1 [i_4])));
            var_20 ^= ((/* implicit */unsigned short) ((arr_1 [i_4]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
        }
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            arr_17 [i_1] [i_5] = ((/* implicit */int) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30344))) | (16392326110775380989ULL))), (18446744073709551615ULL))) / (((/* implicit */unsigned long long int) (+((-(var_6))))))));
            arr_18 [i_1] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)62206))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (var_1))) : (((/* implicit */int) (unsigned short)62280)))));
            arr_19 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)150)) ? (var_5) : ((+(max((22), (((/* implicit */int) arr_11 [i_1] [i_5]))))))));
        }
        var_21 = (((!(((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) 11742523861266763676ULL)))))) && ((!(((/* implicit */_Bool) arr_8 [i_1] [i_1])))));
    }
    var_22 = (!(((/* implicit */_Bool) ((var_9) / (var_10)))));
    var_23 &= var_5;
    var_24 = ((/* implicit */unsigned short) (_Bool)0);
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
    {
        for (unsigned char i_7 = 2; i_7 < 22; i_7 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 4; i_10 < 22; i_10 += 3) 
                        {
                            {
                                arr_31 [i_6] [i_7] [i_10] [i_8] [4ULL] [i_6] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_28 [6ULL] [i_9 - 1] [i_10 - 1] [6] [i_10]))))) + (((unsigned long long int) (_Bool)1))));
                                arr_32 [i_6] [i_7 - 1] [i_8] [i_8] = ((((/* implicit */int) (_Bool)1)) + (0));
                                var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) var_3)))));
                            }
                        } 
                    } 
                } 
                arr_33 [i_6] [i_6] = ((/* implicit */unsigned long long int) (unsigned short)7446);
                /* LoopSeq 1 */
                for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    var_26 = ((/* implicit */unsigned short) max((var_8), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) (unsigned short)48224))))))))));
                    arr_36 [(_Bool)1] [i_7 - 1] [i_11] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)29233)) ? (((/* implicit */int) (_Bool)1)) : (1))), (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)58190))))));
                }
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_26 [i_7])) <= (((/* implicit */int) arr_27 [i_6] [i_6] [i_6] [i_7 + 1] [i_7])))) ? (((/* implicit */int) arr_27 [i_6] [i_6] [i_6] [i_6] [i_7])) : (max((var_11), (67108800)))))) <= (((((/* implicit */_Bool) ((var_4) + (4902369865557177433ULL)))) ? (11742523861266763663ULL) : (((((/* implicit */_Bool) var_9)) ? (arr_21 [i_6]) : (((/* implicit */unsigned long long int) 21))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 2; i_12 < 23; i_12 += 2) 
                {
                    for (unsigned char i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                            {
                                var_28 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (unsigned char)134))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1958613190) == (-1287489467))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */int) (_Bool)1))))) ? (((unsigned long long int) arr_20 [i_6] [i_6])) : (((/* implicit */unsigned long long int) var_10))))));
                                var_29 |= ((/* implicit */unsigned short) ((unsigned long long int) (unsigned char)190));
                            }
                            var_30 = ((/* implicit */_Bool) (-(462821997553022326ULL)));
                            var_31 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) max((arr_28 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 + 1]), (arr_28 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 1])))) : (((int) 11742523861266763670ULL))));
                        }
                    } 
                } 
            }
        } 
    } 
}
