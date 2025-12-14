/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194124
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
    var_12 &= max((((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)13)) ? (((/* implicit */unsigned long long int) var_1)) : (730053804065300031ULL)))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -7434619689291621152LL)) ? (4799872967642511318LL) : (1930007429617889445LL))), (((long long int) var_8))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_13 += ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)12)) * (((/* implicit */int) arr_2 [i_0 - 2]))))), ((+(min((3917833095772776964ULL), (((/* implicit */unsigned long long int) (unsigned short)0))))))));
                arr_5 [i_1] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) arr_0 [i_0 + 1])) >= (((/* implicit */int) arr_0 [i_0 - 2]))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) 730053804065300036ULL))) << ((((~(((/* implicit */int) (unsigned short)12)))) + (30)))));
                var_14 += ((((/* implicit */_Bool) ((3353235697692349462ULL) | (17870283321406128128ULL)))) ? ((+((~(1152921504606846720ULL))))) : (15093508376017202157ULL));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned long long int) (unsigned short)224);
                    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)0))));
                    var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 3353235697692349468ULL)) ? (15093508376017202175ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)40500)) / (((/* implicit */int) (unsigned short)57969)))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
                {
                    arr_11 [16ULL] [i_0 - 4] [(unsigned short)13] [i_0 - 4] = (((((+(arr_9 [i_1] [i_1] [(unsigned short)0] [i_1]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)58742)) ? (6445222253759246294LL) : (6954354222979139244LL)))))) / (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)13)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28486)))))) * (((((/* implicit */_Bool) arr_4 [i_1] [i_3])) ? (18446744073709551615ULL) : (var_9))))));
                    arr_12 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((17316156757235153821ULL) / (((/* implicit */unsigned long long int) -477275161757394147LL)))))) ? (((/* implicit */int) (unsigned short)21535)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned short) 14ULL))) : (((/* implicit */int) ((unsigned short) (unsigned short)57596)))))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((13ULL), (9138451278581064896ULL)))) ? (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) (unsigned short)3))))) ? (18ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)1)) << (((-4252076279825709198LL) + (4252076279825709205LL)))))))) : (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (unsigned short)42120)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35135))) : (1824679840500211421LL)))))));
}
