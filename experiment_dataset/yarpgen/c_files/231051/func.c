/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231051
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
    var_13 = ((/* implicit */unsigned long long int) var_0);
    var_14 = min((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_7)), (-5093028286066535963LL))) | (((/* implicit */long long int) min((((/* implicit */int) (short)543)), (1757400780))))))), (var_5));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_15 ^= ((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_0 [i_0]))))) ^ (min((max((0U), (((/* implicit */unsigned int) (short)-32752)))), (((/* implicit */unsigned int) (short)32749)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    arr_9 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) | (((/* implicit */int) (short)-32752))));
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-32739)) ^ (arr_6 [5] [i_1] [i_1]))))));
                    var_17 = ((((/* implicit */int) (short)-32752)) | (((/* implicit */int) (short)-1)));
                }
                var_18 = ((/* implicit */short) min((max((arr_5 [i_0] [i_1]), (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_0)), ((short)32733))))));
                /* LoopNest 3 */
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) min((min((var_4), (((/* implicit */short) var_3)))), (((/* implicit */short) ((min((var_10), (((/* implicit */int) (short)1)))) == (((/* implicit */int) var_0)))))));
                                arr_16 [i_0] [0U] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_13 [i_0] [5] [4U] [i_0] [i_0])), (410434483U)))) < (min((((/* implicit */unsigned long long int) var_6)), (16392195080284355709ULL)))));
                                var_20 = ((/* implicit */int) min((max((max((((/* implicit */unsigned long long int) (short)-1)), (arr_8 [i_0] [1U]))), (2054548993425195889ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1072693248U)) + ((-9223372036854775807LL - 1LL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
