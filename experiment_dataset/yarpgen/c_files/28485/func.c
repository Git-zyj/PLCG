/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28485
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
    var_19 |= ((/* implicit */long long int) var_9);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((min((((/* implicit */int) var_8)), ((+(((/* implicit */int) var_8)))))) & (((/* implicit */int) ((((/* implicit */int) var_17)) < (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)0))))))));
        var_20 ^= min((((((/* implicit */int) var_10)) * (((/* implicit */int) max(((signed char)88), (((/* implicit */signed char) var_2))))))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_21 |= ((/* implicit */int) var_14);
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                arr_10 [i_0] = ((/* implicit */short) var_14);
                arr_11 [i_0 + 1] [i_0] [i_2 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)18823))))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) var_3))));
                arr_12 [i_0] [i_0] = ((/* implicit */signed char) var_7);
                arr_13 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) var_2));
            }
            for (int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                var_22 = ((/* implicit */long long int) (((+(var_1))) ^ (((/* implicit */unsigned int) max((((/* implicit */int) var_16)), (var_11))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 3; i_4 < 20; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(5865117451356016205LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (var_2)))) : (((var_7) % (((/* implicit */int) (unsigned short)9))))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) (unsigned char)0))))) ? (((var_2) ? (((/* implicit */int) var_6)) : (var_11))) : (((((/* implicit */int) var_4)) * (((/* implicit */int) var_3))))));
                            var_25 -= ((/* implicit */_Bool) var_17);
                        }
                    } 
                } 
                var_26 += ((/* implicit */_Bool) min((((/* implicit */int) var_10)), ((+(min((var_7), (var_11)))))));
                arr_23 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */int) (signed char)49);
            }
            for (int i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                var_27 = ((/* implicit */long long int) min((min((((/* implicit */int) var_3)), (-1))), (((((/* implicit */int) var_18)) / (var_12)))));
                var_28 = ((/* implicit */_Bool) var_12);
            }
        }
        arr_27 [i_0] [i_0] = ((/* implicit */unsigned short) var_0);
        var_29 = ((/* implicit */int) var_8);
    }
}
