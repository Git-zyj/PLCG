/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216450
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (arr_2 [i_0] [i_0]) : (min((min((17131612168958598957ULL), (((/* implicit */unsigned long long int) (unsigned short)63)))), (((/* implicit */unsigned long long int) (unsigned short)63))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_1))))));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 2) /* same iter space */
        {
            arr_9 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned short) -7865983613068589108LL));
            arr_10 [i_1] [i_2] [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_5 [i_2 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))), (((/* implicit */int) arr_5 [i_2 + 1]))));
        }
        for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 2) /* same iter space */
        {
            arr_14 [i_1] [i_3] = ((/* implicit */long long int) min((((/* implicit */int) min((arr_11 [i_3 - 1] [i_1]), (((signed char) var_11))))), ((-(((/* implicit */int) (_Bool)1))))));
            var_14 = ((/* implicit */long long int) var_0);
        }
        var_15 = ((/* implicit */long long int) var_0);
    }
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)14))));
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)195))))))), ((!(((/* implicit */_Bool) 7865983613068589118LL)))))))));
}
