/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20319
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
    var_15 = ((/* implicit */unsigned short) var_2);
    var_16 = ((/* implicit */long long int) max((max((((/* implicit */short) var_3)), (var_8))), (((/* implicit */short) var_11))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 4; i_1 < 6; i_1 += 3) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7343070713430286737ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-64)))))))));
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) -1913490623))));
        }
        arr_8 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) min((var_10), (((/* implicit */int) (unsigned char)56))))) ? (1716109581106960432ULL) : (((/* implicit */unsigned long long int) (-(var_13)))))) < (((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) arr_1 [i_0 + 3])), (arr_2 [i_0]))))))));
    }
}
