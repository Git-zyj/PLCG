/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19999
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_11 ^= ((/* implicit */short) max((((/* implicit */unsigned int) (!(((var_3) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10391)))))))), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_1]))))), (max((((/* implicit */unsigned int) (short)30040)), (arr_0 [i_1])))))));
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 11; i_2 += 1) 
                {
                    var_12 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_2])) ? (3121676029U) : (((/* implicit */unsigned int) var_10))))))))) / ((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_5))))));
                    var_13 *= ((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */int) arr_3 [i_0])))))));
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))));
                    arr_7 [i_1] = ((/* implicit */long long int) (+((-(((/* implicit */int) ((signed char) 8177681693676096464LL)))))));
                }
            }
        } 
    } 
    var_14 = ((/* implicit */short) (+(((((((/* implicit */_Bool) (short)4540)) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) (short)-4540)) ? (var_10) : (((/* implicit */int) var_4))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 2) 
    {
        for (short i_4 = 3; i_4 < 22; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 3) 
            {
                {
                    arr_15 [i_3] [(short)5] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */unsigned long long int) (~((~(arr_14 [i_3] [i_4 - 3] [11])))))) : (((unsigned long long int) max(((short)-4517), (((/* implicit */short) (unsigned char)33)))))));
                    var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_3 + 2])) ? ((((_Bool)1) ? (arr_11 [i_3 - 2]) : (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)8890)) >> (((arr_11 [12LL]) - (11898033085562955735ULL)))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)200))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-4541)))))))) || (((/* implicit */_Bool) var_0))));
}
