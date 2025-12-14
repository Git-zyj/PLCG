/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5049
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
    var_13 = ((/* implicit */signed char) (~(var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */_Bool) var_8);
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (_Bool)1))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */int) var_6)), (max(((~(((/* implicit */int) (short)-7496)))), (((/* implicit */int) max(((short)-7478), (((/* implicit */short) var_0)))))))));
    /* LoopSeq 4 */
    for (unsigned int i_2 = 2; i_2 < 19; i_2 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */int) max((var_17), (min(((~(((((/* implicit */int) (unsigned char)243)) | (((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 1])))))), ((~((~(((/* implicit */int) arr_6 [i_2 - 2] [(short)7]))))))))));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_10)) + (((/* implicit */int) arr_9 [i_2] [i_3 + 3]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned short) var_10)))))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (var_3)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_2] [i_3])), (arr_8 [i_2] [i_3] [16ULL])))) : (((/* implicit */int) min((var_11), (((/* implicit */signed char) arr_6 [i_2] [i_3])))))))));
            arr_11 [i_2] [i_3] [i_3] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 - 1] [i_3] [i_3]))) | (((((/* implicit */_Bool) arr_10 [i_3])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_3] [i_2 - 2]))))))) != (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_3])))));
            var_19 = var_12;
        }
    }
    for (unsigned int i_4 = 2; i_4 < 19; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_6 = 2; i_6 < 19; i_6 += 3) 
            {
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    {
                        var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_4] [i_6 - 2])) ? (arr_7 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7490)))));
                        arr_22 [i_6] [i_6] [i_7] [i_4 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_21 [i_4 - 2] [i_5] [i_6 - 2] [i_7] [(_Bool)1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_18 [i_4 - 1] [i_6] [i_6] [i_7])) <= (((/* implicit */int) arr_9 [i_4] [i_7]))))) : (((/* implicit */int) (unsigned char)239))));
                    }
                } 
            } 
            arr_23 [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) arr_14 [i_4 + 1])) : (((/* implicit */int) arr_14 [i_4 - 1]))));
            arr_24 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_20 [i_4 + 1] [(short)13])) > (70368744177408ULL)));
        }
        /* vectorizable */
        for (short i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
        {
            var_21 += ((/* implicit */short) (~(arr_7 [i_4 - 1])));
            var_22 = ((/* implicit */_Bool) 464161138);
        }
        arr_27 [i_4] [i_4] |= (unsigned char)9;
        arr_28 [i_4 + 1] [i_4 + 1] |= ((/* implicit */unsigned int) arr_16 [1LL] [1LL] [i_4]);
        arr_29 [i_4] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (short)7490)) ? (arr_26 [i_4 + 1] [i_4 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
    }
    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((((arr_13 [i_9]) && (var_0))) ? ((~(((/* implicit */int) min((((/* implicit */short) var_2)), ((short)7466)))))) : (((/* implicit */int) arr_32 [i_9] [i_9]))));
        arr_33 [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-(var_4))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_9] [i_9] [i_9] [i_9] [i_9]))) > (arr_25 [i_9] [i_9]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)7)) ^ (var_4)))) ? (((((/* implicit */int) (_Bool)1)) + (-481227536))) : (((/* implicit */int) arr_16 [i_9] [i_9] [i_9])))) : (((((/* implicit */_Bool) (~(arr_20 [i_9] [i_9])))) ? (((/* implicit */int) var_12)) : ((-(((/* implicit */int) var_2))))))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_9] [i_9])) && (((/* implicit */_Bool) -1485028919)))))) / (min((((/* implicit */long long int) ((signed char) 1023))), (7640830598545355026LL)))));
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            arr_38 [i_9] [i_10] = ((((/* implicit */int) arr_9 [i_9] [i_9])) * ((-(((((/* implicit */int) var_6)) & (var_4))))));
            arr_39 [i_9] [i_9] [i_9] = ((/* implicit */short) arr_10 [i_9]);
        }
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_12 = 0; i_12 < 18; i_12 += 3) 
            {
                for (int i_13 = 4; i_13 < 17; i_13 += 2) 
                {
                    for (unsigned short i_14 = 3; i_14 < 17; i_14 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_6))));
                            arr_52 [i_14] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_17 [i_9]))))));
                        }
                    } 
                } 
            } 
            arr_53 [(_Bool)1] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_9])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) : ((+(arr_25 [i_9] [i_9])))));
        }
        arr_54 [i_9] = ((/* implicit */signed char) min((((/* implicit */long long int) min((var_1), (((var_0) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_44 [i_9] [i_9] [i_9]))))))), (var_3)));
    }
    /* vectorizable */
    for (unsigned char i_15 = 4; i_15 < 15; i_15 += 3) 
    {
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((unsigned short) ((((/* implicit */int) var_2)) / (arr_20 [9] [i_15 - 3])))))));
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((var_6) ? (arr_25 [i_15] [i_15 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_20 [(short)18] [i_15])) / (var_3)))))))));
        var_28 = ((/* implicit */short) ((arr_6 [i_15] [i_15 - 2]) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-7462))) % (7940242229896787599LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)8)))))));
        arr_59 [i_15] [i_15] = ((/* implicit */unsigned long long int) arr_17 [i_15]);
    }
}
