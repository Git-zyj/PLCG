/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218141
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) (~((~(4194303LL)))));
                    var_18 = ((/* implicit */int) (+(((arr_2 [i_0 - 2] [i_0 + 1]) % (arr_2 [i_0 - 2] [i_0 + 1])))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                {
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)15121)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50415))) : (0ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))))))) - ((~(((/* implicit */int) (unsigned short)15130)))))))));
                    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) -4194304LL)), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_15 [(_Bool)1] [i_3] [i_5])) == (((/* implicit */int) (unsigned short)50405)))))) * ((~(0ULL)))))));
                }
            } 
        } 
    } 
}
