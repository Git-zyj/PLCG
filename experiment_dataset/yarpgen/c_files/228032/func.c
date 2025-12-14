/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228032
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
    var_20 = ((/* implicit */signed char) ((short) var_5));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_21 = max((((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-121))) : (4294967275U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) arr_0 [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_4] [i_3] [i_4] [i_4] [i_1] = ((/* implicit */unsigned short) ((_Bool) 0U));
                                arr_15 [i_0] = ((/* implicit */short) min((max((((((/* implicit */int) arr_1 [i_4])) & (((/* implicit */int) var_9)))), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((arr_1 [i_0 + 1]) && (((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) var_17))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        for (unsigned short i_6 = 2; i_6 < 21; i_6 += 3) 
        {
            for (long long int i_7 = 2; i_7 < 20; i_7 += 4) 
            {
                {
                    arr_24 [i_5] [i_5] [i_6] [i_7] = ((/* implicit */long long int) arr_18 [i_5]);
                    arr_25 [i_5] [i_6] [i_6] [i_7 - 2] = ((/* implicit */short) ((_Bool) min((-6163093798107322612LL), (6163093798107322611LL))));
                }
            } 
        } 
    } 
    var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) var_18))))), (-6163093798107322612LL)))) ? (((/* implicit */int) ((short) ((short) 18446744073709551615ULL)))) : (((/* implicit */int) var_10))));
}
