/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25205
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
    var_12 = ((/* implicit */short) var_10);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned short) var_0);
            arr_6 [i_0 + 2] = ((/* implicit */unsigned short) var_11);
            arr_7 [(short)7] [(signed char)1] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-4375))));
            var_14 = ((/* implicit */unsigned short) (!((_Bool)1)));
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                var_15 = ((/* implicit */unsigned int) -304012655);
                var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)127)) || ((_Bool)1)));
                var_17 ^= ((/* implicit */int) (!(((/* implicit */_Bool) -1))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                arr_14 [1ULL] [i_3] = ((/* implicit */signed char) (~(4385321215171045535LL)));
                var_18 = ((/* implicit */long long int) 1584424960);
                arr_15 [i_3] [i_1] [i_0 + 2] = (((_Bool)1) ? (((((/* implicit */_Bool) -1751392046)) ? (3263869906568431776LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)10)))))))) : (((/* implicit */long long int) (+(var_7)))));
            }
        }
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
        {
            var_19 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)103))));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? ((~(((/* implicit */int) (unsigned char)125)))) : (((/* implicit */int) (signed char)10))));
        }
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)25381)) ? (((/* implicit */int) (signed char)0)) : (1408104391)));
        var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (2305707023819604367LL) : (max((var_10), (((/* implicit */long long int) (unsigned short)8669))))))));
    }
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) max((((/* implicit */int) (_Bool)1)), (var_7))))));
}
