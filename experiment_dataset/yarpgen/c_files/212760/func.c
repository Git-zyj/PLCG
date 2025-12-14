/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212760
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-3522)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) : (((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_2])) ? (((/* implicit */int) (short)-3522)) : (((/* implicit */int) (signed char)-64))))));
                    var_21 = ((/* implicit */signed char) var_0);
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_2 + 1] [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_5 [i_0] [i_2 + 2] [i_0]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            var_23 = ((((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 2])) % (((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 1])));
            var_24 = ((/* implicit */_Bool) (+(arr_8 [i_0] [i_0 - 1] [i_0 + 1])));
            var_25 = ((/* implicit */_Bool) var_6);
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0] [i_3])) < (((((/* implicit */int) var_15)) - (((/* implicit */int) var_4))))));
        }
        var_27 += ((((/* implicit */_Bool) var_5)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 2] [i_0 - 2]))));
    }
    var_28 = ((/* implicit */unsigned long long int) var_16);
    var_29 += ((/* implicit */long long int) (+((-(var_9)))));
    /* LoopSeq 1 */
    for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        var_30 -= ((/* implicit */signed char) ((unsigned short) (unsigned short)40265));
        var_31 = ((/* implicit */long long int) ((((/* implicit */int) (short)-3522)) < (((/* implicit */int) (short)3504))));
        var_32 = ((/* implicit */long long int) max((min((((/* implicit */signed char) arr_12 [i_4] [(unsigned char)9])), (arr_0 [i_4]))), (var_15)));
        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) min((131068U), (((/* implicit */unsigned int) (unsigned short)4095))))) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) ((short) (unsigned short)40267)))));
    }
}
