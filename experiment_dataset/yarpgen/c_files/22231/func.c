/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22231
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_0 [i_0 - 2]))))));
                        arr_10 [i_0] [i_2] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) var_9)))), (1874091899)));
                        arr_11 [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((long long int) ((unsigned int) arr_5 [(unsigned short)7] [i_2]))) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2] [i_2 - 1] [i_2])) / (1874091899))))))));
                        var_18 = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) max((arr_1 [i_1] [i_1]), (((/* implicit */long long int) -1874091899))))), (((((/* implicit */_Bool) (unsigned char)26)) ? (arr_3 [i_3]) : (((/* implicit */unsigned long long int) 1874091889))))))));
                    }
                    arr_12 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(min((((/* implicit */int) (signed char)-29)), (-1874091899)))))) ? (min(((-(arr_1 [(short)14] [i_2]))), (((/* implicit */long long int) ((((/* implicit */int) var_15)) & (((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_6 [i_0 + 1] [(signed char)12] [i_0] [i_0])))), (((/* implicit */int) ((_Bool) (unsigned char)26)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-11257)) > (((/* implicit */int) (unsigned short)20659)))))) + ((+(18446744073709551599ULL))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))))))));
    }
    var_20 = ((/* implicit */unsigned char) var_15);
    var_21 = ((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)44877)) > (((/* implicit */int) var_14)))))) - (((-7070689935815245848LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)496)))))))));
}
