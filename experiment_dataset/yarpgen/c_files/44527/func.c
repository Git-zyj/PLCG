/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44527
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
    for (long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        var_14 *= ((/* implicit */unsigned char) min((1366770048), (-689061345)));
        var_15 *= ((/* implicit */short) (+(min((((arr_0 [i_0] [i_0]) ^ (-4125221394084731239LL))), (((/* implicit */long long int) var_12))))));
    }
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((signed char) (unsigned short)65465))) ? (var_2) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)65472)), (-757351126)))))) >> (((var_10) + (6592951596499898675LL))))))));
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        for (short i_2 = 3; i_2 < 14; i_2 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_3 = 2; i_3 < 16; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        {
                            arr_14 [i_1] [i_2] [i_2 - 2] [i_3] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39946)) ? (-10LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)57))))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_7 [i_1] [i_3] [i_4])))))) : (max((((((/* implicit */_Bool) -6135448419931713690LL)) ? (9007199254740991LL) : (((/* implicit */long long int) arr_2 [i_2])))), (((/* implicit */long long int) (_Bool)1))))));
                            arr_15 [i_4] [i_3 + 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_2 [i_2]);
                        }
                    } 
                } 
                var_17 *= ((/* implicit */signed char) (_Bool)1);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_2);
}
