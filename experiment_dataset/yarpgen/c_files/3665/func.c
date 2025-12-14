/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3665
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_12), (var_12)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), ((~(var_6)))))) : (max((14915148439364911695ULL), (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned int) var_8)))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)84))));
        var_16 ^= ((/* implicit */short) arr_2 [i_0]);
        var_17 = ((/* implicit */unsigned int) arr_2 [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                {
                    arr_12 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_3])) ? (((/* implicit */int) arr_6 [i_1] [i_2])) : (((/* implicit */int) arr_6 [i_1] [i_3]))))) ? (((/* implicit */int) min(((unsigned char)147), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 10837612938085100035ULL)))))))) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_2] [i_3]))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_18 = arr_10 [i_4] [i_3] [i_2] [i_1];
                                var_19 = ((/* implicit */unsigned char) (+(132541889U)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) arr_16 [i_3] [i_2] [i_1]);
                    var_21 = ((/* implicit */unsigned char) arr_2 [i_2]);
                    var_22 = ((/* implicit */unsigned int) arr_5 [i_2] [i_3]);
                }
            } 
        } 
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))), (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
    }
    for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6] [i_7] [i_7]))) >= (arr_21 [i_6] [i_7] [i_6])))), (((signed char) 132541873U)))))));
            var_25 ^= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_19 [i_6]))))));
            arr_23 [i_6] = ((/* implicit */_Bool) 7213620477646352750LL);
            arr_24 [i_6] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (-(arr_20 [i_6] [i_6]))))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            for (unsigned int i_9 = 1; i_9 < 20; i_9 += 4) 
            {
                {
                    var_26 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6] [i_8] [i_9])) ? (arr_20 [i_8] [i_6]) : (((/* implicit */unsigned long long int) arr_29 [i_6] [i_8] [i_8] [i_9]))))) ? (((/* implicit */int) min((arr_17 [i_6]), (((/* implicit */short) arr_26 [i_6]))))) : (((/* implicit */int) arr_28 [i_6] [i_8] [i_9]))))));
                    var_27 = ((/* implicit */signed char) (+(((/* implicit */int) (short)26293))));
                }
            } 
        } 
        var_28 = ((/* implicit */signed char) min((var_28), (arr_26 [(unsigned char)10])));
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_26 [i_6])), (4162425420U)))), ((~(arr_21 [i_6] [i_6] [i_6])))))) ? ((+(min((7609131135624451580ULL), (((/* implicit */unsigned long long int) arr_25 [i_6])))))) : (min((arr_21 [i_6] [i_6] [i_6]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 511ULL)))))))));
    }
}
