/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199368
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
    var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_15 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_5 [i_1]) / (((/* implicit */int) var_7)))))));
                arr_6 [i_0] [(_Bool)1] [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 3) 
                    {
                        arr_14 [i_2] [i_1] [i_1] = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_10))))));
                        arr_15 [i_1] [i_2] = ((/* implicit */_Bool) min((((((((/* implicit */int) var_5)) < (((/* implicit */int) arr_1 [i_3])))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((_Bool) var_6))))), (((((((/* implicit */int) var_6)) <= (((/* implicit */int) var_7)))) ? (((((/* implicit */int) arr_11 [(signed char)11] [i_2] [(signed char)11] [i_3 - 3])) & (((/* implicit */int) var_12)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_7))))))));
                        arr_16 [i_0] [i_1] [i_2] [6] &= ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) min((var_3), (var_3))))))), (((int) arr_4 [i_1] [i_2]))));
                        var_16 &= ((/* implicit */short) min((((((((/* implicit */int) (signed char)7)) / (arr_5 [i_2]))) - ((+(((/* implicit */int) var_6)))))), (((((/* implicit */int) arr_12 [(signed char)8] [i_1] [i_3] [i_3] [i_3 - 2] [12])) ^ (((/* implicit */int) arr_12 [(short)12] [(signed char)14] [i_2] [i_2] [i_3 - 2] [i_3]))))));
                    }
                    for (int i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */signed char) ((unsigned short) var_6));
                        arr_20 [i_0] [i_0] [i_1] [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_4])) ^ (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_4]))))) ? (min((((/* implicit */unsigned long long int) arr_19 [i_0] [i_1] [i_2] [i_2])), (var_13))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_12 [i_2] [14] [11U] [i_1] [i_1] [i_2])), (-5656228736638561794LL))))))));
                        var_18 += ((/* implicit */unsigned short) (-(arr_4 [2] [i_1])));
                        var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned int) min((var_1), (arr_10 [i_2] [i_1] [i_1] [i_2] [4ULL] [i_4])))), (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)19441))) : (arr_3 [i_0] [i_1] [i_4]))), (((/* implicit */unsigned int) min((arr_17 [i_0] [(short)10] [i_2] [i_4]), (var_0))))))));
                    }
                    for (int i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
                    {
                        arr_23 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((_Bool) var_11));
                        arr_24 [1U] [i_0] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */short) (((-(((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [12ULL] [i_5] [i_5])))) - (((((/* implicit */_Bool) (unsigned short)56976)) ? (((/* implicit */int) (((-2147483647 - 1)) > (((/* implicit */int) (_Bool)1))))) : (1547267104)))));
                    }
                    var_20 += ((_Bool) ((min((((/* implicit */unsigned long long int) (short)-19445)), (16916503438550007918ULL))) ^ (((/* implicit */unsigned long long int) ((-1725595325) / (arr_13 [(signed char)8] [(signed char)14] [i_2] [i_2]))))));
                    var_21 ^= ((/* implicit */short) var_10);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
    {
        for (int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((int) (-(min((((/* implicit */int) var_1)), (arr_26 [i_6])))))))));
                            var_23 = ((/* implicit */unsigned long long int) min((1725595323), (23396867)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_10 = 1; i_10 < 19; i_10 += 4) 
                {
                    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        for (short i_12 = 2; i_12 < 18; i_12 += 3) 
                        {
                            {
                                var_24 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_40 [i_12 + 2] [i_12 - 1] [i_6] [i_6] [i_10 + 1] [i_6])) : (((/* implicit */int) arr_40 [i_12 + 2] [i_12 - 1] [i_7] [i_7] [i_10 - 1] [i_7])))), (((((/* implicit */_Bool) ((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_12 - 2] [i_6] [i_6] [i_6] [i_6])))))) ? (((((/* implicit */_Bool) (short)19426)) ? (((/* implicit */int) (unsigned short)56965)) : (((/* implicit */int) (short)21690)))) : ((+(((/* implicit */int) (signed char)12))))))));
                                var_25 = min((((((((/* implicit */int) arr_32 [i_12] [i_12 - 1] [i_12] [i_12 + 2] [i_12])) + (2147483647))) >> (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_6]))) : (13849298617545607327ULL))) - (18446744073709551555ULL))))), ((-((~(arr_41 [i_6] [i_7] [i_10] [(_Bool)1] [i_12]))))));
                            }
                        } 
                    } 
                } 
                var_26 += ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) max((var_1), (((/* implicit */unsigned short) arr_25 [i_7]))))))), ((~(arr_41 [i_6] [i_6] [i_6] [i_7] [i_7])))));
            }
        } 
    } 
    var_27 = (+(((/* implicit */int) (_Bool)0)));
}
