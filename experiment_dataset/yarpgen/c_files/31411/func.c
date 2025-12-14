/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31411
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
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)145)) / (992))) - (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))));
                arr_8 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) != (15880031995209257617ULL)));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    arr_13 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (((_Bool)1) && ((_Bool)1))))));
                    arr_14 [i_2] [i_0] = ((/* implicit */unsigned int) ((15) / (((/* implicit */int) (_Bool)1))));
                }
                for (unsigned char i_3 = 2; i_3 < 10; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) 1059463260609433307ULL))));
                        var_12 ^= ((/* implicit */unsigned char) ((1117362677U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32)))));
                        var_13 ^= 309828785990787870LL;
                    }
                    arr_21 [i_0] [i_1] [i_3] = ((13907471699757164297ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                }
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_3))));
}
