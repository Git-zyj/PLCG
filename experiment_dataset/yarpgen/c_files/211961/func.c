/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211961
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) (unsigned char)101))))), (max((((/* implicit */long long int) (_Bool)1)), (arr_0 [i_0]))))) > (((/* implicit */long long int) var_6))));
        arr_5 [i_0] &= min((4509068366034910002ULL), (((/* implicit */unsigned long long int) -6766513882859693004LL)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_9 [i_0] = ((/* implicit */long long int) ((signed char) ((var_4) - (arr_2 [i_0]))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 3; i_3 < 8; i_3 += 3) 
                {
                    for (short i_4 = 2; i_4 < 6; i_4 += 2) 
                    {
                        {
                            arr_16 [i_2] [i_2] [i_4 - 1] = (!(((/* implicit */_Bool) ((var_6) << (((((/* implicit */int) arr_8 [i_1] [i_1])) + (116)))))));
                            var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) var_2))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                for (unsigned char i_6 = 1; i_6 < 6; i_6 += 2) 
                {
                    {
                        var_12 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1]))));
                        arr_21 [i_0] [i_1] [i_6] = ((/* implicit */_Bool) var_10);
                    }
                } 
            } 
            arr_22 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)192)) || (((/* implicit */_Bool) (signed char)127))));
            arr_23 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_1])) == (var_1)))) >> (((((/* implicit */int) arr_17 [i_0] [5U] [5U] [i_1])) + (16530)))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 3; i_8 < 9; i_8 += 1) 
            {
                arr_29 [i_8] [i_8] [i_8] [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) max((arr_20 [i_0] [i_0] [i_0] [i_7] [i_0]), (((/* implicit */unsigned short) arr_24 [i_7] [i_8 + 1] [i_8 - 3])))))));
                arr_30 [i_7] [i_8 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(var_8))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)60)) & (((/* implicit */int) (unsigned char)212)))))))) ? (min((((/* implicit */int) var_3)), ((~(((/* implicit */int) (signed char)-127)))))) : (((/* implicit */int) (signed char)120))));
            }
            for (signed char i_9 = 2; i_9 < 7; i_9 += 4) 
            {
                arr_33 [i_9] [i_7] [i_7] [i_0] = ((/* implicit */unsigned int) var_1);
                var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */int) max((((/* implicit */unsigned short) arr_31 [i_0] [i_0])), (arr_20 [i_0] [i_0] [i_0] [i_9] [i_9 - 2])))) + (((/* implicit */int) arr_31 [i_0] [i_0]))))));
            }
            arr_34 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) max((max((arr_27 [i_7]), (arr_6 [i_0] [i_0]))), (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_0)))))))));
        }
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_38 [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) (short)12678))));
            arr_39 [i_0] [i_10] = (~(((((/* implicit */_Bool) (signed char)-124)) ? (6531109721664415478ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 1 */
            for (long long int i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                arr_42 [i_10] [i_10] [i_10] [i_0] = arr_15 [i_11] [i_0];
                arr_43 [i_10] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_0))));
            }
        }
        arr_44 [i_0] = (!((!(((/* implicit */_Bool) (signed char)-87)))));
    }
    var_14 = ((/* implicit */long long int) ((((unsigned long long int) var_0)) ^ (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_3)) | (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_5)))))));
    var_15 = max((((/* implicit */unsigned long long int) var_10)), (var_8));
}
