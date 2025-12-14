/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214745
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) max((9216550237790907160LL), (((/* implicit */long long int) max((((/* implicit */short) ((var_4) >= (((/* implicit */unsigned int) -310381809))))), (max((arr_0 [i_2 + 1]), (arr_0 [(_Bool)1])))))))))));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_10))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_6))))));
                        var_16 = (~(((/* implicit */int) arr_7 [6LL] [6LL] [i_2 - 1] [i_2 + 1] [i_2 + 1])));
                    }
                    /* LoopSeq 3 */
                    for (int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        var_17 = ((/* implicit */short) (-(arr_6 [i_0] [i_0] [i_0] [i_0])));
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) 12168038560456031328ULL))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((((/* implicit */int) var_9)) % (arr_10 [i_0] [i_0] [i_0])))));
                        var_20 = ((/* implicit */signed char) var_5);
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) 2723610773U)) / (max((((-7856590634784389176LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60308))))), (((/* implicit */long long int) arr_4 [i_0] [i_6]))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) var_8)) : ((-(((/* implicit */int) var_2))))));
                            var_22 = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_18 [i_0] [i_1] [i_0] [i_0] [(_Bool)1] [(_Bool)1]))))));
                            var_23 = ((/* implicit */unsigned long long int) ((arr_2 [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_1] [i_7]))))))));
                            arr_21 [i_0] [i_0] [(unsigned short)4] [i_6] [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_6] [i_6] [i_7]))));
                            var_24 = ((/* implicit */unsigned long long int) arr_0 [i_1]);
                        }
                        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            var_25 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) max((var_1), (var_7))))))), (((((arr_17 [i_0] [i_1] [i_0] [i_1] [i_0]) <= (((/* implicit */int) (signed char)96)))) ? (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_7))))) : ((-(((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_2 + 2] [i_8]))))))));
                            var_26 = ((/* implicit */signed char) (~(arr_2 [i_0])));
                            var_27 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)(-127 - 1)))));
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) == (var_4))))) + (max((((/* implicit */unsigned long long int) 2044U)), (5815862851203612867ULL))))))))));
                        }
                        for (signed char i_9 = 1; i_9 < 16; i_9 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_3))))), ((+(((/* implicit */int) var_7))))))));
                            var_30 = ((/* implicit */signed char) 15LL);
                            arr_27 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_0] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) max((var_0), (var_4))))))));
                        }
                        for (long long int i_10 = 0; i_10 < 18; i_10 += 3) 
                        {
                            var_31 = ((/* implicit */signed char) max((1227942148U), (4294965252U)));
                            var_32 = max((((/* implicit */long long int) 2044U)), (-4LL));
                            var_33 = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) var_1)), (var_11)))));
                            var_34 = ((/* implicit */short) arr_29 [4LL] [i_1] [i_2 - 2] [i_6] [i_10]);
                        }
                    }
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */short) var_6);
    var_36 = ((/* implicit */unsigned short) ((var_4) << (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (4294965252U))) - (4294965222U)))));
}
