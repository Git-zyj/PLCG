/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226452
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
    var_12 &= ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 17710932383887630347ULL)) ? (17710932383887630358ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_3)) : (735811689821921269ULL))) ^ (((/* implicit */unsigned long long int) ((var_1) >> (((735811689821921279ULL) - (735811689821921266ULL)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) (short)28675)))))))))));
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((((/* implicit */_Bool) (~(735811689821921271ULL)))) ? (((/* implicit */unsigned int) -2009797062)) : (var_5))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_10) ? (((/* implicit */unsigned long long int) var_1)) : (17710932383887630346ULL)))))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) (signed char)-59)) <= (((/* implicit */int) ((var_0) != (((/* implicit */unsigned long long int) var_4)))))))), ((~(((var_4) | (var_1)))))));
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0]))))) ^ (((((/* implicit */unsigned long long int) 3790369358U)) ^ (17710932383887630347ULL)))))) ? (((((/* implicit */_Bool) 15U)) ? (((/* implicit */unsigned long long int) 12U)) : (735811689821921279ULL))) : (var_6)));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 3; i_2 < 17; i_2 += 2) 
                {
                    var_16 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_11), (((/* implicit */int) (!(((/* implicit */_Bool) 504597927U)))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) | ((~(-7425508080229028695LL))))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) 735811689821921269ULL)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (signed char)7)))), (((/* implicit */int) arr_0 [i_0])))))));
                    arr_7 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)31))));
                }
            }
        } 
    } 
}
