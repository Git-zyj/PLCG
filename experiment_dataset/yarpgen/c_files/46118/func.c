/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46118
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
    for (short i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [(unsigned char)8] [i_2] [i_0] = ((/* implicit */unsigned long long int) arr_9 [i_1] [(signed char)7] [i_1]);
                    var_17 = ((/* implicit */unsigned int) (signed char)124);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0 + 2] [i_1] [i_0] [(unsigned char)1] [i_4 - 2] = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_11 [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 2] [i_4 + 2])))));
                                var_18 = ((/* implicit */short) ((_Bool) (~(min((161783043), (((/* implicit */int) (_Bool)1)))))));
                                var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0]))));
                                var_20 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) max((var_16), (arr_7 [i_1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 161783051))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)118))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (min((var_7), (((/* implicit */long long int) var_16))))))));
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 20; i_5 += 3) 
    {
        for (int i_6 = 2; i_6 < 20; i_6 += 3) 
        {
            {
                arr_22 [i_5] [i_5] = ((/* implicit */signed char) arr_18 [14U]);
                arr_23 [i_6] [i_5] [i_5 + 1] = ((/* implicit */_Bool) ((signed char) (unsigned short)15944));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 10; i_7 += 3) 
    {
        for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 10; i_9 += 3) 
            {
                {
                    arr_33 [i_7] [i_8] [(unsigned char)7] = ((/* implicit */_Bool) (+((+(arr_14 [i_7] [i_7] [i_8] [(unsigned char)6] [i_9])))));
                    var_22 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_8])) ? (arr_31 [i_7] [6] [(unsigned short)9] [i_8]) : (max((((/* implicit */unsigned int) (unsigned short)41988)), (var_5)))))), (((((((/* implicit */_Bool) 2147483647)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) / (((/* implicit */long long int) min((var_1), (((/* implicit */unsigned int) (unsigned short)20957)))))))));
                    var_23 = ((/* implicit */unsigned long long int) arr_29 [i_9] [i_9] [i_9] [i_9]);
                    var_24 = arr_25 [i_7] [i_7];
                    /* LoopNest 2 */
                    for (short i_10 = 3; i_10 < 8; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            {
                                arr_39 [i_7] [i_7] [i_7] [(unsigned char)1] [i_7] = ((/* implicit */unsigned int) max((arr_5 [i_11]), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (17448586934640790981ULL)))));
                                var_25 = ((((/* implicit */int) ((signed char) (+(412421903U))))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) ^ ((~(4793986805430928309ULL))))) - (13652757268278651479ULL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_12 = 0; i_12 < 19; i_12 += 3) 
    {
        var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)62361))))));
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) min(((~((~(4294967295U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) var_14)))) : (((/* implicit */int) max(((unsigned short)4759), (((/* implicit */unsigned short) (signed char)127)))))))))))));
    }
    for (int i_13 = 1; i_13 < 18; i_13 += 4) 
    {
        var_28 = ((/* implicit */signed char) arr_17 [8U]);
        arr_45 [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1684076020U)) ? (((/* implicit */int) var_0)) : ((+(((((/* implicit */int) arr_20 [i_13])) - (((/* implicit */int) (signed char)-93))))))));
    }
}
