/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190493
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
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (var_6)));
        var_13 *= ((/* implicit */_Bool) (+(9995283301543756196ULL)));
        arr_3 [i_0] = ((/* implicit */long long int) (_Bool)1);
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(7680597192832083490LL)))))) ? (((((/* implicit */int) var_4)) / (((/* implicit */int) arr_5 [i_1] [i_2])))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_1] [i_1] [i_1])) : (((/* implicit */int) (signed char)-7)))) >= (((/* implicit */int) var_10)))))));
                var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_8 [i_1] [i_1]) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_4 [(unsigned char)12])) : (var_7)))))) ? (9995283301543756196ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) >= ((((_Bool)1) ? (-6487245436154620521LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1])))))))))));
            }
        } 
    } 
}
