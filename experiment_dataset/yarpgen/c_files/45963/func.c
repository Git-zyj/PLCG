/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45963
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
    var_11 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_9 [i_2] [i_2] [i_2] [i_3] [i_2] [i_2] = min((((((/* implicit */_Bool) min(((unsigned char)151), (((/* implicit */unsigned char) (signed char)-7))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)52018)), (arr_1 [i_1])))) : (arr_2 [i_0]))), (((var_1) << (((arr_0 [i_2]) - (1785159600U))))));
                        arr_10 [i_0] [i_3] &= ((/* implicit */unsigned int) -2207328071803694737LL);
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 1923493005)) ? (arr_4 [i_1]) : (3056687568U))) + (arr_2 [i_4])));
                            arr_14 [i_2] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)66)))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (var_10) : (((/* implicit */long long int) var_1)))))) & (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)81)))))));
                        }
                        arr_15 [i_0] [11U] [i_3] [i_2] [8] = ((unsigned short) (unsigned short)36255);
                    }
                    arr_16 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) min((-3157642), (((/* implicit */int) (short)0))))) ? (((/* implicit */int) (unsigned short)24408)) : (((/* implicit */int) var_9)))));
                    arr_17 [i_2] [i_1] [i_0] [i_2] = ((/* implicit */signed char) max((min((-1390227450), (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                }
                for (long long int i_5 = 3; i_5 < 19; i_5 += 1) 
                {
                    arr_22 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_0] [i_1] [i_5])) * (((/* implicit */int) (unsigned short)60033))))) ? (((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) arr_12 [i_1] [12] [i_1] [i_1] [i_1])) : (-404426227339379373LL))) : (((/* implicit */long long int) ((int) (unsigned short)20491))))) >> (((1619728860) - (1619728843)))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 3; i_6 < 20; i_6 += 1) 
                    {
                        for (short i_7 = 2; i_7 < 18; i_7 += 2) 
                        {
                            {
                                arr_27 [i_5] [i_6] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) arr_21 [i_7] [i_7] [i_6 - 1] [i_5 + 1])))));
                                arr_28 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) min((max((((/* implicit */int) ((var_3) != (((/* implicit */int) (unsigned char)64))))), (max((((/* implicit */int) (short)-4)), (arr_23 [i_5 - 2] [i_5 - 2]))))), (((((/* implicit */int) min((var_6), (((/* implicit */unsigned short) arr_3 [i_7] [i_6] [i_1]))))) | (max((((/* implicit */int) (unsigned short)32768)), (arr_26 [6LL] [i_0] [i_7 - 1] [i_7] [i_6] [i_5] [i_0])))))));
                                arr_29 [i_0] [i_7] [10U] [i_6 - 1] [i_7 - 1] = ((/* implicit */int) max(((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)22308)))))), (((/* implicit */long long int) min((750429488U), (((/* implicit */unsigned int) (unsigned short)20727)))))));
                            }
                        } 
                    } 
                    arr_30 [i_5] [i_5 - 3] [i_1] [i_5] = ((((/* implicit */_Bool) ((unsigned int) min((var_7), (((/* implicit */unsigned int) var_2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */long long int) (unsigned short)33928)), (-3356752416898971356LL))) > (((/* implicit */long long int) 1390227447)))))) : (max(((~(var_1))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65523)) * (((/* implicit */int) arr_6 [i_1] [i_1] [i_5] [i_0]))))))));
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    arr_34 [i_8] [i_1] [i_1] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)27517)) ? (709468744) : (((((var_3) + (2147483647))) << (((arr_0 [10]) - (1785159617U)))))));
                    arr_35 [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_8])) && (((/* implicit */_Bool) (unsigned short)0))));
                }
                arr_36 [i_1] = ((/* implicit */signed char) arr_6 [i_1] [1LL] [i_0] [i_0]);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) var_4);
    var_13 = max((2005188019U), (var_1));
    var_14 = ((((/* implicit */_Bool) ((long long int) ((long long int) var_9)))) ? (min((max((3758215670U), (3750767139U))), (min((((/* implicit */unsigned int) var_2)), (var_1))))) : (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57045))) : (2622061641U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_0))))))));
}
