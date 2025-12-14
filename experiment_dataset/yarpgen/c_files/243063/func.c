/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243063
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
    var_10 = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((var_6), (max((var_8), (var_4)))))), (((((((/* implicit */_Bool) 17163091968ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-16671)))) >> (((((/* implicit */int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)23737)))) - (23706)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    var_11 += ((/* implicit */long long int) (unsigned char)192);
                    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
                }
            } 
        } 
    } 
    var_13 = var_5;
    var_14 = ((/* implicit */unsigned short) var_1);
    var_15 += ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (11950823715126437411ULL));
}
