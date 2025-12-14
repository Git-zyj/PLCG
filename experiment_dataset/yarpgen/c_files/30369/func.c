/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30369
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 13691593208101933975ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)384))) : (6353285835960196641ULL)));
                    arr_7 [(unsigned char)12] [i_0] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_2 - 2])) ? (((/* implicit */unsigned long long int) 1581653078)) : (arr_3 [i_0] [i_0]))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_1 - 1] [i_2 - 2])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_3 = 3; i_3 < 15; i_3 += 2) /* same iter space */
    {
        arr_10 [i_3] [4] = ((/* implicit */unsigned long long int) arr_9 [i_3 - 1] [(short)14]);
        arr_11 [i_3] [i_3 - 1] |= ((/* implicit */long long int) max((((/* implicit */int) arr_8 [i_3])), (((1581653088) - (((/* implicit */int) ((signed char) arr_9 [i_3] [i_3 - 3])))))));
    }
    for (unsigned char i_4 = 3; i_4 < 15; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
        {
            arr_18 [i_5] = ((/* implicit */short) min((((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)248))))))), (1581653078)));
            arr_19 [i_5] [i_5] [i_4 - 2] = -1581653080;
            var_13 ^= ((/* implicit */unsigned int) ((-1581653080) <= (((/* implicit */int) ((max((1581653074), (((/* implicit */int) (short)-32767)))) == ((-(((/* implicit */int) (unsigned char)192)))))))));
            arr_20 [i_4] = ((/* implicit */_Bool) ((unsigned int) (~(min((((/* implicit */int) (unsigned char)63)), (1581653078))))));
            var_14 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 14721990720668872352ULL)) && (((/* implicit */_Bool) -941420194))))) != (((/* implicit */int) (unsigned char)43)))))) <= (((((/* implicit */_Bool) arr_8 [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4 - 2]))) : (var_9)))));
        }
        for (long long int i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1448835297)) ? (((/* implicit */int) ((unsigned short) 1581653067))) : (((int) (short)-9015))));
            var_16 = var_7;
            arr_23 [i_4] [i_4] [i_6] = ((/* implicit */signed char) (+(((int) var_1))));
            var_17 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) 27LL)) ? (arr_12 [2ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4 - 3]))))) : (min((var_10), (((/* implicit */long long int) arr_17 [i_4] [i_4] [i_4]))))))), (((arr_21 [i_4 - 1] [i_4 + 1]) ? (arr_22 [i_4 - 1] [i_4 - 2] [i_4 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46731)))))));
        }
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (+(3724753353040679264ULL))))));
    }
}
