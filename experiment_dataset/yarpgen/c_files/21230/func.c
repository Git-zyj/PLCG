/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21230
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
    var_16 = ((/* implicit */unsigned int) 12301423393660523443ULL);
    var_17 -= ((/* implicit */short) var_14);
    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((signed char) (signed char)-56))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)56))) + (var_14)))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 6; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (min((((/* implicit */unsigned int) arr_2 [i_0 + 1])), (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [i_0 + 4]), (arr_2 [i_0 - 1])))))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    var_20 = ((/* implicit */unsigned char) (~(min((((var_9) + (((/* implicit */unsigned long long int) -403789353)))), (((/* implicit */unsigned long long int) ((403789353) + (((/* implicit */int) (unsigned char)160)))))))));
                    arr_8 [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */long long int) -444504464)) : (1837891637325744995LL))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    arr_11 [1ULL] [i_3] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_3 [i_0 + 4])))) ? (((((/* implicit */_Bool) (+(var_2)))) ? ((-(899664256U))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((2422236737245072256LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
                    arr_12 [i_3] = ((/* implicit */long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-56))))) & (-403789353))) ^ (max((-471166046), (((/* implicit */int) ((unsigned short) arr_7 [i_3] [i_1] [i_3])))))));
                }
            }
        } 
    } 
}
