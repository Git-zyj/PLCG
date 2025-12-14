/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239569
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
    var_11 = ((/* implicit */int) var_5);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) ((_Bool) (short)13));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_4)))), (((/* implicit */int) ((unsigned char) arr_1 [i_0])))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) == (212250082584419704LL)))) : (((/* implicit */int) (unsigned short)0))));
        var_13 = ((/* implicit */unsigned long long int) min((min(((-(var_7))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15))) / (-1942625491944351571LL))))), (((/* implicit */long long int) (unsigned short)58142))));
        arr_4 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1))))))))));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) 212250082584419730LL))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6234602143830741248LL))))) : ((+((+(((/* implicit */int) arr_0 [10LL] [i_1]))))))));
    }
}
