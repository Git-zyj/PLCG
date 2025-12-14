/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20611
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (-(((/* implicit */int) var_1)))))));
                arr_4 [i_0] [i_1] = (!(((/* implicit */_Bool) (((+(((/* implicit */int) arr_1 [i_0] [i_0])))) - (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_0 [i_0]))))))));
                var_15 = ((/* implicit */short) max((((min(((_Bool)0), ((_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) arr_2 [i_0] [i_1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (min((-13), (((/* implicit */int) (_Bool)0))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 9; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_1]);
                            arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)0)), (18446744073709551615ULL)));
                            var_17 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_6 [i_0])))), (((((/* implicit */_Bool) (((_Bool)1) ? (arr_5 [i_3] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))) : (var_11)))));
                            arr_11 [i_0] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-32))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) (((~(((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_1 [i_0] [i_0])))))) + (max(((-(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (signed char)-22)) - (((/* implicit */int) var_6))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (-(((unsigned long long int) (+(var_2))))));
    var_20 = var_8;
    var_21 &= ((/* implicit */signed char) (((((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (var_3)))))) ^ ((-(5)))));
    var_22 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) / (((/* implicit */unsigned long long int) (+(var_13)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
}
