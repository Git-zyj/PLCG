/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5452
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (_Bool)0))))));
        arr_3 [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2]))) >= (4294967295U)));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (unsigned short)17071))));
                    var_19 &= ((/* implicit */long long int) max(((-(arr_4 [i_2]))), (((/* implicit */unsigned long long int) var_5))));
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) -3255780921348787305LL))));
                    var_21 = ((/* implicit */unsigned long long int) var_14);
                }
            } 
        } 
        var_22 &= ((/* implicit */int) ((((((/* implicit */long long int) ((var_15) % (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) > (var_4))) || (((/* implicit */_Bool) ((max((var_0), (((/* implicit */unsigned long long int) (_Bool)1)))) & (((/* implicit */unsigned long long int) var_14)))))));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_3))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) 2147483639)) : (arr_4 [i_1]))))))));
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 9; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 7; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */short) min(((!(((/* implicit */_Bool) (short)15923)))), ((!(((/* implicit */_Bool) 2147483639))))));
                                arr_24 [i_1] [i_1] [i_7] [i_1] [i_7] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 2147483639)) + (((var_9) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5 + 2] [i_4 + 1] [i_1])))))));
                                var_25 ^= ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (max((2199023255551ULL), (((/* implicit */unsigned long long int) (unsigned char)19))))))), (((((/* implicit */int) (short)32767)) * (((/* implicit */int) ((var_1) < (((/* implicit */unsigned int) ((/* implicit */int) (short)32242))))))))));
                                arr_25 [i_1] [i_1] [i_7] = ((/* implicit */short) (signed char)-32);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max(((-2147483647 - 1)), (((/* implicit */int) arr_18 [i_4] [i_4])))) / (((((/* implicit */_Bool) (short)4096)) ? (var_5) : (((/* implicit */int) arr_18 [i_1] [i_4]))))))) ? (((/* implicit */unsigned long long int) min((arr_15 [i_4 + 1] [i_4 - 1]), (((/* implicit */int) var_13))))) : (max((max((((/* implicit */unsigned long long int) arr_17 [i_1] [i_1] [i_1])), (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-87)) : (2147483614)))))))))));
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_5 + 3] [i_5 + 3] [i_5 + 1])) | (((/* implicit */int) (unsigned char)82))))) - (max((183279050U), (((/* implicit */unsigned int) (_Bool)1))))))));
                }
            } 
        } 
    }
    for (int i_8 = 0; i_8 < 24; i_8 += 1) 
    {
        var_28 = ((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15))))), (max((((/* implicit */unsigned int) var_12)), (arr_26 [i_8] [i_8])))));
        arr_29 [i_8] = ((/* implicit */int) (_Bool)1);
    }
    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
}
