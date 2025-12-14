/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229833
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
    for (signed char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    var_18 = ((long long int) ((long long int) arr_4 [i_2] [i_1] [i_0]));
                    arr_8 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) var_10)))) : (arr_6 [i_0] [i_1] [i_1] [i_2])))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 1])) != (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (_Bool)0))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) (signed char)-115);
    /* LoopSeq 1 */
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        arr_11 [i_3] = ((/* implicit */int) ((((unsigned int) var_10)) % (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_9 [i_3])))))));
        /* LoopSeq 1 */
        for (long long int i_4 = 2; i_4 < 15; i_4 += 3) 
        {
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_9))));
            arr_14 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_13 [i_4]), (arr_13 [i_4]))))));
        }
    }
    var_21 = ((/* implicit */long long int) ((int) var_8));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 2; i_6 < 12; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 2) 
            {
                {
                    arr_22 [i_7] [i_6] [i_7] = ((arr_20 [i_6 - 2] [i_7 + 3] [10] [i_7 + 3]) <= (((((/* implicit */_Bool) arr_21 [i_5] [i_6] [i_7] [i_5])) ? (arr_20 [i_5] [i_6] [i_6] [i_7]) : (((/* implicit */int) arr_15 [i_6] [i_7 - 1])))));
                    var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-120)) ? (1524172408U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-20325)))));
                    var_23 = ((/* implicit */unsigned int) ((_Bool) ((arr_10 [i_5]) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-125))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_5])) % (((/* implicit */int) arr_18 [i_5]))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))));
        arr_23 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [(unsigned char)16])) ? ((-(var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(_Bool)1])))));
        arr_24 [i_5] [i_5] = ((/* implicit */unsigned short) arr_15 [i_5] [i_5]);
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 12; i_8 += 1) 
        {
            for (signed char i_9 = 2; i_9 < 12; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_33 [i_5] [i_8] [i_9] [8] [i_10] = ((/* implicit */long long int) ((arr_17 [i_9 - 1] [i_8 - 1]) & (((/* implicit */unsigned int) 476876437))));
                        var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || ((_Bool)1))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_11 = 0; i_11 < 13; i_11 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) arr_17 [i_11] [i_11]))));
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (_Bool)1))));
                    arr_40 [i_11] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_11] [i_11])) ? (var_15) : (arr_16 [i_13])))) ^ (((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_14)))))) ? (((/* implicit */int) ((short) var_17))) : (((/* implicit */int) ((arr_37 [i_11] [i_11] [i_11]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_28 = ((/* implicit */long long int) (_Bool)1);
                    arr_41 [i_11] [i_13] = ((/* implicit */short) var_12);
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_14 = 0; i_14 < 13; i_14 += 2) 
        {
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                {
                    var_29 = ((/* implicit */_Bool) arr_21 [i_11] [i_14] [i_11] [i_11]);
                    arr_49 [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_43 [i_11] [i_11]) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_13))))) ? (var_4) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(var_10))))))) : (arr_32 [i_15] [i_15] [i_15] [i_15 - 1] [i_15] [i_15])));
                    arr_50 [i_11] = ((signed char) ((((/* implicit */_Bool) arr_30 [i_15] [(_Bool)1])) ? (((unsigned long long int) -476876437)) : (((/* implicit */unsigned long long int) var_3))));
                    arr_51 [i_11] [i_14] [i_15] [i_15] = ((/* implicit */_Bool) (-(min((arr_29 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 - 1]), (((/* implicit */int) var_16))))));
                    arr_52 [i_15 - 1] [i_11] [i_11] = ((/* implicit */_Bool) ((unsigned int) (_Bool)1));
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(var_2)))), (max((((/* implicit */unsigned long long int) arr_13 [(signed char)8])), (max((((/* implicit */unsigned long long int) arr_39 [i_11] [6U] [6U] [i_11])), (var_14))))))))));
    }
}
