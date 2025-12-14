/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226802
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
    for (signed char i_0 = 3; i_0 < 6; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_0 - 3] = ((/* implicit */short) ((((((/* implicit */_Bool) 1827406304262704476ULL)) ? (-89147584) : (((/* implicit */int) (short)31314)))) < (((/* implicit */int) (((+(21))) < (((/* implicit */int) ((_Bool) 1335332211U))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 2) 
                {
                    arr_7 [i_0 + 2] [i_2] = ((/* implicit */unsigned char) ((short) var_9));
                    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) var_4))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        arr_11 [i_3 - 1] [i_2] [i_2] [i_0] = ((/* implicit */int) ((signed char) (unsigned short)39084));
                        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 2] [i_2] [0] [i_2] [i_2 - 1])) : (((((/* implicit */_Bool) 11156809753719184179ULL)) ? (0) : (((/* implicit */int) (short)63))))));
                        arr_12 [i_2] [i_2] [i_2] [i_3] = ((var_9) & (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_2])));
                    }
                    var_12 = ((/* implicit */unsigned char) max((((unsigned long long int) (~(((/* implicit */int) var_5))))), ((~(((((/* implicit */_Bool) 7289934319990367437ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-62))) : (15085873043450146282ULL)))))));
                }
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */int) ((signed char) var_6))) : (((/* implicit */int) var_8)))));
    var_14 = ((/* implicit */short) var_2);
    var_15 = ((/* implicit */unsigned int) min((11045130652996337828ULL), (((/* implicit */unsigned long long int) var_4))));
    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)24)) || (((/* implicit */_Bool) var_3))))), (((signed char) var_1)))))));
}
