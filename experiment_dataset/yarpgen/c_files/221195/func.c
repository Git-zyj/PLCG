/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221195
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_11 [i_0] = ((/* implicit */int) ((((((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_0])), ((unsigned short)17848)))) > (((/* implicit */int) arr_8 [i_0] [i_2 - 1] [i_2 - 1])))) ? (((/* implicit */unsigned int) ((((-1173507235) <= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1173507235))))) : (1173507234)))) : (max((max((arr_10 [i_2 - 1] [i_1]), (((/* implicit */unsigned int) arr_5 [i_0] [i_0])))), ((+(arr_10 [i_0] [i_0])))))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_1] [i_1])) >= (((/* implicit */int) var_10)))) ? (((/* implicit */int) (short)20937)) : (((1173507231) >> (((1173507231) - (1173507218)))))))) ? (((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */long long int) var_16)) : (arr_6 [(_Bool)1] [(_Bool)1]))) << (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_8 [i_0] [i_1] [i_2]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((3616208601U) < ((-(1037185169U))))))))))));
                    var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_9 [i_2 - 2] [i_1] [i_0] [20ULL])) ? (-6946751227307102473LL) : (-1445246597993751211LL))), (((/* implicit */long long int) (unsigned char)207))))) && (((/* implicit */_Bool) 1173507221))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_3);
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_2) >> (((min((((/* implicit */unsigned int) var_13)), (var_7))) - (58U)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_8)) & (((/* implicit */int) (_Bool)1))))))));
    var_23 = ((/* implicit */long long int) var_4);
}
