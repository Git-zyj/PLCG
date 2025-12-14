/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48033
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-12224)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_0] [i_0]), (var_1))))) > (((((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */short) arr_0 [i_0])))))) + (var_3)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) min(((short)-5321), (var_5)))), (min((((/* implicit */unsigned short) (unsigned char)231)), ((unsigned short)52843))))))));
                                var_13 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) var_1)), (arr_14 [i_1 + 1] [i_1]))), (((/* implicit */long long int) (+(arr_9 [i_0] [i_1 + 1] [i_2] [i_3]))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned int) min((arr_9 [i_1 + 1] [i_1 + 1] [i_2] [i_2]), (1602197247)))), (2703615758U)));
                    var_15 = ((/* implicit */unsigned char) arr_3 [(signed char)5] [i_1]);
                }
            } 
        } 
    }
    for (unsigned char i_5 = 2; i_5 < 18; i_5 += 3) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)32752), (((/* implicit */short) arr_15 [i_5 - 2])))))) + (min((((/* implicit */unsigned long long int) arr_15 [i_5])), (var_7)))))) ? (((/* implicit */int) arr_16 [i_5])) : ((+(2147483647)))));
        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 68719411200LL))));
        arr_17 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_15 [i_5 - 1]), (arr_15 [i_5 + 1])))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((_Bool) arr_15 [i_5 - 2])))));
    }
}
