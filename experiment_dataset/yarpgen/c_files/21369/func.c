/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21369
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
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (max(((+(12517589210733708764ULL))), (((573678479677332952ULL) ^ (((/* implicit */unsigned long long int) 1047425027U))))))));
    var_12 = ((/* implicit */unsigned char) max((1047425040U), (3247542272U)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */int) min((arr_2 [i_0] [i_0]), (arr_2 [2] [i_1])));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_13 = ((/* implicit */unsigned char) var_6);
                    var_14 -= ((/* implicit */unsigned int) (~(((long long int) arr_3 [i_1]))));
                    arr_10 [i_0] |= ((/* implicit */int) min(((~(arr_8 [i_0] [i_0] [i_2] [i_0]))), (((((/* implicit */_Bool) ((2429231423592485480ULL) + (9158109039273891260ULL)))) ? (((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned long long int) 1047425040U)))) : (((((/* implicit */_Bool) arr_1 [5LL] [i_0])) ? (arr_2 [i_0] [i_0]) : (9288635034435660331ULL)))))));
                    arr_11 [i_0] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_9)))) ? (max((((/* implicit */long long int) -1329012731)), (arr_4 [i_0] [(unsigned char)10] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1])))))), (((((/* implicit */_Bool) (-(8910825708585128138ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_2))))) : ((-(arr_2 [4U] [i_2])))))));
                }
            }
        } 
    } 
    var_15 *= ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_4)) ? (var_6) : (var_9)))));
}
