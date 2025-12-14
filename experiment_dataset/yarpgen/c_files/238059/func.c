/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238059
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) ((var_4) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned short i_3 = 3; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) min((((unsigned int) 3454212692U)), (((/* implicit */unsigned int) (signed char)-27))));
                                var_16 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_4])) ? ((-(((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [0ULL])))) : (((/* implicit */int) var_2))));
                                arr_13 [i_4 + 1] [i_4] [i_3] [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((arr_2 [i_4]) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_11 [i_0 - 3] [i_3 - 3] [i_2] [i_4 - 2] [i_4 - 2] [i_2 + 1])))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) var_3);
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (unsigned char i_7 = 3; i_7 < 8; i_7 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((((min((var_6), (((/* implicit */unsigned int) var_8)))) != (((/* implicit */unsigned int) ((/* implicit */int) max((arr_11 [i_5] [i_5] [i_6] [i_6] [i_7] [i_7]), (((/* implicit */signed char) (_Bool)1)))))))) ? (((((((/* implicit */int) (signed char)-32)) + (2147483647))) << (((/* implicit */int) ((arr_9 [i_5]) == (3895521218547306307ULL)))))) : (((/* implicit */int) ((((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5] [i_7])) >= (((((/* implicit */int) (signed char)-25)) % (((/* implicit */int) (signed char)-112)))))))));
                    var_19 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_6 [i_5])) == (max((arr_9 [i_5]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_5] [i_6] [13LL])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)46)))))))));
                    var_20 = ((/* implicit */unsigned short) (+(3755065013U)));
                }
            } 
        } 
    } 
}
