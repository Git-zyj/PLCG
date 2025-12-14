/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193654
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
    var_10 = ((/* implicit */unsigned int) ((short) ((unsigned short) var_3)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_11 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (-(((/* implicit */int) var_0)))))) ? (((int) ((unsigned short) var_0))) : (((/* implicit */int) var_0))));
        arr_2 [i_0] = ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) ((unsigned short) var_6))), (((unsigned long long int) var_5))))));
        var_12 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) min((((/* implicit */unsigned char) var_5)), (var_1)))))));
        var_13 = ((/* implicit */int) min((var_13), ((~((+(((/* implicit */int) ((unsigned short) var_8)))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (~(min(((+(var_4))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (var_2)))))))))));
        var_15 = ((/* implicit */int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (var_4)))) ? (min((((/* implicit */unsigned long long int) var_9)), (var_4))) : (((/* implicit */unsigned long long int) var_6)))), (var_7)));
        var_16 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? (max((268435456), (-268435441))) : (((int) var_1)))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 17; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                {
                    var_17 = ((/* implicit */_Bool) ((int) (~(max((var_2), (((/* implicit */long long int) var_0)))))));
                    var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_0)))), (((int) var_1))))), (((unsigned long long int) ((unsigned int) var_1)))));
                    arr_13 [i_1] [i_1] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (+(var_2)))) ? (var_6) : (((/* implicit */unsigned int) ((int) var_3))))));
                }
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */short) ((_Bool) min(((+(((/* implicit */int) var_8)))), (((/* implicit */int) ((unsigned short) 2147483634))))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) min((((int) var_8)), (((/* implicit */int) var_0))))) ? (min((((/* implicit */unsigned long long int) ((int) var_2))), (min((var_4), (var_7))))) : (((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned short) var_5)), (var_3))))))))));
        arr_16 [4] = ((/* implicit */int) ((long long int) -268435448));
    }
}
