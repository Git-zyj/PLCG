/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198296
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
    var_20 = ((/* implicit */unsigned short) (((+(min((var_13), (((/* implicit */int) (signed char)-82)))))) / (((/* implicit */int) (signed char)-73))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((var_18) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((min((var_2), (var_19))), (((/* implicit */signed char) ((arr_1 [i_0] [i_0]) < (((/* implicit */int) var_5))))))))))))));
        var_22 = ((/* implicit */signed char) arr_1 [(signed char)12] [i_0]);
        var_23 = ((/* implicit */unsigned short) var_9);
    }
    var_24 -= ((/* implicit */int) ((((((/* implicit */_Bool) ((var_10) - (var_18)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned long long int) var_9)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14)))));
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        for (int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            {
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) var_16)) - (((/* implicit */int) (signed char)111)))))) ? (((/* implicit */int) (signed char)107)) : (var_17)));
                var_26 = ((/* implicit */unsigned short) var_13);
                var_27 = ((/* implicit */int) ((((/* implicit */int) (signed char)-117)) != (min((var_13), (min((((/* implicit */int) (signed char)81)), (var_17)))))));
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) var_0);
}
