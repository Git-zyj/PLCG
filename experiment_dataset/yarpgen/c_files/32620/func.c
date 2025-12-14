/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32620
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
    for (long long int i_0 = 2; i_0 < 16; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0]))) ? ((-(((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64892))))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [11]), (((/* implicit */unsigned char) var_1)))))) + (3934636773U))))));
            var_13 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [(unsigned short)10])))))) - (var_2))), (((/* implicit */long long int) ((((/* implicit */int) min((arr_2 [i_0]), ((unsigned short)47410)))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) 2428882436170546702LL))))))))));
            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) == (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (var_9) : (((/* implicit */int) arr_3 [i_0] [i_0]))))))) != ((~(1834236328))))))));
            var_15 = ((/* implicit */long long int) arr_0 [i_0]);
            var_16 = ((/* implicit */unsigned long long int) var_10);
        }
        for (unsigned char i_2 = 2; i_2 < 15; i_2 += 4) 
        {
            arr_8 [i_0] [i_2] = ((/* implicit */_Bool) arr_7 [i_0]);
            arr_9 [i_0] [i_2] = max(((unsigned short)12048), ((unsigned short)12059));
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)32766)) - (((/* implicit */int) (unsigned char)255))));
            var_18 = ((/* implicit */long long int) (-(((/* implicit */int) max(((unsigned char)233), (((unsigned char) (unsigned short)33358)))))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 2; i_3 < 16; i_3 += 1) 
        {
            arr_12 [i_3] = ((/* implicit */unsigned long long int) ((4261412864U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3 - 2])))));
            arr_13 [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -996555461396429892LL))));
            var_19 ^= ((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) (unsigned char)48)))));
            arr_14 [i_3] = ((/* implicit */long long int) arr_0 [i_0 + 1]);
        }
        for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            arr_17 [i_0] [i_0] [i_4] = ((/* implicit */int) (_Bool)1);
            arr_18 [i_0] [i_0] [(unsigned short)2] = ((/* implicit */unsigned char) (-((((!(((/* implicit */_Bool) arr_4 [i_0] [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 2662568602787908344ULL)))) : (-4176667329167581654LL)))));
            arr_19 [i_0] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (arr_4 [i_0] [i_4]))))))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 2; i_5 < 16; i_5 += 3) 
            {
                for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((((/* implicit */short) arr_1 [i_0])), ((short)398))))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [i_0 - 1]))))) ? (((/* implicit */int) (unsigned char)233)) : (((((/* implicit */_Bool) arr_27 [i_6])) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) arr_27 [i_4]))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
            {
                var_22 = ((/* implicit */signed char) ((max((arr_5 [i_0 - 1]), (arr_5 [i_0 - 1]))) >> (((((/* implicit */int) (unsigned short)47409)) - (47376)))));
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (+(((/* implicit */int) (!((_Bool)1)))))))));
            }
            for (long long int i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
            {
                arr_32 [i_0] [i_4] [i_8] [i_8] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)47410)), (8998403161718784LL)));
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 17; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_39 [i_0] [i_4] [i_8] [i_9] [(unsigned short)16] [i_9] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((unsigned char) arr_16 [i_4] [i_4])))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (long long int i_11 = 0; i_11 < 17; i_11 += 4) /* same iter space */
            {
                arr_42 [i_0] [i_0] [i_4] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_0 + 1] [i_0 - 1])) ? (arr_40 [i_0] [i_4] [i_11]) : (((/* implicit */int) arr_37 [i_4] [10LL] [i_11] [i_4] [i_4]))));
                arr_43 [i_0] [(unsigned short)13] [i_4] [i_11] = ((/* implicit */unsigned char) arr_30 [i_0] [i_0] [0LL]);
                arr_44 [i_0] = ((/* implicit */unsigned long long int) ((var_9) / (((/* implicit */int) ((_Bool) var_4)))));
            }
        }
        arr_45 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (signed char)-106))) && (((/* implicit */_Bool) arr_22 [i_0]))));
        arr_46 [i_0] |= ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_31 [i_0 - 2] [i_0 - 1] [i_0 - 2])))));
        arr_47 [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-(arr_38 [6ULL] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */long long int) var_8)) / (arr_31 [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0]))))), (((/* implicit */long long int) var_8))));
    }
    for (long long int i_12 = 2; i_12 < 16; i_12 += 4) /* same iter space */
    {
        arr_50 [i_12] [15ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_12 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_12 - 1]))) : (15324305165485188811ULL))))));
        arr_51 [i_12] = ((/* implicit */unsigned short) (unsigned char)144);
        arr_52 [i_12] = ((/* implicit */signed char) arr_27 [i_12]);
    }
    for (unsigned short i_13 = 1; i_13 < 18; i_13 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned short)19267))))));
        var_26 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)47410)) ? (((/* implicit */unsigned long long int) arr_55 [i_13])) : (var_11))));
    }
    for (unsigned short i_14 = 1; i_14 < 18; i_14 += 1) /* same iter space */
    {
        arr_59 [i_14] [i_14] = ((/* implicit */unsigned short) var_8);
        arr_60 [i_14] = ((/* implicit */short) 996555461396429892LL);
        /* LoopSeq 1 */
        for (unsigned char i_15 = 0; i_15 < 19; i_15 += 4) 
        {
            arr_64 [i_14] [i_14] [i_14] = ((/* implicit */unsigned char) var_9);
            arr_65 [i_14] = ((/* implicit */int) arr_55 [i_14]);
        }
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_62 [i_14] [i_14])))))));
    }
    var_28 = ((/* implicit */_Bool) (short)31763);
}
