/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244946
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_1] [i_0] [(_Bool)1] = ((((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) / (((((/* implicit */_Bool) ((arr_13 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]) ^ (((/* implicit */int) (short)-9022))))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                                var_17 = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_1 [i_0])) % ((~(((/* implicit */int) var_9))))))));
                                arr_15 [(unsigned char)10] [(unsigned char)10] [i_2 - 1] [i_0] [i_2 - 1] = ((/* implicit */unsigned short) (((-((-(((/* implicit */int) (short)8949)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)8949)))))));
                                arr_16 [18U] [i_0] = ((/* implicit */short) ((((arr_12 [i_2 - 1] [i_2 - 1]) >= (arr_12 [i_2 - 1] [i_2 - 1]))) && (((/* implicit */_Bool) var_0))));
                            }
                        } 
                    } 
                    arr_17 [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_9);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    for (unsigned short i_8 = 2; i_8 < 10; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 2; i_9 < 13; i_9 += 4) 
                        {
                            {
                                arr_33 [i_9] [(unsigned char)9] [i_9] [i_9] [i_9] [i_9] [i_5] = ((max((arr_32 [i_6] [(short)12] [i_7] [i_8 - 1] [i_7] [i_5] [i_5]), (arr_32 [i_5] [i_5] [i_5] [4U] [i_7] [i_5] [i_9 - 1]))) != ((-(arr_32 [i_5] [i_6] [i_7] [i_6] [0] [13] [1U]))));
                                var_18 ^= ((/* implicit */unsigned long long int) arr_22 [(_Bool)1] [(_Bool)1]);
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((((((/* implicit */int) (short)896)) >= (((/* implicit */int) var_11)))), ((!(((/* implicit */_Bool) 2236832639470127325ULL)))))))));
            }
        } 
    } 
}
