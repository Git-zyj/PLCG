/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198706
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
    var_10 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)57145)) ? (578727331241119394LL) : (((((((/* implicit */long long int) ((/* implicit */int) var_4))) / (-2572441489436051342LL))) & (((/* implicit */long long int) max((((/* implicit */int) var_8)), (-1022813735))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) 4320484328980883654LL)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) max(((unsigned char)233), ((unsigned char)235)))))))));
                arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)69))))) ? (((/* implicit */unsigned long long int) ((17179869183LL) | (((/* implicit */long long int) ((/* implicit */int) (short)-14386)))))) : (((((/* implicit */_Bool) max((var_0), ((unsigned char)10)))) ? (max((((/* implicit */unsigned long long int) var_6)), (arr_2 [i_1]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))))));
                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))))) <= (((((/* implicit */int) arr_0 [i_1])) - (((/* implicit */int) var_0)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_9)))))))))));
                arr_7 [i_0] = ((/* implicit */int) max((13949448607798167377ULL), (((/* implicit */unsigned long long int) ((unsigned char) arr_2 [i_0])))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) 433179117U)), (max(((~(var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -25)) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) (unsigned char)248)))))))));
    var_14 = ((/* implicit */short) max((6370388386789202519LL), (((/* implicit */long long int) 1747404776))));
    var_15 |= ((/* implicit */short) (signed char)10);
}
