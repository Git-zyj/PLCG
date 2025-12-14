/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45345
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
    var_16 = ((/* implicit */unsigned long long int) (((~(var_5))) >= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2042413244U)), ((+(-4611686018427387904LL))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (+(min((((/* implicit */unsigned long long int) (_Bool)1)), (10135900531777182216ULL))))))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)65532)), (var_4)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)65532))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((unsigned int) -5074933549808733327LL)))) : ((+(11698676966524287618ULL)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        for (int i_3 = 2; i_3 < 16; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (1256942276) : (((/* implicit */int) ((_Bool) (unsigned char)38))))));
                    var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_12 [i_2] [i_2] [i_4] [i_3 - 1]) >> (((arr_13 [i_2] [i_3 - 2] [i_3 - 2] [i_3 - 2]) + (323733828)))))) ? (var_4) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_13 [i_2] [i_3 - 1] [i_3 - 1] [i_4])), (((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */unsigned int) 1256942269)) : (3359120191U))))))));
                }
            } 
        } 
    } 
    var_21 ^= ((/* implicit */int) (unsigned char)41);
}
