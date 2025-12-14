/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37175
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
    var_15 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) 1704527307)) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_0 - 3] [i_0 + 1])) : (598179229))));
                var_17 ^= ((/* implicit */_Bool) (((((+(((/* implicit */int) (signed char)-1)))) < (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (signed char)-67))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_3 [i_0] [i_1 - 1] [i_0])), ((signed char)-45))))) : (max((arr_0 [i_0 + 3]), (((/* implicit */long long int) (_Bool)1))))));
                var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -386948615)) ? (max((((/* implicit */int) var_6)), (var_3))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)-24216)), ((unsigned short)32704))))))) & ((((~(arr_1 [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2))))))));
                arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) (signed char)-54)), ((short)3164)))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_1) : (var_5)))) ? (((/* implicit */int) min(((signed char)59), (var_9)))) : (((/* implicit */int) (signed char)-1))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)90))) & (0ULL))) ^ (max((((/* implicit */unsigned long long int) var_7)), (1851791784565280894ULL))))) ^ (((((((/* implicit */_Bool) var_5)) ? (1851791784565280894ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_9))))))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1892157719))))) : ((~(((/* implicit */int) (unsigned char)222)))))) : (((((/* implicit */int) min(((unsigned char)39), (((/* implicit */unsigned char) var_0))))) * (((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */int) var_12))))))));
    var_21 = ((/* implicit */int) var_6);
}
