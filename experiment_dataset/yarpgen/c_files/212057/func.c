/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212057
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -1933714782))))) ^ ((((-(arr_6 [i_0]))) | (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (arr_2 [15] [i_0]))))))));
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_4))));
                var_21 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_2 [i_1 + 1] [i_1]))))));
                arr_7 [i_0] = ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) -1933714774)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (min((18147707990999752022ULL), (((/* implicit */unsigned long long int) (unsigned char)134)))))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) -1933714774)))))))));
                var_22 = ((/* implicit */short) (+((-(1933714773)))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_11))))) >> (((min((((/* implicit */int) var_17)), (-1933714780))) + (1933714799)))))), ((+(var_18))))))));
}
