/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31088
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
    var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_8)))))) == ((+(var_3))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))))), (max((((/* implicit */long long int) var_1)), (var_2))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (~((~(((/* implicit */int) arr_2 [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((arr_1 [(short)5]) ? (((/* implicit */int) ((signed char) 2305843009213693952LL))) : (((/* implicit */int) arr_2 [i_0]))));
    }
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((3021003396019438645LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned int i_1 = 2; i_1 < 10; i_1 += 1) 
    {
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (15)))) ? (((/* implicit */int) arr_6 [i_2] [i_1 + 1])) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 - 2])) == (((/* implicit */int) arr_1 [i_1 + 1])))))));
                var_17 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 704031505U)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (3150173464371128454ULL))))))));
                var_18 = ((/* implicit */unsigned long long int) ((_Bool) max((var_6), ((unsigned char)68))));
                var_19 = ((/* implicit */long long int) (((+(max((arr_4 [(unsigned char)3]), (((/* implicit */unsigned int) var_7)))))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_2 [i_1 + 2])))))));
            }
        } 
    } 
}
