/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216135
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
    var_13 = ((/* implicit */long long int) (~((~(2147483647)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_14 = ((/* implicit */long long int) ((((((/* implicit */long long int) 536870911)) != (max((-3370525466193197949LL), (((/* implicit */long long int) (unsigned char)2)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32767))) : (arr_0 [i_0]))))))));
        var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((int) min((((/* implicit */int) (short)11306)), (1602622733))))), (((unsigned long long int) var_11))));
        var_16 = ((/* implicit */short) max((((signed char) var_6)), (((/* implicit */signed char) arr_1 [i_0]))));
        var_17 = ((/* implicit */long long int) ((max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_4)), (arr_2 [i_0])))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (3370525466193197961LL))))) < (((/* implicit */long long int) (+(max((var_2), (((/* implicit */unsigned int) arr_1 [i_0])))))))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_18 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (4488847197705610274ULL)));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min((((/* implicit */unsigned long long int) arr_1 [i_1])), (4566363009800818027ULL))))));
    }
}
