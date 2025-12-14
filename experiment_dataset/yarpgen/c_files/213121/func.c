/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213121
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [16U] |= ((/* implicit */unsigned long long int) arr_1 [(unsigned short)8] [i_2]);
                    arr_9 [i_0] [i_0] [12LL] [i_1] &= ((/* implicit */unsigned int) ((((arr_6 [i_0] [i_1]) ? (((/* implicit */unsigned long long int) min((arr_3 [i_0] [14U]), (-3169624574814758651LL)))) : (11709935163753686055ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-9223372036854775807LL)))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34221))))))));
                    var_20 = ((((/* implicit */_Bool) min((max((((/* implicit */short) (unsigned char)252)), ((short)18284))), (((/* implicit */short) ((-2518352477681976236LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)75))))))))) && (((/* implicit */_Bool) ((arr_1 [i_0] [i_0 - 3]) * (((/* implicit */unsigned int) (~(((/* implicit */int) var_14)))))))));
                }
            } 
        } 
    } 
    var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) (unsigned short)56396)) : (((/* implicit */int) (_Bool)1))))))) ? (11709935163753686051ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
    var_22 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) != ((-(var_11)))));
}
