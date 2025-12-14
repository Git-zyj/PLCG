/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231075
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((long long int) var_2)))) == (((/* implicit */int) ((short) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_5))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        arr_16 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [9LL] [9LL] [i_2] [i_2]))) - (arr_9 [i_0] [i_0])));
                        arr_17 [i_0] [i_1] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */short) ((((unsigned long long int) arr_6 [i_2])) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_0] [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_2]))))))) < (arr_12 [i_0] [i_1] [(short)6] [i_3] [i_3])))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        arr_20 [i_2] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) ((arr_9 [i_0] [i_1]) < (arr_9 [i_1] [i_0]))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            arr_24 [i_4] [i_4] [i_4] [0ULL] = ((((/* implicit */int) ((signed char) arr_14 [i_5] [i_5] [i_5]))) * (((/* implicit */int) ((((/* implicit */int) arr_14 [i_4] [i_4] [i_4])) < (((/* implicit */int) arr_14 [i_0] [i_2] [i_5]))))));
                            var_18 -= ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) ((unsigned short) (short)13617))) >> (((((/* implicit */int) (short)15118)) - (15117))))));
                            arr_25 [i_2] [i_4] [i_2] [i_2] [i_4] [i_0] = ((/* implicit */short) arr_9 [i_1] [i_0]);
                            var_19 ^= ((/* implicit */short) arr_6 [i_0]);
                        }
                    }
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            {
                                arr_31 [i_6] [(short)14] [i_2] [i_6] [i_7] = ((short) arr_6 [i_1]);
                                var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_2] [i_0] [i_7]))) - (arr_9 [i_2] [i_2]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
