/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34982
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
    var_16 &= ((((/* implicit */_Bool) var_11)) ? (((((1073610752U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)186))))) << (((((/* implicit */int) (unsigned char)70)) - (39))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)186)) ? (((/* implicit */int) (signed char)96)) : (198681509)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) min((((unsigned int) (signed char)114)), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (unsigned char)64)) ? (3543913375732907994ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [i_1] [i_0])))))))));
                    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 1] [i_1])) <= (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 2])), (var_2)))) : (0U)));
                    arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)41)), (14377403189594114550ULL)))) || (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_3 [i_1]))))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_1])), ((unsigned char)255))))) == (8869162886669880107LL)));
                    arr_7 [i_1] [(unsigned short)4] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)0))));
                }
            } 
        } 
    } 
}
