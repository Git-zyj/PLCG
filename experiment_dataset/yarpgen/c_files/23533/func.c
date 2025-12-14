/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23533
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
    var_17 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((-1LL) - (var_13)))) ? (((/* implicit */int) var_11)) : ((-(((/* implicit */int) var_12)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) arr_4 [i_1] [i_1]);
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (-(12786789107951553955ULL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((arr_4 [i_1] [i_1]) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-13775)) : (((/* implicit */int) arr_0 [i_0])))))))));
                var_19 &= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) 5659954965757997661ULL)) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (unsigned char)192)))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 4; i_2 < 16; i_2 += 2) 
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_3)) >> (((5659954965757997661ULL) - (5659954965757997644ULL)))))) ^ (-1LL)))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [13U] [i_1]))) | (min((12786789107951553955ULL), (((/* implicit */unsigned long long int) (signed char)66))))))));
                    arr_8 [i_0] [i_1] [7] [i_0] = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned char)146))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)149))) : (((((/* implicit */unsigned int) -1)) / (min((1361662042U), (3213480126U))))));
                }
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    var_21 = ((unsigned char) ((short) (+(var_2))));
                    var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)992)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) var_16)))) < (((/* implicit */int) ((short) (short)17139))))))) : (((((_Bool) (short)2857)) ? (4193280ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((6280866541201409511ULL) != (((/* implicit */unsigned long long int) var_2))))))))));
                }
            }
        } 
    } 
    var_23 = (((~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_15)) > (5659954965757997661ULL)))))) >= (((/* implicit */int) var_10)));
    var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (var_9)));
}
