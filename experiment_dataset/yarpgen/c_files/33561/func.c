/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33561
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
    for (int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */unsigned long long int) var_8)) == (((((/* implicit */_Bool) -663775225)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))), (arr_7 [(short)3])));
                    var_12 = ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_0] [i_0])), ((unsigned short)33248)))) << (((max((((/* implicit */int) arr_4 [i_1] [i_0])), (58720256))) - (58720250)))))) ? (((((((/* implicit */_Bool) (unsigned short)32277)) || ((_Bool)0))) ? (((((/* implicit */_Bool) (short)-1717)) ? (var_0) : (((/* implicit */int) (short)26706)))) : (((((/* implicit */_Bool) 105951121)) ? (((/* implicit */int) arr_7 [(short)13])) : (((/* implicit */int) (unsigned char)147)))))) : (((/* implicit */int) (unsigned short)33238)));
                    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) max((((/* implicit */int) arr_8 [i_0] [i_1])), (((((/* implicit */_Bool) (+(-663775248)))) ? (((/* implicit */int) var_10)) : (((int) (short)-1)))))))));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (511U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) / (((/* implicit */unsigned int) max((595539142), (-663775225))))))) ? (min((((/* implicit */unsigned int) (!((_Bool)1)))), (max((((/* implicit */unsigned int) -1356181109)), (0U))))) : (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)214))))), (((int) (unsigned char)255)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)149)))))) ? (((int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1901894030)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)145))))))))));
    /* LoopNest 2 */
    for (short i_3 = 2; i_3 < 17; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            {
                arr_15 [i_3] = ((/* implicit */_Bool) min((((/* implicit */int) min((arr_3 [i_4] [i_4]), (var_5)))), (((((/* implicit */int) var_3)) << (((((/* implicit */int) (unsigned short)53596)) - (53572)))))));
                arr_16 [(unsigned short)1] [(short)12] [i_3 + 1] = ((/* implicit */int) ((_Bool) max((((((/* implicit */int) var_1)) - (((/* implicit */int) (short)-22659)))), (((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_4])))))));
            }
        } 
    } 
    var_16 *= ((/* implicit */unsigned char) (short)28);
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-48))))) >= (((/* implicit */int) (signed char)(-127 - 1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2))))));
}
