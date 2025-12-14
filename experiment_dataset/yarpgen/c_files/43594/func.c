/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43594
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
    var_20 |= ((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) ((unsigned char) (_Bool)1))))));
    var_21 = ((/* implicit */unsigned int) ((2147483647) >= ((((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */int) var_3)) - (var_13))) : (((/* implicit */int) ((-149792861) == (((/* implicit */int) var_17)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        arr_2 [11U] [11U] = ((/* implicit */signed char) -149792857);
        arr_3 [i_0] [i_0 + 3] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) / (8413015795085032062LL)))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) * (((arr_0 [i_0]) / (((/* implicit */long long int) -149792855))))))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */short) var_5))))) ? (((/* implicit */int) var_18)) : (((((/* implicit */int) (unsigned char)173)) % (149792844)))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_15)) : (-149792844)))) ? (((/* implicit */int) var_7)) : ((+(2147483647)))))));
        var_23 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */long long int) var_12))))))) && ((!((!(((/* implicit */_Bool) (unsigned char)231))))))));
    }
    var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_17))))) ? (min((((/* implicit */int) var_11)), (-149792871))) : (((/* implicit */int) var_3))))), (((var_7) ? (8388607U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_11))))))));
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    var_25 = ((/* implicit */long long int) (short)-1);
                    var_26 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) || ((_Bool)1))) ? (min((-149792844), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 149792844)))))))) ? (max((((/* implicit */unsigned long long int) ((long long int) 8921062901183148128ULL))), ((+(var_2))))) : (((/* implicit */unsigned long long int) (-(var_19))))));
                }
            } 
        } 
    } 
}
