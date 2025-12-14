/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37487
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_10 [i_0] [i_0] [i_3] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) -5840176473282534752LL)) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_4 [i_4] [i_3] [i_2] [i_1 + 2]))))), (((arr_8 [i_3]) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (min((((arr_8 [i_3]) | (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) (_Bool)1))))));
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (arr_3 [i_1 + 1]) : (arr_8 [i_3])))) ? (((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_0] [i_3] [i_3] [(unsigned short)9])) : ((~(max((5U), (((/* implicit */unsigned int) -1478138264))))))));
                                var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (min((-1301465470), (220788013)))));
                                var_17 -= ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                    var_18 += ((/* implicit */unsigned int) (!(((arr_4 [i_1 - 1] [i_0] [i_1 - 4] [i_2]) && (arr_4 [i_1 - 2] [i_0] [i_2] [i_2])))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_7))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_5 = 2; i_5 < 20; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            arr_15 [i_6 - 1] [i_6] &= ((/* implicit */unsigned short) (short)8181);
            var_20 &= ((/* implicit */_Bool) (unsigned char)191);
            var_21 &= ((/* implicit */unsigned int) arr_12 [i_5]);
        }
        var_22 = ((/* implicit */unsigned short) ((long long int) (~(((/* implicit */int) (_Bool)0)))));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) 
    {
        var_23 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_13 [i_7]))))) ? (((/* implicit */int) arr_12 [i_7])) : (((/* implicit */int) (short)(-32767 - 1)))));
        var_24 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) 0ULL))));
    }
    var_25 = ((/* implicit */signed char) min((((/* implicit */int) ((short) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)170))))), (((((((/* implicit */int) var_13)) % (((/* implicit */int) (unsigned char)67)))) >> (((var_11) - (1428681689U)))))));
}
