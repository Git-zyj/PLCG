/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24048
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */int) var_12))))) ? (var_13) : (((/* implicit */unsigned long long int) (+(var_9))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_18))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)20))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_4))));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_17))));
                    }
                    arr_11 [(unsigned char)1] [i_2] [i_1] [i_0] &= ((unsigned long long int) var_3);
                }
            } 
        } 
        var_23 = ((/* implicit */_Bool) arr_4 [i_0]);
        var_24 *= ((/* implicit */short) ((((/* implicit */int) ((signed char) (short)10567))) < (arr_7 [i_0] [i_0] [i_0])));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        var_25 = ((/* implicit */short) ((((((((/* implicit */int) var_10)) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) (short)11300)) < (((/* implicit */int) var_16))))))) << (((((((/* implicit */int) ((short) min(((short)10560), (arr_14 [i_4]))))) + (13349))) - (22)))));
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) var_6))));
    }
    var_27 = ((/* implicit */unsigned long long int) var_3);
    var_28 -= ((/* implicit */unsigned long long int) ((signed char) (signed char)103));
}
