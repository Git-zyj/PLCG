/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39663
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_11 |= ((/* implicit */long long int) var_2);
        var_12 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [(short)0] [i_0]))))), (max((var_5), (((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_0 + 2]))))));
        arr_2 [i_0 + 2] &= (unsigned char)72;
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_13 -= ((/* implicit */int) ((unsigned int) (-(((/* implicit */int) (signed char)101)))));
        arr_6 [14U] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */int) (unsigned char)16)) : ((-2147483647 - 1))));
        /* LoopSeq 2 */
        for (short i_2 = 3; i_2 < 19; i_2 += 3) 
        {
            arr_9 [i_2] [i_2] = ((/* implicit */int) arr_0 [i_1] [i_2]);
            arr_10 [i_2] [i_2] [(unsigned short)5] = ((/* implicit */short) (+(((/* implicit */int) var_1))));
        }
        for (unsigned char i_3 = 2; i_3 < 20; i_3 += 1) 
        {
            arr_14 [i_1] [(unsigned short)3] [i_3] = ((/* implicit */unsigned long long int) ((var_10) + (((/* implicit */long long int) arr_12 [i_3] [i_3] [i_3]))));
            var_14 -= ((short) arr_4 [i_1 - 1] [i_1]);
            var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10186517731920644178ULL)) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)255))))) && (((/* implicit */_Bool) arr_13 [i_1 - 2]))));
        }
        arr_15 [i_1 - 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */int) arr_13 [i_1 + 1])) : (((/* implicit */int) arr_11 [i_1 - 2]))));
    }
    for (unsigned short i_4 = 2; i_4 < 19; i_4 += 4) /* same iter space */
    {
        var_16 -= ((/* implicit */long long int) ((unsigned int) (+(((((/* implicit */_Bool) arr_5 [i_4])) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)-78)))))));
        arr_18 [i_4 - 2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-27311))) ^ (-8921747415584103801LL)))))))) < (min((arr_5 [i_4 + 1]), (((/* implicit */unsigned long long int) max(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)18)))))))));
    }
    var_17 = ((/* implicit */long long int) (((+(((var_5) << (((((/* implicit */int) var_2)) + (16627))))))) >= (((/* implicit */unsigned long long int) ((unsigned int) ((unsigned short) var_10))))));
}
