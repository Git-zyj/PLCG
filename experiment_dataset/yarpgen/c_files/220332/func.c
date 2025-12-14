/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220332
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
    var_15 &= ((unsigned long long int) var_11);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */short) (unsigned short)42826);
                arr_8 [i_1] [(unsigned char)11] [(unsigned short)7] = ((/* implicit */long long int) var_11);
                arr_9 [(short)16] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((short)0), (arr_1 [i_1 + 1]))))));
                /* LoopSeq 3 */
                for (short i_2 = 3; i_2 < 19; i_2 += 3) 
                {
                    arr_12 [16LL] &= ((/* implicit */long long int) max(((short)-5), ((short)5)));
                    var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((long long int) min((arr_5 [i_1]), (((/* implicit */long long int) (short)6440)))))), (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_11 [i_1])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30268))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30250)))))));
                }
                /* vectorizable */
                for (short i_3 = 1; i_3 < 19; i_3 += 3) 
                {
                    var_17 = ((/* implicit */short) 1ULL);
                    var_18 ^= ((/* implicit */short) ((((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 1])) >= (((/* implicit */int) arr_14 [14LL] [i_1 - 1] [i_1]))));
                }
                for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (-(((/* implicit */int) arr_10 [i_1 - 1] [i_1 - 1])))))));
                    arr_19 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */int) (unsigned short)47971)) != (((/* implicit */int) arr_11 [i_1]))))) ^ (((/* implicit */int) ((short) (unsigned char)252))))) / (max((((((/* implicit */int) arr_14 [i_1] [i_1] [i_1])) + (((/* implicit */int) (unsigned short)5)))), (((((/* implicit */int) (short)-15)) - (((/* implicit */int) arr_6 [i_0] [i_1]))))))));
                    arr_20 [i_0] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)46108)) : (((/* implicit */int) arr_10 [(unsigned char)7] [i_1]))))) ? (((/* implicit */int) arr_17 [i_0] [i_1 + 1])) : (((/* implicit */int) (unsigned short)17561))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_16 [i_1 + 1] [i_1] [i_1 - 1])), ((unsigned short)35261)))) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_1 + 1]))));
                    var_20 = (short)-13096;
                    var_21 = ((/* implicit */short) (-(max((((/* implicit */int) arr_17 [i_0] [i_0])), (((((/* implicit */_Bool) (short)-32177)) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) (unsigned short)46125))))))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((unsigned char) var_13));
    var_23 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) var_6)), (var_3))), (var_3)));
}
