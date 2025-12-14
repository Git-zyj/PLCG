/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212383
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
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (-(((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                arr_5 [(short)2] = ((/* implicit */short) (~(((/* implicit */int) ((short) arr_3 [i_1] [i_1 - 2])))));
                var_13 = max((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-121))))), ((-(var_3))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (max((var_2), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) arr_4 [7LL] [i_2]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                for (long long int i_5 = 4; i_5 < 9; i_5 += 2) 
                {
                    {
                        arr_14 [i_2] [(short)6] [i_4] [4ULL] [i_5] = ((/* implicit */long long int) arr_1 [i_2] [i_4]);
                        var_16 = (short)6739;
                        arr_15 [5ULL] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_9)) * (var_10)));
                        arr_16 [i_4] [i_4] [i_4] [(short)8] |= ((/* implicit */short) arr_13 [i_2] [i_3] [i_3] [i_4]);
                        arr_17 [(unsigned char)9] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [i_5] [i_5 - 2] [i_5 - 2] [i_5]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)384))));
        /* LoopNest 2 */
        for (long long int i_7 = 1; i_7 < 9; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                {
                    arr_28 [4U] [i_7] [5U] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) != (-296364568379119430LL))))) & (((5968999657142091658LL) | (((/* implicit */long long int) ((/* implicit */int) (short)-6720)))))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_6])) ? (511U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6728)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [0ULL])))))) : (var_5)));
                }
            } 
        } 
        arr_29 [i_6] [i_6] = ((/* implicit */unsigned char) var_11);
    }
    for (signed char i_9 = 1; i_9 < 14; i_9 += 4) 
    {
        var_18 = ((-1973638447929828671LL) & (((/* implicit */long long int) (~(((/* implicit */int) max(((signed char)121), ((signed char)-125))))))));
        /* LoopNest 3 */
        for (long long int i_10 = 0; i_10 < 16; i_10 += 2) 
        {
            for (short i_11 = 0; i_11 < 16; i_11 += 4) 
            {
                for (long long int i_12 = 3; i_12 < 12; i_12 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_13 = 0; i_13 < 16; i_13 += 2) 
                        {
                            arr_42 [i_13] [i_12] [(short)5] [8LL] [8U] [i_12] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_9 + 2]))) == (((unsigned int) 10448676532376171017ULL))));
                            var_19 = ((((/* implicit */_Bool) arr_41 [i_12] [i_9 - 1])) ? (arr_41 [i_12] [i_9 + 1]) : (((/* implicit */long long int) var_6)));
                            arr_43 [i_9] [7LL] [i_10] [i_9] [(short)15] [(short)13] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_9 + 1] [i_12 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) arr_31 [(short)7])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)164))) : (arr_38 [i_9] [i_13])))));
                        }
                        var_20 = ((/* implicit */long long int) var_7);
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)65529)), (var_5)))), (var_0))))));
                        arr_44 [i_12] [i_11] [i_12] = ((/* implicit */long long int) max((((((/* implicit */int) ((short) (unsigned short)0))) * (((((/* implicit */_Bool) (short)32760)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (signed char)127)))))), (((/* implicit */int) (short)15325))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_14 = 0; i_14 < 20; i_14 += 1) 
    {
        arr_49 [i_14] = ((/* implicit */short) (+(((/* implicit */int) arr_48 [i_14] [i_14]))));
        arr_50 [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_9))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_3))));
    }
}
