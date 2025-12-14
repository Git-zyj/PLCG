/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212291
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
        for (int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_12 = ((((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) (unsigned short)17604)))))) ? (min((((/* implicit */long long int) arr_7 [i_0] [i_0])), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                var_13 = (+(((((/* implicit */_Bool) (unsigned short)25)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_1 + 2] [i_1 - 1])))));
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) max((((-5905981886409673924LL) / (((/* implicit */long long int) -2147483620)))), (((/* implicit */long long int) -1437528792))))) ? (max((var_2), (((/* implicit */long long int) arr_6 [i_1 + 1])))) : (((/* implicit */long long int) ((/* implicit */int) ((-1437528795) == (-943648442)))))));
                var_15 *= min(((~(arr_6 [i_0]))), ((+(((((/* implicit */_Bool) (unsigned short)15419)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(unsigned short)12]))) : (3225742771U))))));
            }
        } 
    } 
    var_16 += ((/* implicit */long long int) ((var_1) == (max((((var_0) / (var_0))), (max((-1211220512), (((/* implicit */int) var_6))))))));
    var_17 = ((/* implicit */int) ((unsigned short) var_5));
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max(((+(-943648442))), (((/* implicit */int) ((unsigned char) var_11)))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) var_11))))), (var_8)))));
        var_19 = ((/* implicit */_Bool) (-(((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)53970)) : (-1437528792)))) - (min((-6903244190350209827LL), (((/* implicit */long long int) arr_1 [i_2]))))))));
        var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) (-2147483647 - 1))) ^ (6903244190350209858LL)));
    }
}
