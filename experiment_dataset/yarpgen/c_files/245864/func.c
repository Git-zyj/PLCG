/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245864
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
    var_16 = ((/* implicit */_Bool) min((min((1447274353U), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (2847692943U)))))), (var_11)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (((((/* implicit */_Bool) min((-618732408798447573LL), (((/* implicit */long long int) arr_4 [(short)20] [i_1]))))) ? (((/* implicit */int) (short)12364)) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)255)), (arr_4 [i_0] [(unsigned short)22])))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_0])) << (((/* implicit */int) (unsigned short)0))))) ? ((+(((/* implicit */int) (unsigned short)22434)))) : (arr_1 [i_0])))));
                var_18 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((((/* implicit */int) arr_2 [i_0] [i_1])), ((~(((/* implicit */int) arr_0 [i_0]))))))) != ((+(((((/* implicit */_Bool) (unsigned short)22434)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)82))) : (1447274353U)))))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_3 [(short)18] [(short)18] [i_1]), (arr_0 [i_0])))) / (((/* implicit */int) max(((unsigned short)15), ((unsigned short)22451))))));
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)65534);
            }
        } 
    } 
}
