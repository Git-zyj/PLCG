/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243071
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
    var_16 *= ((/* implicit */unsigned char) (~(((/* implicit */int) var_4))));
    var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)0)) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((/* implicit */int) var_14)) : ((-(((/* implicit */int) (short)-26086)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_4 [i_0] = (signed char)58;
            arr_5 [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */short) (+(((/* implicit */int) ((short) (signed char)15)))));
        }
        for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) ((int) var_8));
            arr_10 [i_0] [i_2] = ((/* implicit */short) var_10);
            arr_11 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)56)) ? (min(((~(((/* implicit */int) (short)-17259)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)32747)) : (((/* implicit */int) var_13)))))) : (((/* implicit */int) ((short) var_6)))));
        }
        for (signed char i_3 = 4; i_3 < 23; i_3 += 2) 
        {
            var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-32))))) ? (max((var_8), (0))) : ((+(((/* implicit */int) (signed char)-8))))));
            var_19 = ((/* implicit */signed char) (short)-23674);
            var_20 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (unsigned char)255)))));
            var_21 = ((/* implicit */unsigned char) (signed char)58);
        }
        var_22 ^= ((/* implicit */short) (signed char)-59);
    }
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)26905)) : (((/* implicit */int) (short)32767))));
}
