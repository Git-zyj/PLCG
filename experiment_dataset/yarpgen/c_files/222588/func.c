/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222588
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
    var_10 |= ((/* implicit */_Bool) (unsigned short)0);
    var_11 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */short) (signed char)-34);
                    arr_6 [i_0] [(unsigned short)0] [i_0] [i_0] = ((/* implicit */unsigned int) 5644104949373572526ULL);
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3005918736U)) ? (12802639124335979090ULL) : (3555295005976356331ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [14U])) ? (((/* implicit */int) arr_0 [(unsigned char)5] [i_2])) : (((/* implicit */int) arr_5 [10LL] [i_1]))))) : (5644104949373572526ULL)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (5595573662368008569LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)0]))))) <= (((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)20037))))))) : (((/* implicit */int) (signed char)(-127 - 1))))))));
                }
            } 
        } 
    } 
}
