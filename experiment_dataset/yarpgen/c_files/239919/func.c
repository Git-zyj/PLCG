/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239919
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
    var_18 = ((/* implicit */_Bool) (+(((unsigned long long int) var_15))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1])))))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)5] [i_1])))), ((!(((/* implicit */_Bool) (short)-6566)))))))) > (((long long int) arr_1 [i_1]))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) max(((short)18965), (((/* implicit */short) (_Bool)1))))) == (max((((/* implicit */int) arr_2 [i_0] [i_0])), ((((_Bool)1) ? (536870912) : (((/* implicit */int) (unsigned char)14))))))));
                var_20 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) 16588030817465521711ULL)) ? (arr_1 [i_0]) : (16588030817465521711ULL))));
            }
        } 
    } 
}
