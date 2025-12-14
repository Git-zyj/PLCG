/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204855
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
    var_18 = ((/* implicit */signed char) var_0);
    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)(-127 - 1)))));
    /* LoopSeq 4 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */unsigned int) min((((0ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))))), (arr_1 [i_0] [0LL])));
        arr_3 [i_0] = ((min((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)27)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)6))))))) << ((((~(2658132768744073325LL))) + (2658132768744073369LL))));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 2; i_2 < 17; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                arr_15 [i_1] [(unsigned short)10] = ((/* implicit */int) (~(((long long int) 1879532774U))));
                arr_16 [(short)4] [i_2] [(short)4] |= ((/* implicit */signed char) (((-(((((/* implicit */_Bool) 23U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)25))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6)))));
                arr_17 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((max((4611650834055299072LL), (-8952893179540486397LL))) - (((((/* implicit */_Bool) 29LL)) ? (((/* implicit */long long int) 4294967273U)) : (40LL)))))) - (arr_6 [i_1])));
            }
            /* vectorizable */
            for (unsigned int i_4 = 1; i_4 < 16; i_4 += 1) 
            {
                arr_20 [i_2] [i_2] [i_1] = ((unsigned long long int) (unsigned char)113);
                arr_21 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) (_Bool)1);
                arr_22 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) var_2))));
            }
            arr_23 [i_2] [13ULL] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)2047)), (2LL)));
            arr_24 [i_2 - 2] [(short)17] [(_Bool)1] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [i_2 - 1] [i_2])), (var_0)))) || (((((/* implicit */_Bool) (unsigned char)104)) || (((/* implicit */_Bool) 8ULL)))))));
        }
        arr_25 [i_1] = ((/* implicit */signed char) (((((-(((/* implicit */int) arr_14 [i_1] [i_1] [i_1])))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) arr_11 [i_1])) < (((/* implicit */int) ((((/* implicit */_Bool) 1343140084106699973ULL)) && (((/* implicit */_Bool) (short)1626))))))))));
    }
    for (short i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        arr_28 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) arr_1 [i_5] [i_5])), ((short)(-32767 - 1)))))))) && (((/* implicit */_Bool) var_2))));
        /* LoopNest 2 */
        for (unsigned int i_6 = 1; i_6 < 18; i_6 += 2) 
        {
            for (unsigned int i_7 = 1; i_7 < 19; i_7 += 1) 
            {
                {
                    arr_35 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_6 - 1])) ? (((/* implicit */unsigned long long int) arr_33 [i_6 + 2])) : (5322277160591433406ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_6 + 2])) ? (((/* implicit */int) (short)18571)) : (((/* implicit */int) (short)-16332))))) : ((+(arr_33 [i_6 + 2])))));
                    arr_36 [i_5] [i_6 + 2] = ((/* implicit */unsigned long long int) ((unsigned int) (signed char)(-127 - 1)));
                    arr_37 [i_5] [i_5] [i_7 + 1] [i_7 + 1] = ((unsigned long long int) arr_0 [0LL]);
                }
            } 
        } 
        arr_38 [i_5] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((signed char) var_10))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65534)) ? (9261382471292188506ULL) : (((/* implicit */unsigned long long int) arr_33 [i_5]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)63))))) : (((((/* implicit */_Bool) var_6)) ? (65535ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    }
    for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 1) 
            {
                for (unsigned short i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    {
                        arr_49 [i_8] [i_9] [i_8] [i_11] = ((/* implicit */int) ((_Bool) ((min((((/* implicit */unsigned long long int) (short)-16333)), (18446744073709486098ULL))) << (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_41 [i_8] [i_8] [i_8]))) - (42809ULL))))));
                        arr_50 [i_8] [(_Bool)1] [i_10] [i_10] [(unsigned char)0] [i_8] = ((/* implicit */signed char) (+(((/* implicit */int) (short)12))));
                        arr_51 [i_9] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-17217)) + (2147483647))) >> (((((/* implicit */int) min((((/* implicit */signed char) arr_1 [8ULL] [3])), (var_2)))) + (35)))))) <= (((unsigned long long int) max((((/* implicit */short) (_Bool)1)), (var_5))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_12 = 3; i_12 < 11; i_12 += 1) 
        {
            for (unsigned long long int i_13 = 1; i_13 < 14; i_13 += 3) 
            {
                for (short i_14 = 0; i_14 < 15; i_14 += 1) 
                {
                    {
                        arr_62 [(short)5] [(short)5] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))));
                        arr_63 [9U] [3] [(signed char)2] [i_13] [i_14] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (1853988870050420945LL)))) || (((/* implicit */_Bool) (short)16451))));
                        arr_64 [i_8] [i_12] [i_14] [i_12] = ((/* implicit */unsigned char) (signed char)-50);
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) min((4153195561U), (3094187835U))))));
}
