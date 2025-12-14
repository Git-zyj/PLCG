/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199234
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) min((min((var_6), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0])))))));
                                arr_12 [i_1] [i_4] [i_3] [i_2] [i_1] [i_1] |= ((/* implicit */signed char) (-(((/* implicit */int) (!(var_14))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_14))));
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((~(var_7))), (((/* implicit */long long int) (-(((/* implicit */int) var_11))))))))));
        arr_15 [14ULL] [14ULL] |= (-(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_8))))));
        var_18 = ((/* implicit */unsigned char) (~(min((arr_9 [i_0] [i_0]), (((/* implicit */unsigned int) (_Bool)1))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            arr_18 [i_0] [i_5] [i_5] = ((/* implicit */unsigned char) var_11);
            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_5] [i_0]))));
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    {
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_10)))))));
                        arr_24 [i_7] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_21 [i_7]);
                    }
                } 
            } 
        }
    }
    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))));
    /* LoopSeq 4 */
    for (short i_8 = 0; i_8 < 22; i_8 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_21 &= ((/* implicit */unsigned short) ((var_2) << (((((/* implicit */int) arr_28 [i_9])) - (5)))));
            arr_30 [i_8] [i_9] = ((/* implicit */_Bool) var_8);
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 22; i_10 += 1) 
            {
                for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_31 [i_8] [i_11]))));
                        var_23 -= ((/* implicit */unsigned short) (~(arr_36 [i_8] [i_8] [i_8] [i_8] [i_8])));
                    }
                } 
            } 
        }
        arr_37 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) >= (max((((/* implicit */long long int) var_11)), (var_2)))));
    }
    /* vectorizable */
    for (unsigned short i_12 = 0; i_12 < 24; i_12 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) 
        {
            for (int i_14 = 0; i_14 < 24; i_14 += 4) 
            {
                for (int i_15 = 0; i_15 < 24; i_15 += 4) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) (-((~(var_2)))));
                        arr_48 [i_12] [i_13] [i_14] [i_15] = var_2;
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */short) 3042756654U);
        var_26 &= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) >= (arr_45 [i_12] [i_12] [i_12])))) - (((/* implicit */int) (signed char)-61))));
    }
    for (unsigned short i_16 = 0; i_16 < 24; i_16 += 4) /* same iter space */
    {
        arr_52 [i_16] = ((/* implicit */int) var_12);
        var_27 = ((/* implicit */unsigned char) min((min((((/* implicit */int) ((var_0) != (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))), ((-(((/* implicit */int) var_15)))))), ((-((~(((/* implicit */int) var_1))))))));
    }
    for (unsigned short i_17 = 0; i_17 < 24; i_17 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */_Bool) max((var_28), (((min((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_6)))), (var_14))) || (((/* implicit */_Bool) (~(var_6))))))));
        arr_55 [i_17] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)166)), (534773760U)));
        var_29 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_2))))));
    }
    var_30 = min((((((/* implicit */unsigned long long int) var_2)) ^ (((((/* implicit */unsigned long long int) 182148911U)) | (var_4))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))));
}
