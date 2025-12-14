/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209455
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
    var_13 = ((/* implicit */long long int) var_4);
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 1])) ? ((+(arr_0 [i_0]))) : (arr_1 [i_0 + 1] [i_0 + 1]))) & (((/* implicit */unsigned long long int) 3651979738U))));
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */int) 3651979738U);
                        var_16 = arr_5 [i_0 + 1] [i_1] [i_1];
                        arr_10 [i_0 + 1] [i_1] [i_0] [i_0 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) var_10)))));
                        var_17 = ((/* implicit */unsigned long long int) (-(642987551U)));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        var_18 = ((/* implicit */signed char) var_3);
        arr_13 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-9979)) || ((((~(642987561U))) > (min((642987558U), (((/* implicit */unsigned int) arr_12 [i_4]))))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        var_19 = ((((/* implicit */int) (_Bool)1)) + (454465898));
        /* LoopSeq 3 */
        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    {
                        var_20 &= ((/* implicit */unsigned int) (~(var_2)));
                        var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)16)) ? (((((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_5] [i_8])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_18 [i_5])))) | ((-(((/* implicit */int) ((((/* implicit */int) arr_15 [i_5])) == (((/* implicit */int) var_5)))))))));
                    }
                } 
            } 
            arr_25 [i_6] = ((/* implicit */short) (_Bool)1);
            arr_26 [i_5] [(short)8] = ((/* implicit */signed char) (unsigned char)240);
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            var_22 = ((/* implicit */long long int) arr_20 [i_5] [i_5] [0U]);
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 16; i_10 += 1) 
            {
                for (unsigned int i_11 = 2; i_11 < 15; i_11 += 4) 
                {
                    {
                        arr_36 [i_5] [i_9] [i_10 + 1] [(signed char)1] = ((/* implicit */unsigned int) (~(arr_16 [i_11 + 1] [i_9] [i_10 - 2])));
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_5] [i_10 - 1])) ? (arr_29 [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))))));
                        var_24 = ((/* implicit */long long int) arr_18 [i_10]);
                    }
                } 
            } 
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            /* LoopNest 2 */
            for (short i_13 = 1; i_13 < 14; i_13 += 2) 
            {
                for (unsigned char i_14 = 0; i_14 < 17; i_14 += 3) 
                {
                    {
                        var_25 += ((/* implicit */int) ((signed char) arr_30 [i_12] [i_12] [i_13] [(unsigned char)9]));
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (signed char)-85))));
                        arr_43 [i_12] [i_12] [(short)14] [8] = arr_14 [i_13 + 3];
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_15 = 0; i_15 < 17; i_15 += 2) 
            {
                for (int i_16 = 0; i_16 < 17; i_16 += 1) 
                {
                    {
                        arr_49 [i_12] = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [(unsigned char)10] [i_16] [(short)4] [i_12] [i_5]))))), (arr_20 [(signed char)14] [i_12] [i_15])));
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-5669)) ? (((((/* implicit */int) (signed char)-85)) + (543440628))) : ((-((~(((/* implicit */int) arr_31 [11LL] [i_5]))))))));
                        arr_50 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) (short)11124))))))) ^ (min((arr_21 [i_15] [(unsigned char)12] [i_15] [i_16]), (((/* implicit */unsigned int) arr_24 [i_5] [i_5] [i_15] [i_16] [i_15] [i_12]))))));
                        var_28 = ((/* implicit */unsigned int) arr_33 [i_16] [i_5] [i_12] [i_5]);
                    }
                } 
            } 
        }
    }
    for (int i_17 = 3; i_17 < 15; i_17 += 3) 
    {
        var_29 = ((/* implicit */short) arr_40 [i_17] [(_Bool)1] [(short)13]);
        arr_55 [(signed char)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_39 [i_17 - 3] [0ULL] [i_17 - 1]))))) : (((((/* implicit */_Bool) arr_41 [i_17] [i_17] [i_17] [i_17] [i_17])) ? (arr_41 [i_17] [16U] [i_17] [i_17] [i_17 - 3]) : (501630080U)))))) ? (((/* implicit */int) ((arr_51 [i_17 - 2]) != (((/* implicit */long long int) arr_52 [i_17 + 1]))))) : (((((/* implicit */_Bool) arr_6 [(unsigned char)3] [i_17] [i_17 - 2])) ? (((int) var_6)) : (((/* implicit */int) (unsigned char)211))))));
        var_30 = ((/* implicit */int) arr_12 [(unsigned char)10]);
    }
}
