/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29520
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
    var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)32562)), (4211928909U)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    for (short i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        {
                            arr_12 [22U] [i_1 - 2] [i_1] [i_2] [i_1 - 2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [0U] [i_3])) ? (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_1] [i_1 - 2] [i_4])) : (var_10)));
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35160)) ? (((/* implicit */unsigned long long int) var_12)) : (var_10)))) ? (((/* implicit */int) (unsigned short)32562)) : (((/* implicit */int) (short)14582)))))));
                            arr_13 [i_4] [i_1 - 2] [i_2] [i_1 - 2] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)51983))));
                            var_15 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [22ULL] [i_0] [i_3] [i_4])) ? (((/* implicit */int) arr_5 [i_3] [i_2] [i_1])) : (((/* implicit */int) (unsigned short)54064)))));
                        }
                    } 
                } 
            } 
            arr_14 [i_0] [i_0] = ((/* implicit */int) (unsigned short)35160);
            arr_15 [i_0] [i_1 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)54064)) ? (arr_10 [i_0] [i_1] [i_0] [i_1 + 2] [i_0]) : (arr_10 [i_0] [(unsigned char)15] [i_1] [i_1 + 2] [i_1])));
        }
        for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        {
                            arr_25 [i_0] [i_5 + 3] [i_6] [i_7] [i_5 + 3] [6LL] = ((/* implicit */unsigned long long int) arr_22 [i_0] [i_5] [i_0] [i_7] [i_8] [i_0]);
                            arr_26 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)11471)) && ((!(((/* implicit */_Bool) arr_19 [(unsigned char)17]))))));
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5 + 1] [i_5 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))) : (arr_0 [i_5 + 1] [i_5 + 1])))) ? (min((((/* implicit */int) (unsigned short)11469)), (arr_20 [i_5 + 1] [i_5 + 2]))) : (((/* implicit */int) min((arr_6 [i_5 + 4]), (((/* implicit */unsigned short) ((unsigned char) (unsigned short)32973))))))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */short) ((((unsigned long long int) arr_3 [i_0] [i_5 + 4] [i_5 + 1])) * (((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) var_9))))) * ((+(18446744073709551603ULL)))))));
            arr_27 [15U] [i_5 + 2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((arr_1 [i_5 + 4] [i_5 - 2]), (arr_1 [i_5 - 2] [i_5 + 2])))), (((1492137305575146474ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5 + 4] [i_5 + 3])))))));
        }
        arr_28 [i_0] [i_0] = ((6433612233157777007LL) / ((+(max((var_1), (((/* implicit */long long int) 2038925595)))))));
    }
    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_4 [i_9])))))))));
        arr_31 [i_9] [16U] = ((/* implicit */unsigned long long int) arr_16 [i_9]);
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) -1822847523))));
        arr_32 [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */int) ((short) arr_21 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))) : (((/* implicit */int) ((arr_21 [i_9] [i_9] [i_9] [6LL] [i_9] [i_9]) == (arr_21 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 25; i_11 += 3) 
            {
                {
                    var_20 = ((/* implicit */int) arr_34 [i_9] [i_9] [i_9]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 25; i_12 += 2) /* same iter space */
                    {
                        arr_43 [i_9] [i_10] [i_10] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_9] [i_10] [17U] [i_12])) ? (arr_8 [i_12] [i_10] [i_11] [i_12]) : (((/* implicit */unsigned long long int) var_1))));
                        arr_44 [i_9] [i_11] [i_9] = ((/* implicit */unsigned char) var_3);
                        var_21 = ((/* implicit */int) min((var_21), ((~((-(((/* implicit */int) var_0))))))));
                    }
                    for (int i_13 = 0; i_13 < 25; i_13 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned short) max((var_22), (arr_6 [i_9])));
                        arr_47 [i_9] [i_10] [i_11] [i_13] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) arr_45 [i_13] [i_11] [i_11] [i_11] [i_9] [i_9]))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_7)) : (3355782071U)))))) ? (((unsigned long long int) ((arr_16 [i_9]) / (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : (arr_0 [i_11] [i_11])));
                    }
                    var_23 = ((/* implicit */short) min((max(((-(((/* implicit */int) var_2)))), (((((/* implicit */int) arr_4 [i_9])) / (((/* implicit */int) (short)11320)))))), ((+(((/* implicit */int) (unsigned short)11471))))));
                    arr_48 [i_10] [i_10] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)32381))))) - (127ULL)));
                    var_24 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_9 [i_9] [i_9] [i_11] [(unsigned char)10] [(unsigned char)10])) ? (((/* implicit */int) arr_7 [i_9])) : (((/* implicit */int) arr_6 [i_9])))), (((/* implicit */int) arr_9 [i_11] [i_10] [i_11] [i_10] [i_9]))));
                }
            } 
        } 
    }
}
