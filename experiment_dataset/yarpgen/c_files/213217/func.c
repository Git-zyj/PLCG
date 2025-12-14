/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213217
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) 8166753928238988774LL)) ? (17956335653617290079ULL) : (490408420092261536ULL))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned char) ((signed char) min((arr_4 [i_1] [i_1] [i_1]), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 1357018353U)) : (arr_2 [(unsigned char)7]))))));
                arr_6 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_0]) : (arr_1 [i_1])))) ? (((unsigned long long int) arr_3 [i_0] [i_0] [i_1])) : (((((/* implicit */_Bool) max(((unsigned char)230), ((unsigned char)216)))) ? (((/* implicit */unsigned long long int) arr_1 [i_0 - 1])) : (490408420092261514ULL)))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_8);
    var_15 = min((((/* implicit */long long int) ((((unsigned long long int) (_Bool)1)) <= (((/* implicit */unsigned long long int) 763147719))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)182)), (var_3)))) ? (((long long int) var_2)) : (((long long int) 5762783440149791000ULL)))));
    var_16 = ((/* implicit */int) ((((/* implicit */long long int) (((_Bool)1) ? (-1994585930) : (((/* implicit */int) (unsigned char)255))))) / (var_2)));
}
