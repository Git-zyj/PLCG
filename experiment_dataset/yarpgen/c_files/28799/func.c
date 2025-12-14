/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28799
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
    for (int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) < (-220921958)));
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) var_9);
                    /* LoopSeq 2 */
                    for (int i_3 = 2; i_3 < 8; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */long long int) arr_0 [i_0]);
                        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) (-((-(arr_11 [i_0] [i_1] [i_1] [i_1])))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)94))))) : (max((((/* implicit */unsigned int) ((_Bool) arr_9 [i_3] [i_2] [i_2] [i_1] [i_0] [i_0]))), (((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (((/* implicit */unsigned int) var_2)) : (var_8))))))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_2)) ? ((~(var_8))) : (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)118)), (-220921958)))))), (((/* implicit */unsigned int) ((unsigned short) (unsigned short)41551))))))));
                        var_16 &= ((/* implicit */unsigned int) var_7);
                    }
                }
            } 
        } 
    } 
    var_17 = var_11;
    var_18 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_8)), ((+(((13191614506809531248ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
    /* LoopNest 3 */
    for (unsigned int i_5 = 1; i_5 < 10; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 2) 
        {
            for (signed char i_7 = 2; i_7 < 9; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        for (long long int i_9 = 2; i_9 < 10; i_9 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) arr_22 [i_5 + 1] [i_6 + 1] [i_6 + 1] [i_9 - 2]);
                                arr_26 [i_7] [i_7] [i_7] [6ULL] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (arr_20 [i_5 + 1] [i_6 + 2]) : (arr_20 [i_7 + 1] [i_8]))));
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)82)) | (((/* implicit */int) (unsigned short)33409))))) / (max((((/* implicit */unsigned long long int) var_5)), (arr_20 [i_5 - 1] [i_5])))))));
                    var_21 = ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) var_7)), (arr_22 [i_7 + 1] [i_6 - 1] [i_6 + 2] [i_5 - 1])))));
                    arr_27 [6U] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_2);
                    arr_28 [(_Bool)0] [i_6] = ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) : ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_8))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 2) 
        {
            for (int i_12 = 0; i_12 < 20; i_12 += 1) 
            {
                {
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) var_10)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_11]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_11))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (arr_31 [i_11]))))))))));
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) max((((/* implicit */unsigned long long int) (~(arr_33 [i_10] [i_12])))), (arr_31 [i_10]))))));
                }
            } 
        } 
    } 
}
