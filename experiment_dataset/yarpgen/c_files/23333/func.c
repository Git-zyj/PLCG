/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23333
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_10 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)124))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) -8716237688253366212LL);
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (unsigned short i_3 = 2; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_0] [i_0] [i_3 + 1])) ? (arr_11 [i_3 - 1] [i_1] [i_0] [i_1] [i_0 + 2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (arr_16 [i_0 + 1] [i_1] [i_0] [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 1] [i_0] [i_0] [i_0])))));
                            var_13 = ((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_0] [i_3 + 3]);
                            var_14 = ((/* implicit */unsigned int) arr_4 [i_3 + 3]);
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        {
                            arr_25 [i_0] [i_1] [i_5] [i_6] [i_0] = ((/* implicit */unsigned int) (-(arr_18 [i_7] [i_0] [i_5])));
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_0 - 1] [i_0] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_18 [i_0 + 1] [i_0] [i_0 + 1])));
                            var_16 = ((/* implicit */signed char) var_4);
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) ((var_4) < (((/* implicit */unsigned long long int) var_7)))))));
        }
        for (int i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            var_18 = ((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_8]);
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (-(var_2)))) : (arr_19 [i_0])));
            var_20 += ((/* implicit */unsigned int) ((int) arr_27 [i_0 + 1] [i_0]));
        }
        var_21 = ((/* implicit */int) arr_1 [i_0]);
    }
    /* LoopSeq 1 */
    for (int i_9 = 0; i_9 < 17; i_9 += 2) 
    {
        arr_32 [i_9] = ((/* implicit */unsigned char) arr_31 [i_9]);
        var_22 = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned int) arr_28 [i_9] [i_9])), (3677090374U)))));
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            for (signed char i_11 = 0; i_11 < 17; i_11 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) arr_31 [i_10])))) ? (var_1) : (((/* implicit */unsigned int) arr_35 [i_10] [i_11])))) - (var_8))))));
                    var_24 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_9] [i_10]))) + (var_7)))) ? (((((/* implicit */_Bool) arr_37 [i_9] [i_10])) ? (((/* implicit */int) arr_37 [i_11] [i_9])) : (((/* implicit */int) arr_37 [i_10] [i_10])))) : ((-(((/* implicit */int) var_5))))));
                    var_25 = ((/* implicit */signed char) arr_33 [i_10]);
                    var_26 = ((/* implicit */unsigned char) arr_33 [i_9]);
                }
            } 
        } 
        arr_38 [i_9] [i_9] = ((/* implicit */signed char) (((+(max((var_4), (((/* implicit */unsigned long long int) var_1)))))) << (((min((min((((/* implicit */unsigned long long int) arr_37 [i_9] [i_9])), (var_4))), (arr_29 [i_9]))) - (85ULL)))));
    }
    var_27 = ((/* implicit */unsigned long long int) var_3);
}
