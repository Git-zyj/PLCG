/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45569
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? ((((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) var_8)))))) : ((-(((/* implicit */int) (signed char)32)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_10 [i_2] = ((var_7) < (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (signed char)-50)))))));
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((short) var_12))), (var_12))))));
                    var_18 = ((/* implicit */unsigned int) var_15);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        var_19 = ((/* implicit */signed char) var_6);
        arr_13 [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-39)) / (-73749358)));
        arr_14 [i_3] [9U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) arr_6 [i_3]))));
    }
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_10))));
}
