/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52545
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
    var_17 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)127))))) : (min((var_2), (((/* implicit */unsigned long long int) var_10))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) var_11);
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-100)), (16524249485219167728ULL)))) && ((_Bool)1)));
                    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((((-1744532776) + (2147483647))) >> (((-2097152) + (2097179))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (~(((/* implicit */int) (!(var_9)))))))));
                            var_22 = ((/* implicit */unsigned short) (((!(arr_2 [i_0]))) || (((/* implicit */_Bool) 2097133))));
                            var_23 = ((/* implicit */_Bool) (~((~((-2147483647 - 1))))));
                        }
                        var_24 = ((/* implicit */signed char) arr_9 [i_0] [i_1]);
                        arr_12 [i_2] [i_1] [i_1] [i_1] = var_7;
                    }
                }
            } 
        } 
        var_25 &= ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 - 2] [i_0 - 1])) ? (var_8) : (((/* implicit */int) arr_1 [i_0]))))))));
    }
    var_26 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_15)) : (127)))) ? (((((/* implicit */int) var_9)) - (((/* implicit */int) var_9)))) : (min((((/* implicit */int) (_Bool)1)), (var_10))))))));
    var_27 *= ((/* implicit */unsigned long long int) min((var_9), (((_Bool) (+(((/* implicit */int) var_4)))))));
}
