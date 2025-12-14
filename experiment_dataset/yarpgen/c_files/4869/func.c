/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4869
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
    var_11 = ((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) (short)19410)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)19410)) ? (((/* implicit */int) (signed char)71)) : (((/* implicit */int) (short)19410))))))), (min(((~(-7295542022653998641LL))), ((+(var_0)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */_Bool) (+(min((min((-7295542022653998636LL), (-3862038213593912510LL))), (((((/* implicit */_Bool) (signed char)-74)) ? (var_6) : (((/* implicit */long long int) 624145787))))))));
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((((/* implicit */_Bool) (~(arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((326890937U) << (((min((((/* implicit */unsigned long long int) 3169190372U)), (arr_0 [i_0]))) - (3169190342ULL))))))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                arr_8 [i_0] [i_1] [i_2] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) << (((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) - (38616)))))) : (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) << (((((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) - (38616))) - (5845))))));
                var_13 = ((/* implicit */unsigned char) 12423354653029444333ULL);
            }
            var_14 = ((/* implicit */long long int) (signed char)83);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_15 -= ((/* implicit */signed char) arr_0 [i_0]);
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 3968076358U))));
                            arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = 1125776930U;
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned short) ((((((/* implicit */_Bool) 624145787)) ? (((/* implicit */unsigned long long int) 624145787)) : (21ULL))) < (68719476735ULL))));
                            var_17 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])), (arr_9 [i_1]))), (max((arr_9 [i_1]), (arr_9 [i_1])))));
                        }
                    }
                } 
            } 
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)92)) << (((7418431363828989461ULL) - (7418431363828989461ULL)))));
            var_19 = ((/* implicit */signed char) (((+(1125776946U))) > (((/* implicit */unsigned int) max((((/* implicit */int) var_8)), (var_10))))));
        }
    }
    var_20 = ((/* implicit */_Bool) ((-7295542022653998641LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)98)))));
}
