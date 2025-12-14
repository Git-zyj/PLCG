/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215437
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_19 ^= ((/* implicit */_Bool) var_4);
                    var_20 = ((((/* implicit */int) arr_8 [8U] [9ULL] [i_2])) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) == (8034987353478958675LL)))));
                }
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)46586)) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))))))) / (((((_Bool) (_Bool)1)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [6]))) ^ (var_14)))) : (-1992564666706435554LL)))));
                var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)46586)) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1])) : (((arr_5 [i_0] [i_1]) - (((/* implicit */unsigned long long int) -5163643966167826498LL))))));
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((arr_4 [0LL] [i_1]) | (((((-1992564666706435554LL) + (9223372036854775807LL))) << (((((((/* implicit */int) (short)-32440)) + (32454))) - (14)))))))) % (var_10)));
                arr_10 [i_0] [3U] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)1330)) && (((/* implicit */_Bool) arr_7 [i_0] [i_1])))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) || (((/* implicit */_Bool) var_14)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((-5163643966167826498LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46586))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((2972884855537325923ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
}
