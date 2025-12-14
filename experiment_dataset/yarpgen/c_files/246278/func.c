/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246278
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] [(unsigned short)2] = (~(((/* implicit */int) ((_Bool) 14566755494034718828ULL))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (-2147483647 - 1)))));
                                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)125)) ? (arr_6 [i_0] [i_3 - 1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) : (((unsigned int) var_7)));
                                arr_14 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)24576)) * ((+(((/* implicit */int) (unsigned short)4289))))));
                                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) var_12))))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_5 = 1; i_5 < 9; i_5 += 3) 
                    {
                        arr_18 [i_0] [i_0] [i_1] [i_2] [i_2] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) var_10))));
                        var_19 ^= ((/* implicit */unsigned int) (+(((((/* implicit */int) var_9)) + (var_0)))));
                        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13))));
                    }
                    var_21 -= ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_11 [i_0] [i_0]))))))));
                    var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_15)), (arr_3 [i_0] [i_1] [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1630177790U)) ? (((/* implicit */int) (unsigned short)60387)) : (((/* implicit */int) (unsigned short)44539))))) : (((((/* implicit */_Bool) var_0)) ? (arr_6 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)66)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))));
                }
            } 
        } 
    } 
    var_23 -= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_15)))) || ((!(((/* implicit */_Bool) 3467366370U)))))) && (((/* implicit */_Bool) var_0))));
    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) (short)24576))) - (var_13)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) | (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)189))) - (var_8))))) : (((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned char)67)) - (((/* implicit */int) var_11))))))))))));
}
