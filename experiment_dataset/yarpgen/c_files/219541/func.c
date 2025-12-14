/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219541
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
    var_12 = ((/* implicit */unsigned short) min(((short)-19913), (((/* implicit */short) (_Bool)1))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) min((max((6337724827872867798ULL), (((/* implicit */unsigned long long int) 441058547)))), (max((max((((/* implicit */unsigned long long int) var_8)), (5393628946754083239ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_6)), ((short)-19913))))))));
        var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (max((1503259951U), (((/* implicit */unsigned int) (unsigned short)1119))))))), (min((15131640595363125267ULL), (((/* implicit */unsigned long long int) -441058547))))));
    }
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_15 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (756667008U)))), (max((((/* implicit */unsigned long long int) min((((/* implicit */signed char) arr_4 [i_1 + 1])), (var_9)))), (max((((/* implicit */unsigned long long int) 756667008U)), (13053115126955468390ULL)))))));
        var_16 = ((/* implicit */long long int) min((max((((/* implicit */unsigned short) max((var_7), (arr_5 [i_1] [i_1])))), (max((((/* implicit */unsigned short) arr_2 [i_1])), ((unsigned short)6769))))), (((/* implicit */unsigned short) max((((/* implicit */short) max((var_4), (((/* implicit */unsigned char) arr_5 [i_1 - 1] [i_1]))))), (min((arr_2 [i_1]), (((/* implicit */short) arr_3 [13U])))))))));
        var_17 = ((/* implicit */unsigned int) min((-1092433559), (((/* implicit */int) (_Bool)0))));
        var_18 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) max((arr_3 [0ULL]), (((/* implicit */signed char) var_6))))), (min((var_11), (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) max((max((-1957404283), (((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) max((var_1), (((/* implicit */signed char) var_6))))))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (unsigned short)12040))));
            var_20 = ((/* implicit */signed char) (unsigned char)190);
            arr_12 [i_2] = ((/* implicit */unsigned long long int) (unsigned short)17885);
        }
        for (unsigned int i_4 = 1; i_4 < 19; i_4 += 1) 
        {
            arr_16 [12ULL] [i_2] |= ((/* implicit */long long int) (unsigned short)3192);
            var_21 = ((/* implicit */unsigned long long int) -441058548);
        }
        arr_17 [i_2] [i_2] = ((/* implicit */unsigned long long int) (signed char)-21);
        var_22 ^= 3538300267U;
    }
    var_23 = ((/* implicit */unsigned long long int) max((1097040825), (((/* implicit */int) (short)30219))));
}
