/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53207
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = arr_0 [i_0] [i_0];
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    var_18 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)14))));
                    var_19 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23823))) : (var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))) : (3884820065U)))))));
                    var_20 += var_11;
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */short) (signed char)-39)), ((short)-23833))))));
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    arr_14 [i_3] [(unsigned char)12] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max(((unsigned char)166), (((/* implicit */unsigned char) (_Bool)0))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((unsigned short) var_1))))) >> (((((/* implicit */int) arr_3 [17ULL])) + (22430)))));
                    var_22 += ((/* implicit */long long int) var_16);
                    arr_15 [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (~(var_15))))) ? (((((/* implicit */int) (short)27603)) | (((/* implicit */int) ((_Bool) var_13))))) : (((((/* implicit */_Bool) (unsigned short)18)) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) (unsigned char)205))))));
                }
                var_23 = var_17;
            }
        } 
    } 
}
