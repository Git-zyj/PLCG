/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239128
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
    var_12 *= ((/* implicit */unsigned long long int) var_4);
    var_13 = ((/* implicit */short) ((_Bool) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (4048415475U)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) min((17592152489984ULL), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 19)), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) 1033588270)) : (1077471513420880409LL))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) 7384356966871772780ULL);
            var_14 += ((/* implicit */short) (-(arr_6 [i_1] [i_1] [i_0])));
            arr_8 [i_0] = ((/* implicit */short) var_0);
            var_15 = ((/* implicit */short) (+(((((/* implicit */_Bool) 7384356966871772780ULL)) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) (unsigned char)0))))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            arr_11 [i_0] [i_0] = ((/* implicit */int) (unsigned char)164);
            arr_12 [i_0] [i_2] = ((/* implicit */long long int) ((1077471513420880409LL) == (((/* implicit */long long int) 11U))));
            arr_13 [i_0] [i_2] [i_0] = ((/* implicit */long long int) (-(7384356966871772780ULL)));
            arr_14 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (11062387106837778854ULL) : (((/* implicit */unsigned long long int) arr_9 [i_0]))))));
        }
        for (short i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            var_16 -= ((/* implicit */short) (-(4144674508U)));
            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */long long int) 260046848U);
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_17 [i_0] [i_3]))));
            var_18 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_3])) ? (((/* implicit */unsigned long long int) min((arr_9 [i_0]), (arr_0 [i_0])))) : (((((/* implicit */unsigned long long int) 2296178895U)) + (7384356966871772781ULL))))))));
            var_19 = ((/* implicit */unsigned char) ((unsigned int) max((((((/* implicit */_Bool) arr_1 [i_0] [i_3])) ? (arr_9 [i_3]) : (((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) 10))))))));
        }
        arr_19 [i_0] = ((/* implicit */unsigned int) -9223372036854775805LL);
    }
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
    {
        arr_22 [i_4] = min((((/* implicit */unsigned int) max((((short) 1343149334U)), ((short)32767)))), (((((/* implicit */_Bool) arr_16 [6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)18] [(unsigned char)18]))) : (3U))));
        var_20 = ((/* implicit */unsigned int) ((long long int) (+((~(((/* implicit */int) (unsigned char)214)))))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_9))));
    }
}
