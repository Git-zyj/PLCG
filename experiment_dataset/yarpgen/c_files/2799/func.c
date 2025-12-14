/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2799
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
    var_20 = ((/* implicit */long long int) var_19);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */int) 11077557473290307529ULL);
                    arr_9 [i_0] [i_1] = min((arr_8 [i_2] [i_2] [i_2] [i_1]), (((/* implicit */int) (!(((/* implicit */_Bool) ((var_7) << (((-13LL) + (22LL))))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            {
                var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_7 [i_3] [i_4] [i_4] [i_3]))) ? (((/* implicit */int) (_Bool)1)) : (var_14)));
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 17; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_24 += ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                                arr_21 [i_7] [i_4] [0] [i_5] [i_7] = var_1;
                            }
                        } 
                    } 
                } 
                var_25 -= ((/* implicit */signed char) ((((unsigned long long int) 4294967295U)) <= (18446744073709551604ULL)));
                arr_22 [i_3] [i_4] [i_4] = ((/* implicit */short) min(((~(max((((/* implicit */int) var_9)), (var_1))))), (((((/* implicit */int) (signed char)-14)) + (((/* implicit */int) max(((unsigned char)152), (((/* implicit */unsigned char) (_Bool)1)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
    {
        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            {
                var_26 = ((((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))))) ? (((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))) & (-92826296))) : ((~(((((/* implicit */_Bool) var_17)) ? (727987142) : (((/* implicit */int) (_Bool)1)))))));
                arr_28 [i_8] = ((/* implicit */unsigned short) arr_8 [i_8] [i_9] [i_8] [i_8]);
            }
        } 
    } 
}
