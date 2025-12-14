/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235755
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
    var_12 &= var_7;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) max((var_4), (max((((((/* implicit */_Bool) (unsigned short)31672)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_10))))));
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (short)3490))));
                    arr_8 [i_0] [13U] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)150)) ? (((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_8))))) : (max((var_2), (((/* implicit */long long int) var_8)))))) : (min((((/* implicit */long long int) (-(((/* implicit */int) (short)-3491))))), (max((((/* implicit */long long int) var_10)), (var_2)))))));
                    var_15 = ((/* implicit */long long int) (~(((/* implicit */int) var_10))));
                }
            } 
        } 
    } 
    var_16 = ((((/* implicit */_Bool) (short)-4093)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((2147483647), (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) : (max((((/* implicit */unsigned int) (short)-3491)), (0U)))))) : (min((((/* implicit */long long int) -230153697)), (((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */long long int) var_9)))))));
    var_17 = ((/* implicit */int) (!((!(((/* implicit */_Bool) min((4294967287U), (((/* implicit */unsigned int) var_10)))))))));
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) max((var_4), (((/* implicit */int) (unsigned char)112))))) ? (((((/* implicit */_Bool) (unsigned char)91)) ? (6006828170152290616LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (max((((/* implicit */long long int) 1370931613)), (var_2))))))))));
}
