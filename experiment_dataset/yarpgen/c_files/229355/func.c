/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229355
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
    var_10 = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_7)))) < (((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            arr_4 [6U] [6U] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40838))) : (9023765206208169175LL))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)26179))))))) : (((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_3 [i_0]) : (((/* implicit */long long int) arr_0 [i_0 - 1]))))) : ((+(8191ULL)))))));
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((arr_3 [i_0]), (((/* implicit */long long int) (signed char)94)))), (((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) : (arr_3 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 1] [i_1] [i_1]))) & (arr_3 [i_0])))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            var_11 |= ((/* implicit */unsigned int) ((_Bool) var_5));
            var_12 = ((/* implicit */unsigned int) ((short) arr_2 [i_0 + 1] [i_0 - 1] [i_0 + 1]));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    for (unsigned short i_6 = 3; i_6 < 15; i_6 += 1) 
                    {
                        {
                            var_13 -= ((/* implicit */signed char) (-(arr_0 [i_5])));
                            arr_17 [9U] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_3]))));
                        }
                    } 
                } 
            } 
            var_14 = ((/* implicit */unsigned long long int) var_8);
            var_15 ^= ((/* implicit */int) (((!(((/* implicit */_Bool) (short)0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)94)))) : (arr_7 [i_0])));
        }
        /* LoopNest 2 */
        for (unsigned char i_7 = 1; i_7 < 16; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (int i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            {
                                arr_30 [i_10] [i_9] [i_7] [i_7 + 1] [i_0] = ((/* implicit */_Bool) 0LL);
                                arr_31 [10U] [i_8] [i_9] [i_9] [i_10] [i_10] [i_8] &= ((/* implicit */unsigned int) min((((/* implicit */long long int) min((arr_28 [i_0] [i_8] [i_0 - 1] [i_0] [i_8] [i_0]), (((/* implicit */unsigned int) var_8))))), ((-(min((arr_21 [i_0] [i_7] [i_8] [i_0]), (-3465176528494967195LL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 3; i_12 < 16; i_12 += 1) 
                        {
                            {
                                arr_36 [i_0] [i_7] [i_7 - 1] [(unsigned char)3] [i_11] [i_11] [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) arr_23 [i_0] [i_0] [i_0])))));
                                arr_37 [i_7] = ((/* implicit */signed char) ((long long int) ((short) ((signed char) (_Bool)0))));
                                var_16 |= ((/* implicit */signed char) (short)-7502);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (long long int i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        var_17 = ((/* implicit */int) (~((+(arr_19 [i_7] [i_7 + 1] [i_7])))));
                        var_18 = ((/* implicit */unsigned char) 3576743578U);
                        arr_41 [i_7] [i_7] [i_7] [i_13] = ((/* implicit */short) (signed char)-94);
                    }
                    for (long long int i_14 = 3; i_14 < 14; i_14 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned char) ((unsigned int) var_2));
                        var_20 = (i_7 % 2 == zero) ? (((/* implicit */unsigned short) (((-(arr_43 [i_7] [i_7 - 1]))) + (4181989522285892827LL)))) : (((/* implicit */unsigned short) (((-(arr_43 [i_7] [i_7 - 1]))) - (4181989522285892827LL))));
                    }
                    for (long long int i_15 = 3; i_15 < 14; i_15 += 2) /* same iter space */
                    {
                        var_21 -= ((/* implicit */unsigned int) (signed char)-1);
                        var_22 = ((long long int) var_9);
                    }
                    arr_49 [i_7] [i_7 + 1] [i_7] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_39 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7] [i_7] [i_7])), (((unsigned long long int) ((var_1) ? (((/* implicit */int) (short)-7502)) : (((/* implicit */int) arr_2 [i_7 - 1] [i_7] [i_7])))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */long long int) 1608920612U)) != (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), (var_2)))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)1)) & (((/* implicit */int) (signed char)94))))))))))));
}
