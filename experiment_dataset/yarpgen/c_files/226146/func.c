/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226146
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
    var_13 = ((/* implicit */_Bool) max(((~((~(-7144393637978506379LL))))), (((/* implicit */long long int) min((max((((/* implicit */int) (unsigned char)255)), (880394254))), (min((-880394254), (((/* implicit */int) (signed char)0)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 += ((/* implicit */unsigned char) (~((~(((/* implicit */int) min(((unsigned char)128), ((unsigned char)246))))))));
                    var_15 = ((/* implicit */short) (~((~(min((1878943360), (((/* implicit */int) arr_7 [i_0]))))))));
                    var_16 = ((/* implicit */int) (~(max((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))), (max((1973334723U), (((/* implicit */unsigned int) 1072313542))))))));
                    var_17 ^= ((/* implicit */unsigned short) min((11511257396405356197ULL), (9660782237717383493ULL)));
                    var_18 &= ((/* implicit */_Bool) max(((~(max((var_10), (((/* implicit */unsigned int) var_8)))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6))))))))));
                }
            } 
        } 
    } 
}
