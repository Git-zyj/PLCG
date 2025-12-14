/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3889
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] &= 18446744073709551615ULL;
        arr_4 [i_0] = ((/* implicit */short) max((((_Bool) (-(arr_2 [i_0])))), (var_8)));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        var_14 = ((/* implicit */long long int) arr_1 [i_1 + 2]);
        var_15 = ((/* implicit */signed char) var_10);
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned short) arr_8 [i_1] [i_1] [i_1 + 2]);
            arr_10 [i_2] [i_2] = arr_6 [i_1 - 1];
            var_17 = ((/* implicit */int) ((unsigned int) arr_9 [i_1 + 2]));
        }
        arr_11 [i_1 - 1] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-72))));
    }
    var_18 &= ((/* implicit */unsigned short) (-((-(max((3247936983U), (((/* implicit */unsigned int) (unsigned short)22924))))))));
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned int i_5 = 1; i_5 < 23; i_5 += 1) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (4097756888U)))), (((unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_19 [i_5])) > (((/* implicit */int) arr_17 [i_5] [i_3] [i_3]))))) > (((int) arr_13 [i_3])))))));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 24; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            {
                                var_20 = arr_15 [i_3];
                                arr_25 [i_5] [i_4] = (-(var_1));
                                var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_5 + 2] [i_5 + 2])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 24; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 3; i_9 < 23; i_9 += 4) 
                        {
                            {
                                var_22 -= ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                                var_23 = max((((/* implicit */int) (_Bool)1)), (max((((/* implicit */int) var_12)), ((~(((/* implicit */int) arr_28 [i_3] [21LL] [i_5] [i_3])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
