/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220482
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            arr_4 [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_0 [i_1 - 2] [i_1 - 1])), (((arr_0 [i_1 - 1] [i_1 - 2]) ? (16411565931425931005ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 2])))))));
            arr_5 [i_0] [i_0] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
        }
        for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            var_13 = ((/* implicit */int) (-(16411565931425930998ULL)));
            arr_8 [(signed char)5] [i_2] = arr_2 [i_2];
            var_14 |= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0])))))) ? (max((((arr_0 [i_0] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) : (arr_3 [10ULL] [(short)8] [10ULL]))), (((/* implicit */unsigned long long int) (unsigned char)56)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_0] [i_2])))))));
        }
        arr_9 [i_0] [9LL] = arr_3 [i_0] [i_0] [i_0];
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */int) arr_10 [i_3] [i_3]);
        arr_15 [i_3] [i_3] = ((/* implicit */short) (+(4294967288U)));
    }
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
    {
        var_15 += ((/* implicit */unsigned char) (+(4294967295U)));
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_27 [i_4] [i_5] [i_6] [i_5] [i_7] = ((/* implicit */unsigned char) (~(2035178142283620604ULL)));
                        arr_28 [i_7] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2035178142283620592ULL)) ? (2035178142283620607ULL) : (13223166031574187056ULL)))))))));
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_24 [i_7] [i_6] [i_6] [i_5] [i_4])))) ? (((/* implicit */unsigned long long int) arr_23 [i_5] [i_6] [i_6])) : (((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28868))) : (13223166031574187056ULL))))))));
                        var_17 = (-(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_7])) && (((/* implicit */_Bool) arr_17 [i_4] [i_5]))))));
                        arr_29 [i_7] [i_5] [i_6] [i_7] [(_Bool)1] = ((/* implicit */int) arr_11 [i_5]);
                    }
                } 
            } 
        } 
        arr_30 [i_4] |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4] [i_4]))) : (arr_11 [i_4])))));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
    {
        arr_34 [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) ? (((int) arr_11 [10])) : (arr_17 [i_8] [i_8])));
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 9; i_9 += 2) 
        {
            for (signed char i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                {
                    arr_41 [(_Bool)0] [i_9] [i_8] = ((/* implicit */unsigned long long int) (+(arr_23 [i_9 - 2] [i_9 - 2] [(signed char)9])));
                    var_18 += arr_18 [i_8] [11];
                    arr_42 [i_8] [i_9 + 1] [i_9 + 1] [i_10] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32745))) % (arr_12 [(unsigned short)1]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [i_10] [i_8]))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) ((((int) 28U)) - (((/* implicit */int) (short)-28846))));
    }
    var_20 *= ((/* implicit */int) 14U);
    var_21 = var_10;
    var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
}
