/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245437
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
    var_20 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (3U)))) : (((((/* implicit */_Bool) (unsigned short)17213)) ? (var_7) : (((/* implicit */unsigned long long int) var_0)))))));
    var_21 = ((/* implicit */short) var_5);
    var_22 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_23 = ((/* implicit */_Bool) ((16ULL) << (((374486841) - (374486840)))));
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    var_24 -= ((/* implicit */long long int) 4294967283U);
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) var_5)) : (arr_5 [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_0])))) : (((long long int) -374486841))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : ((+(((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) 374486840)) : (4590843999282486366ULL)))))));
                }
                var_26 = ((/* implicit */_Bool) min((((unsigned int) arr_4 [i_0 - 1] [i_0 + 1])), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((arr_4 [3ULL] [i_1]) + (4009446576399118281LL)))))))))));
                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) max((((arr_5 [i_0 - 2] [i_0 + 1] [i_0 - 1]) | (arr_5 [i_0 + 1] [i_0 - 2] [i_0 - 1]))), (((/* implicit */long long int) var_5)))))));
            }
        } 
    } 
}
