/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44393
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5518285489562126913ULL)) ? (7201365031618565152LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))))) == (max((5518285489562126913ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_6)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_11 = ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)65522))))))) ? (min((min((((/* implicit */unsigned long long int) (unsigned short)10581)), (5118896491105711230ULL))), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((arr_2 [i_0]) | (((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) (unsigned short)54966)))))))));
                    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54954))))))))));
                    arr_9 [(_Bool)1] = ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)255)), (min((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_1 [i_1]))))), (min((((/* implicit */int) var_6)), (var_7)))))));
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2009408308)) ? (169738948) : (((/* implicit */int) (signed char)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52585))) : (16378824817405457797ULL)));
                }
            } 
        } 
    } 
}
