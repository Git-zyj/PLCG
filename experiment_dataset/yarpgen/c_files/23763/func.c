/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23763
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
    var_17 |= ((/* implicit */long long int) -1002071504);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) 786432U)))));
                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~((~(2760426458937819498ULL))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */long long int) 4294180861U)) & (18014398509481983LL)));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned char)166)))))))));
        arr_10 [i_2] = ((/* implicit */int) ((unsigned short) 4294180861U));
        arr_11 [i_2] = ((/* implicit */short) 4294180849U);
    }
    /* LoopSeq 1 */
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                {
                    arr_21 [i_3] [i_4] [(signed char)14] = (((!(((/* implicit */_Bool) 15686317614771732134ULL)))) && (((/* implicit */_Bool) ((long long int) 2760426458937819481ULL))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        for (signed char i_7 = 2; i_7 < 14; i_7 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (!(((((/* implicit */_Bool) 11093856739470400447ULL)) && (((/* implicit */_Bool) (unsigned char)84)))))))));
                                var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24394)))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((int) (~(((/* implicit */int) (unsigned short)31355))))))));
                }
            } 
        } 
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
        var_26 = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) 1937625809U)) ^ (2760426458937819498ULL)))));
    }
}
