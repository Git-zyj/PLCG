/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244279
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
    var_13 = ((/* implicit */signed char) max((((/* implicit */int) ((short) 16228434605916792895ULL))), (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-30304)) : (((/* implicit */int) (short)13071)))), (var_8)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) var_4);
                arr_6 [i_0] [(unsigned char)4] = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(16982158837174773361ULL))), (arr_3 [i_1])))) ? (((/* implicit */int) ((short) (unsigned short)65535))) : (((/* implicit */int) (short)-3170))));
                var_15 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 12ULL)) ? (((/* implicit */int) (short)-7550)) : (((/* implicit */int) (unsigned short)14)))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 2350311950U)), (16228434605916792895ULL)));
                arr_8 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */unsigned short) (short)13073)), (var_10))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) var_9)), (1056417645U)))))) > (((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) max((2317015524U), (((/* implicit */unsigned int) var_1))))) : (var_12))))))));
}
