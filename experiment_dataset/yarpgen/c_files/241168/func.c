/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241168
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-26490))))) && (((/* implicit */_Bool) (unsigned short)7457))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((4127326792209448079ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((unsigned long long int) (unsigned char)96)))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max(((+(((/* implicit */int) ((unsigned char) (unsigned char)160))))), (((((/* implicit */int) (unsigned char)162)) + (((/* implicit */int) ((_Bool) arr_9 [i_2] [(signed char)3])))))));
                        var_12 = ((/* implicit */long long int) ((unsigned short) var_7));
                    }
                } 
            } 
            var_13 &= ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
            var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) (unsigned char)96);
            arr_13 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((_Bool) min((((/* implicit */unsigned short) var_2)), (var_0))))), (((unsigned int) min((var_7), (((/* implicit */unsigned long long int) (_Bool)0)))))));
            arr_14 [i_0] = ((/* implicit */_Bool) arr_9 [i_0] [i_4]);
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [(_Bool)1])) || (var_10)))), (max((arr_8 [i_4] [(signed char)20] [i_4] [10ULL]), (((/* implicit */unsigned long long int) var_4))))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            arr_19 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_0] [i_0])) == (((/* implicit */int) arr_9 [i_0] [i_5]))));
            var_17 += ((/* implicit */unsigned char) ((131008LL) >> (((/* implicit */int) arr_17 [i_0] [i_5]))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_7 = 1; i_7 < 24; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        {
                            arr_32 [i_0] [(short)16] [i_6] [i_0] [(short)16] [(short)16] [i_9] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 6696208775298266244ULL)) ? (arr_18 [i_7 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0])))))));
                            arr_33 [i_8] [i_8] [i_8] [i_8] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_29 [i_0] [i_6] [i_7 + 1] [i_8]) : (arr_29 [i_0] [i_6] [i_7 + 1] [i_0])));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)96))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) var_1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                            var_19 = ((/* implicit */unsigned short) (!(((6696208775298266220ULL) < (arr_15 [i_9] [i_8] [1ULL])))));
                            var_20 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) -1797081452)))) ? (((unsigned long long int) arr_11 [i_7])) : (((((/* implicit */_Bool) 6696208775298266240ULL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                arr_34 [i_0] [i_7] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) | (((/* implicit */int) (_Bool)1))))) ? (((unsigned int) (unsigned short)65535)) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) 6696208775298266234ULL))) ? (((/* implicit */unsigned long long int) ((long long int) var_8))) : ((-(11750535298411285371ULL)))));
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (arr_5 [i_0] [(unsigned short)10])))))));
                var_23 = ((/* implicit */short) var_0);
            }
            /* vectorizable */
            for (short i_10 = 0; i_10 < 25; i_10 += 1) 
            {
                var_24 = (!(var_8));
                var_25 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((arr_15 [i_0] [i_6] [i_0]) ^ (11750535298411285371ULL))) : (var_9)));
                var_26 = ((/* implicit */short) (((~(arr_3 [i_10] [i_6]))) >> (((((/* implicit */int) arr_31 [i_10] [i_10] [i_10] [i_10] [i_0] [i_0] [i_0])) - (63004)))));
            }
            arr_38 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(min((arr_5 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_37 [i_0]))))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (short)7560)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)3337))))));
            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)4727)), (((((/* implicit */_Bool) (unsigned char)159)) ? (3390040805U) : (((/* implicit */unsigned int) arr_35 [i_0] [i_0] [i_0] [i_6])))))))));
            var_28 = ((/* implicit */unsigned int) ((((((_Bool) var_3)) ? (((((/* implicit */_Bool) 16058073867699212354ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8))) : (11750535298411285375ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 11750535298411285375ULL)))) == (max((((/* implicit */unsigned long long int) (_Bool)0)), (6696208775298266240ULL)))))))));
        }
    }
    for (short i_11 = 0; i_11 < 24; i_11 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 2) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 1) 
            {
                for (unsigned short i_14 = 3; i_14 < 23; i_14 += 4) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) max((min((6696208775298266244ULL), (((/* implicit */unsigned long long int) var_8)))), (min((((/* implicit */unsigned long long int) (short)32756)), (arr_43 [8ULL] [i_12] [i_14 - 2])))));
                        arr_50 [i_11] [i_13] [i_13] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) max((((((_Bool) -1868803992815775954LL)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) : (max((((/* implicit */unsigned long long int) var_6)), (11750535298411285376ULL))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (min((11750535298411285375ULL), (((/* implicit */unsigned long long int) (unsigned char)96))))))));
                    }
                } 
            } 
        } 
        var_30 = 11750535298411285375ULL;
    }
    var_31 = ((/* implicit */unsigned short) (+(min((11750535298411285375ULL), (((/* implicit */unsigned long long int) var_11))))));
}
