/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2558
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_12 = ((short) -115491637813577452LL);
        arr_3 [i_0] |= min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32766))) <= (((((/* implicit */_Bool) -1481058093)) ? (((/* implicit */unsigned long long int) 8941884752362463448LL)) : (18446744073709551615ULL)))))), (((((/* implicit */int) (!(((/* implicit */_Bool) 7347974964846915760LL))))) >> (((long long int) (short)0)))));
        var_13 |= ((/* implicit */short) max((((unsigned int) (~(((/* implicit */int) arr_2 [(unsigned short)18]))))), (var_6)));
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            {
                var_14 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (13281800122360326508ULL))) != (((/* implicit */unsigned long long int) max((arr_5 [i_1] [i_2]), (arr_7 [i_1] [i_1] [i_1]))))))), (((long long int) -338345948))));
                var_15 &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7485)) ? (-2858112327434968212LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))))) ? (max((max((((/* implicit */unsigned long long int) (_Bool)0)), (arr_1 [i_1]))), (((/* implicit */unsigned long long int) var_8)))) : (((((/* implicit */unsigned long long int) arr_4 [i_2])) ^ (max((var_10), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_2] [i_1]))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_0);
}
