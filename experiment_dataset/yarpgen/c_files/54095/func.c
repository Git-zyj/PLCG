/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54095
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
    var_18 |= ((/* implicit */_Bool) var_13);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) 2091173544119266730LL))));
                    var_20 = ((unsigned char) ((unsigned short) (signed char)0));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) max((min((max(((unsigned short)11729), (((/* implicit */unsigned short) (signed char)-64)))), (((/* implicit */unsigned short) ((signed char) arr_7 [i_2] [i_1] [i_0]))))), (((/* implicit */unsigned short) min((min((((/* implicit */short) (unsigned char)154)), (var_17))), (((/* implicit */short) (!(((/* implicit */_Bool) var_7)))))))))))));
                    var_22 = ((/* implicit */unsigned short) (+(((12755157743946408863ULL) + (((/* implicit */unsigned long long int) -1919663449))))));
                }
            } 
        } 
    } 
}
