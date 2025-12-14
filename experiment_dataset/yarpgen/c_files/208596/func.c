/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208596
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((short) (short)-7063));
        var_20 = ((/* implicit */unsigned int) var_16);
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7063)) ? (2245231923386117064ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [13] [i_0])))))) ? (((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)203)))) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15)))))))) : ((~(min((((/* implicit */long long int) arr_3 [i_0] [i_0])), (arr_2 [i_0])))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 3) 
    {
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                {
                    arr_13 [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                    var_22 = ((/* implicit */unsigned short) (unsigned char)210);
                    arr_14 [i_1 - 1] [i_1 - 1] [i_2] [i_1] = ((/* implicit */signed char) min(((~(min((((/* implicit */unsigned long long int) arr_12 [i_1] [i_2] [i_3])), (var_16))))), (((/* implicit */unsigned long long int) (short)-17684))));
                }
            } 
        } 
    } 
    var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((_Bool) var_7))) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) (short)-10)) : (((/* implicit */int) min(((unsigned short)65517), (((/* implicit */unsigned short) (_Bool)1))))));
}
