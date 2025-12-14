/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4622
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
    var_19 += ((/* implicit */signed char) max((var_8), (((((-96151453) + (2147483647))) >> (((((long long int) -96151428)) + (96151433LL)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_20 = var_17;
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_21 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) max((96151452), (1337521637)))) >= (arr_3 [i_1 - 2] [i_0 - 1])));
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (+(arr_1 [i_3] [i_1]))))));
                        var_23 = ((/* implicit */signed char) var_15);
                    }
                    var_24 = ((/* implicit */unsigned long long int) 68085134);
                    var_25 = ((/* implicit */unsigned long long int) min((arr_5 [i_1]), ((!(((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (_Bool)1))))))));
                    var_26 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 246290604621824ULL)) ? (arr_7 [i_0 + 2] [i_1] [(signed char)8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))))) || (((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (1099343826)))))) ? ((((-(var_15))) - (min((arr_9 [i_2] [i_2] [i_2] [(_Bool)1] [(_Bool)1]), (((/* implicit */unsigned long long int) arr_8 [(unsigned char)11])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))));
                }
            } 
        } 
    } 
    var_27 |= ((/* implicit */int) (signed char)1);
    var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((var_2), (((/* implicit */signed char) (_Bool)0))))) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483637)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)203))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_4)) << (((((/* implicit */int) var_6)) - (100)))))) >= (min((var_9), (var_9)))))))));
}
