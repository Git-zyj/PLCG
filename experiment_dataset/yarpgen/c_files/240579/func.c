/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240579
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) var_3);
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-20794)) ? (((/* implicit */int) (short)20793)) : (((/* implicit */int) var_0))))) >= (185081808663237275ULL)));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) 268435424LL))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        arr_10 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (arr_9 [i_3]) : (((/* implicit */int) var_13)))) & (((/* implicit */int) (short)-20794))));
        var_21 -= ((/* implicit */unsigned char) (_Bool)1);
        var_22 = ((/* implicit */unsigned short) ((arr_9 [i_3]) & (((/* implicit */int) var_9))));
    }
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-9021)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)));
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            {
                arr_15 [i_5] [i_4] = ((/* implicit */unsigned short) ((((3186553567450243979ULL) << (((((-851738560) & (((/* implicit */int) var_9)))) + (851738682))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_5 [i_4]))))) ? (var_3) : (((((/* implicit */unsigned long long int) var_4)) + (arr_12 [i_4] [(_Bool)1])))))));
                arr_16 [i_5] [i_4] = ((/* implicit */long long int) ((arr_3 [i_4] [i_4] [i_5]) > ((+(arr_3 [i_4] [i_4] [i_5])))));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_5])) && (((/* implicit */_Bool) var_7)))))) <= (1536ULL)));
            }
        } 
    } 
}
