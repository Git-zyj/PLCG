/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237191
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
    /* LoopSeq 4 */
    for (signed char i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned char) ((arr_3 [i_0] [(unsigned short)20] [i_0]) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))) : ((~(((/* implicit */int) arr_1 [i_0]))))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        arr_10 [i_2] [i_1 - 2] [i_1] [(unsigned short)24] = ((long long int) arr_3 [i_0] [(_Bool)1] [i_0 - 4]);
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (8056794266280003485LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4720)))));
                        arr_11 [i_2] [i_2] [i_1 - 1] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)4722)) >= (((/* implicit */int) (short)32704)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)4709))));
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 3] [i_1 + 1])) : ((+(((/* implicit */int) (unsigned short)4736))))));
        }
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_11)))) < (max((((/* implicit */unsigned int) arr_3 [i_0 + 2] [i_0] [(unsigned short)13])), (var_4)))))) : (max((arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0] [2ULL] [i_0 - 2]), (((((/* implicit */int) arr_3 [(unsigned char)12] [(_Bool)1] [i_0])) - (((/* implicit */int) (_Bool)1)))))))))));
        arr_12 [i_0] [i_0 + 3] = ((/* implicit */unsigned long long int) arr_3 [i_0] [12ULL] [12ULL]);
    }
    for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned int) arr_5 [i_4] [i_4] [i_4] [i_4]);
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (arr_2 [i_4] [i_4] [(signed char)2])));
        arr_17 [i_4] = ((/* implicit */short) (unsigned short)60809);
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)124)) == (((/* implicit */int) arr_20 [i_5]))));
        arr_21 [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_5]))));
        /* LoopNest 3 */
        for (short i_6 = 1; i_6 < 11; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            arr_30 [i_5] [(unsigned short)2] [i_7] [i_6] [i_9] = ((/* implicit */long long int) 2527611254858989848ULL);
                            var_21 = ((((/* implicit */_Bool) (unsigned short)60809)) ? (((/* implicit */int) arr_0 [i_5] [22LL])) : (arr_22 [i_6 + 3]));
                        }
                        arr_31 [i_5] [i_6] [i_8] [i_8] = ((/* implicit */unsigned char) (~((-(-127280195117461754LL)))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_7))));
        var_23 = ((/* implicit */short) 13978705801437428836ULL);
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_8 [i_10] [(signed char)4] [(signed char)4] [(unsigned short)12]))));
        arr_35 [i_10] [i_10] = ((/* implicit */unsigned int) arr_3 [i_10] [i_10] [i_10]);
    }
    var_25 = ((/* implicit */int) var_10);
    var_26 = ((/* implicit */short) max((((/* implicit */int) (unsigned short)4736)), ((~(((/* implicit */int) var_0))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_11 = 0; i_11 < 17; i_11 += 4) 
    {
        var_27 = ((/* implicit */unsigned short) ((long long int) arr_13 [i_11]));
        /* LoopNest 2 */
        for (signed char i_12 = 3; i_12 < 14; i_12 += 4) 
        {
            for (signed char i_13 = 3; i_13 < 13; i_13 += 3) 
            {
                {
                    var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-11235))));
                    var_29 = ((/* implicit */short) (((!(((/* implicit */_Bool) 1073741824)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)31325))) : (((127280195117461753LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60827)))))));
                }
            } 
        } 
    }
}
