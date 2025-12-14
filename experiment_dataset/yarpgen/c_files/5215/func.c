/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5215
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((-1898356337) & (((int) 1152921504606846976LL)))) & ((~(var_1))))))));
    var_13 = ((/* implicit */_Bool) (-2147483647 - 1));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) max(((~(3186848760U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((var_1), ((~(((/* implicit */int) (unsigned short)3))))))) >= (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))), (max((13797737182943265618ULL), (((/* implicit */unsigned long long int) (unsigned short)3))))))));
                    arr_6 [(unsigned short)0] [i_1] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_3 [i_1 + 1])))) : ((+(arr_0 [i_1 + 1] [i_1])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            {
                var_16 -= ((/* implicit */signed char) ((arr_10 [i_4] [(signed char)2]) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */long long int) var_1)) % (-1152921504606846976LL))))))));
                var_17 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) + (2147483647))) << (((1522829393) - (1522829393)))))) ? (max((((/* implicit */unsigned long long int) var_7)), (0ULL))) : (((((/* implicit */unsigned long long int) var_5)) - (arr_9 [(_Bool)1] [i_4]))))) << (((((((/* implicit */int) min(((unsigned short)47772), ((unsigned short)47745)))) >> (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3]))) & (1041630289U))))) - (23815)))));
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_8))));
            }
        } 
    } 
}
