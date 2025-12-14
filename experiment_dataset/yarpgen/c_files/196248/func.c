/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196248
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) 4294967295U)) : (var_7)))))) ? (((/* implicit */unsigned long long int) var_2)) : (var_1)));
    var_12 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) var_3)))) < (((max((var_4), (((/* implicit */unsigned long long int) (_Bool)0)))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (2199023255551LL) : (((/* implicit */long long int) var_0)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) arr_4 [i_0 + 1] [i_1])), (min((((/* implicit */long long int) arr_6 [i_2] [i_2])), (arr_5 [i_1]))))) >= (max((arr_5 [i_0 + 1]), (((/* implicit */long long int) arr_7 [i_0 + 1]))))));
                        arr_11 [i_3] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) arr_6 [i_0] [i_1]);
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] &= ((min((((/* implicit */int) (signed char)-62)), (((arr_0 [i_0 - 1]) | (((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_0 - 2] [12LL])))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0]))))));
        arr_13 [i_0] = ((/* implicit */unsigned short) var_1);
    }
    for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        var_14 -= ((/* implicit */unsigned short) min((32767LL), (((/* implicit */long long int) (-(((3784144413U) | (arr_1 [i_4]))))))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4]))) & ((~(var_10)))));
        var_16 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) <= (min((arr_1 [i_4]), (((/* implicit */unsigned int) var_0))))))), (arr_15 [i_4] [i_4])));
        /* LoopSeq 3 */
        for (unsigned int i_5 = 1; i_5 < 9; i_5 += 1) 
        {
            arr_19 [i_5] [i_5] = ((/* implicit */_Bool) max((arr_14 [i_5 + 1] [i_5 + 1]), (((((/* implicit */_Bool) arr_14 [i_5 + 1] [i_5 + 1])) ? (arr_14 [i_5 + 2] [i_5]) : (arr_14 [i_5 - 1] [i_5])))));
            var_17 = arr_16 [i_5];
        }
        for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    {
                        arr_29 [i_4] [7] [(_Bool)1] [i_4] [i_7] [i_8] = ((/* implicit */unsigned long long int) max((-2251799813685248LL), (((/* implicit */long long int) 1007394747))));
                        arr_30 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_7])), (arr_22 [i_4] [i_7] [i_8])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_4] [i_6] [i_7]))) : (min((((/* implicit */long long int) (short)-25385)), (arr_15 [i_7] [i_8]))))) / (min((((((/* implicit */_Bool) arr_14 [(unsigned char)10] [i_6])) ? (arr_10 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_6]))))), (((/* implicit */long long int) var_2)))));
                    }
                } 
            } 
            var_18 = ((/* implicit */_Bool) max((var_18), (arr_9 [i_4] [i_6])));
            arr_31 [i_4] [2U] [i_6] = ((/* implicit */long long int) (~((+(var_10)))));
        }
        for (int i_9 = 1; i_9 < 8; i_9 += 1) 
        {
            var_19 -= ((/* implicit */short) ((((/* implicit */int) (unsigned char)53)) == (min(((+(((/* implicit */int) (signed char)-20)))), (((/* implicit */int) (short)8134))))));
            var_20 = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-73)) ? (var_2) : (((/* implicit */int) arr_7 [i_9]))))))), ((!(((/* implicit */_Bool) arr_17 [i_4] [i_9] [i_9 + 2]))))));
            var_21 = ((/* implicit */long long int) max((((/* implicit */signed char) arr_4 [i_4] [i_9])), (arr_26 [i_9 - 1] [i_9 + 1] [i_9 + 3] [i_9 + 1])));
        }
    }
}
