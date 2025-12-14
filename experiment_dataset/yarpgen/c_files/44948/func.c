/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44948
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        arr_8 [i_0] [i_2] [i_3] = ((/* implicit */long long int) ((((((/* implicit */int) arr_6 [i_2 + 1] [i_2] [i_2 + 2] [i_2 + 1])) - (((/* implicit */int) arr_6 [i_2 + 2] [i_2] [i_2 + 2] [i_2])))) ^ ((+(((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_3]))))));
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((0LL) >= (((/* implicit */long long int) var_7))))) + (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [(short)11]))))) ? (((/* implicit */int) ((arr_1 [i_2 - 1] [i_2 + 1]) >= (((/* implicit */long long int) min((-737032231), (((/* implicit */int) var_13)))))))) : (((((/* implicit */int) arr_2 [i_2 - 1] [i_2] [i_3])) + (((/* implicit */int) arr_6 [i_2 - 1] [i_2] [i_2] [i_2]))))));
                        arr_9 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */long long int) var_10);
                        arr_10 [7LL] [7LL] [i_2] [7LL] [7LL] [i_3] = arr_4 [i_2];
                    }
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) -2116844190);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) (~(var_6)));
    var_16 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((3387511208099453391LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-640)))))) ? (((/* implicit */unsigned long long int) ((var_6) - (((/* implicit */long long int) var_1))))) : (min((((/* implicit */unsigned long long int) var_5)), (var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) ((var_10) >= (var_4)))))))));
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_2))))) + (var_1))) == (((/* implicit */int) ((max((var_1), (var_3))) != (((/* implicit */int) var_13)))))));
    var_18 = ((/* implicit */int) (unsigned short)0);
}
