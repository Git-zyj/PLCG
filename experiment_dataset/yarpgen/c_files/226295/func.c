/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226295
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))) ? ((~(max((144115188075855872ULL), (((/* implicit */unsigned long long int) 6961201380330724353LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((-6961201380330724380LL) <= (((/* implicit */long long int) ((/* implicit */int) var_4))))))) == (6961201380330724353LL)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) arr_4 [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) 6961201380330724352LL)))), (((/* implicit */unsigned long long int) (signed char)-60)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) ^ (((/* implicit */int) var_14)))))));
                var_21 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0]))))), (max((arr_3 [8U] [i_0]), (arr_3 [i_1] [(_Bool)1])))));
                arr_6 [i_1] [i_1] [i_0] = 144115188075855903ULL;
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) 807524513);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((var_0) | (var_0)))) ? ((+(var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)36702)) > (7)))))))));
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (signed char)35))));
}
