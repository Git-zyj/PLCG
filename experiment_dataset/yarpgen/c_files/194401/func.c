/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194401
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(short)4])) ? ((+((+(((/* implicit */int) arr_4 [i_1] [i_0])))))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */short) (-((+((-(8688647257736392040LL)))))));
                                var_15 = ((/* implicit */signed char) arr_2 [i_1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_7), (max((var_7), (var_7)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_6)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))) : ((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_5)))))));
    var_17 += ((/* implicit */short) (+(((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned long long int) (+(1206932893))))))));
    var_18 = ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)255)), (-8688647257736392041LL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned char)52)) : (-815806704))))));
        var_20 = ((/* implicit */signed char) arr_14 [i_5] [i_5] [i_5] [i_5]);
        var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [i_5]))));
        var_22 = ((/* implicit */unsigned long long int) arr_18 [i_5] [10LL]);
    }
    for (long long int i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
    {
        var_23 += ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_8 [i_6])), (((((/* implicit */_Bool) var_5)) ? ((-(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_10 [i_6] [i_6] [i_6] [i_6]))))))));
        arr_22 [i_6] = ((/* implicit */unsigned char) ((((min((((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) var_2)))), (((/* implicit */int) var_0)))) + (2147483647))) << (((var_9) - (1566057270U)))));
    }
}
