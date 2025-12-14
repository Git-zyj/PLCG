/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192670
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
    var_20 |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((var_19) ? (((/* implicit */long long int) -425009694)) : (8796092497920LL)))) ? (max((-3604269743735870532LL), (6741632847843407532LL))) : (((/* implicit */long long int) max((var_15), (((/* implicit */unsigned int) var_2))))))), (min((min((((/* implicit */long long int) (unsigned char)192)), (-8796092497921LL))), (min((-3604269743735870543LL), (((/* implicit */long long int) var_15))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((int) 8796092497919LL))), (max((-8796092497921LL), (((/* implicit */long long int) arr_1 [i_0]))))))) ? (max((max((((/* implicit */unsigned long long int) (unsigned short)5)), (8141884072678202527ULL))), (((/* implicit */unsigned long long int) ((long long int) var_8))))) : (((/* implicit */unsigned long long int) min((max((-3604269743735870533LL), (((/* implicit */long long int) arr_2 [i_0] [i_0])))), (((/* implicit */long long int) ((signed char) var_11))))))));
                var_22 += max((((/* implicit */long long int) ((unsigned char) max((var_8), (((/* implicit */int) var_6)))))), ((~(min((((/* implicit */long long int) var_8)), (arr_0 [i_1]))))));
                arr_5 [i_0] [12LL] &= ((/* implicit */int) ((((_Bool) -1956032413081010561LL)) ? ((((_Bool)1) ? (max((-3604269743735870527LL), (3604269743735870532LL))) : (min((-8796092497921LL), (8796092497889LL))))) : (((/* implicit */long long int) (-((~(var_3))))))));
            }
        } 
    } 
    var_23 -= ((/* implicit */short) ((_Bool) ((int) (~(((/* implicit */int) (short)7618))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                var_24 &= ((/* implicit */short) ((((/* implicit */_Bool) (-(max(((-2147483647 - 1)), (((/* implicit */int) arr_1 [i_2]))))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 8796092497889LL)))) ? (max((-8796092497921LL), (((/* implicit */long long int) arr_9 [(unsigned short)4] [i_3 + 1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_10 [(short)12] [i_3])) : (((/* implicit */int) arr_6 [(short)4])))))))) : ((((!(((/* implicit */_Bool) 31LL)))) ? (min((((/* implicit */unsigned long long int) (short)-30410)), (8141884072678202527ULL))) : (((/* implicit */unsigned long long int) min((-8796092497910LL), (((/* implicit */long long int) arr_8 [(_Bool)0])))))))));
                var_25 *= ((/* implicit */_Bool) (+((-(((/* implicit */int) min(((short)27296), (((/* implicit */short) (unsigned char)103)))))))));
            }
        } 
    } 
}
