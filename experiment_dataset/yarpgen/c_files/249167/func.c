/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249167
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
    var_20 &= ((/* implicit */unsigned long long int) ((long long int) ((long long int) ((long long int) var_4))));
    var_21 = ((/* implicit */unsigned int) ((signed char) ((int) ((unsigned short) 3930183516U))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_22 *= ((/* implicit */short) ((unsigned char) ((long long int) ((long long int) (unsigned char)79))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) ((_Bool) ((signed char) arr_2 [i_0]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_3 = 1; i_3 < 9; i_3 += 3) 
        {
            arr_13 [i_3] = ((/* implicit */unsigned int) ((unsigned short) ((signed char) arr_9 [i_3] [i_3])));
            /* LoopSeq 3 */
            for (signed char i_4 = 4; i_4 < 9; i_4 += 1) /* same iter space */
            {
                arr_16 [(signed char)2] [(signed char)2] [i_3] = ((/* implicit */unsigned char) ((signed char) ((unsigned int) 364783788U)));
                arr_17 [i_3] [i_3] = ((signed char) 364783788U);
            }
            for (signed char i_5 = 4; i_5 < 9; i_5 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((signed char) ((long long int) 6972843251674492398ULL))))));
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((unsigned short) ((short) -4392653171352320311LL))))));
                arr_22 [i_3] [i_3 + 1] [i_2] = ((/* implicit */unsigned int) ((signed char) ((long long int) 12474797622907406082ULL)));
            }
            for (signed char i_6 = 4; i_6 < 9; i_6 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((long long int) 3930183516U)))));
                arr_25 [i_2] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) ((int) ((_Bool) arr_18 [i_2] [(signed char)9] [i_6] [i_3])));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((unsigned int) ((signed char) arr_23 [i_8] [i_3] [i_3] [10ULL]))))));
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((short) ((_Bool) -6112029315493779094LL))))));
                            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) var_7))))));
                        }
                    } 
                } 
            }
        }
        var_29 = ((/* implicit */signed char) ((unsigned int) ((unsigned char) 916441918U)));
    }
    var_30 = ((/* implicit */short) ((unsigned int) ((unsigned char) ((unsigned char) var_17))));
}
