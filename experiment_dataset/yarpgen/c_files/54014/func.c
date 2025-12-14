/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54014
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) min((max((var_10), (((/* implicit */unsigned long long int) (short)-32763)))), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? (var_10) : (var_11))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_13 -= ((/* implicit */_Bool) ((((((/* implicit */int) (!(((/* implicit */_Bool) -7247643790722672987LL))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))))) % ((~(((/* implicit */int) var_7))))));
                    arr_8 [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (arr_7 [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1])))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 2147483647)) : (arr_4 [i_1 - 2] [i_1] [i_2])))));
                    arr_9 [(unsigned char)9] [i_1] = ((/* implicit */unsigned long long int) (~((+(192266715162861912LL)))));
                    var_14 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_5 [i_1 + 1] [12] [i_1 - 2])))) < ((~(arr_4 [i_1 - 2] [i_1 + 1] [i_1 + 1])))));
                }
                arr_10 [i_1] = min((((/* implicit */int) (unsigned short)41555)), (2147483647));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((short) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_11))), (max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (var_11))))));
    var_16 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16))) - (var_1)))))));
}
