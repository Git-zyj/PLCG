/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44447
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)205)) ? (4242769429939830830ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17986)))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) -7948811340918215938LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (4242769429939830830ULL)));
    }
    var_14 = var_2;
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) (short)-19)) : (((/* implicit */int) (signed char)15))));
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        for (unsigned short i_2 = 1; i_2 < 14; i_2 += 3) 
        {
            {
                arr_7 [i_1] [i_2 + 4] = ((/* implicit */long long int) (signed char)-92);
                var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [0U] [i_2 + 1])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_2 + 4])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [8LL] [i_2 - 1]))))) : (((/* implicit */int) min((arr_4 [i_2] [i_2 + 1]), ((short)15051))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_1);
}
