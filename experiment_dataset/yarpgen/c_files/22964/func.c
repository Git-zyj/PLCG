/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22964
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
    var_11 = ((/* implicit */long long int) (-(((unsigned int) ((((/* implicit */_Bool) 6ULL)) ? (var_8) : (((/* implicit */int) var_7)))))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) (((+(min((((/* implicit */unsigned long long int) arr_2 [(unsigned short)6])), (6ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_6))))))))));
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (+(((((18446744073709551607ULL) << (((var_0) - (1662045395))))) >> (((var_4) - (947679956U))))))))));
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [i_0])) - (((/* implicit */int) ((signed char) var_10))))))));
                    var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (1468735752700758749LL)))) && (((/* implicit */_Bool) (~(var_9))))))) : ((-(((((/* implicit */_Bool) arr_7 [(_Bool)1] [5ULL])) ? (874694727) : (-874694732)))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) var_7);
}
