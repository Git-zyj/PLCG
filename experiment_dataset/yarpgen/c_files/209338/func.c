/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209338
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : ((-2147483647 - 1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 7307814693823270860ULL)))) : (max((max((7336024780110057888ULL), (7336024780110057865ULL))), (min((131071ULL), (((/* implicit */unsigned long long int) var_7)))))));
        var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) (_Bool)1))))) && ((!(((/* implicit */_Bool) 7336024780110057888ULL))))))), ((~(7336024780110057888ULL)))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (int i_4 = 3; i_4 < 24; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 3) 
                    {
                        {
                            arr_16 [24ULL] [i_1 - 1] [i_1 - 1] [24ULL] [24LL] [i_1] [i_1 - 1] &= (~(min((349242202), (448942364))));
                            var_19 = ((/* implicit */unsigned char) ((unsigned long long int) ((min((4294967295U), (((/* implicit */unsigned int) (unsigned char)150)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)91))))));
                            var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((var_6) ? (11110719293599493728ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)103)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)111), ((unsigned char)104))))) % (min((((/* implicit */unsigned long long int) var_11)), (2251799813685240ULL))))) : (((/* implicit */unsigned long long int) (((+(0U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) < (280979261))))))))));
                        }
                    } 
                } 
            } 
            arr_17 [i_1] [i_2] = 9855424570758558581ULL;
            var_21 = ((/* implicit */int) 4294967295U);
        }
        var_22 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(0U)))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_8)), (var_1)))) : (((((/* implicit */long long int) -1090296687)) / (-9096341395372702340LL))))) / (((/* implicit */long long int) 6U))));
        var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) (unsigned char)105)) ? (var_9) : (((/* implicit */long long int) -2129168060))))))) ? (((/* implicit */int) var_12)) : (min((-721247460), (((/* implicit */int) (unsigned char)234))))));
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) 1612998366U))));
    }
    var_25 = ((/* implicit */unsigned char) (-((~(max((((/* implicit */int) (unsigned char)65)), (216619073)))))));
}
