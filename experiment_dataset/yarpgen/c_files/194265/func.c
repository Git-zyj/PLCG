/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194265
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (-(144115188075855871LL))))));
                var_21 = ((int) min((arr_3 [i_0]), (((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_1])) < (-2040985119))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_3 [i_2]))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) 16383U))));
    }
    /* vectorizable */
    for (short i_3 = 2; i_3 < 19; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            var_24 = ((/* implicit */unsigned char) ((short) ((((/* implicit */unsigned long long int) var_6)) >= (arr_5 [i_3]))));
            arr_13 [i_3 - 1] [i_3] [i_3] = ((/* implicit */unsigned int) arr_10 [i_4] [i_4]);
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_1 [i_4]))));
            var_26 = ((/* implicit */signed char) ((short) (~(((/* implicit */int) (signed char)(-127 - 1))))));
        }
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)153)))));
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) arr_0 [i_3] [i_3]))));
        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (unsigned short)32327))));
        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((unsigned char) (short)-29430)))));
    }
    for (signed char i_5 = 2; i_5 < 6; i_5 += 4) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((((/* implicit */_Bool) ((long long int) (short)32761))) ? (((/* implicit */unsigned long long int) (-(min((4294967294U), (((/* implicit */unsigned int) (signed char)50))))))) : (((((/* implicit */_Bool) max((((/* implicit */short) arr_6 [i_5])), (var_5)))) ? (((((/* implicit */_Bool) 1829357211)) ? (arr_9 [(signed char)2] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (-3767817112165080574LL))))))))));
        var_32 = ((short) min((((/* implicit */int) (unsigned short)65340)), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)-32761)) : (((/* implicit */int) (unsigned short)16807))))));
        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2787567788U)) && (((/* implicit */_Bool) (signed char)28)))))));
    }
    /* vectorizable */
    for (signed char i_6 = 2; i_6 < 6; i_6 += 4) /* same iter space */
    {
        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) 1760978380)) ? (((/* implicit */unsigned int) -299471124)) : (3903381186U)))))));
        var_35 = ((/* implicit */unsigned long long int) ((unsigned short) arr_9 [i_6 - 2] [i_6 + 3]));
        arr_18 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_9 [i_6] [i_6]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-29)))))) ? (((/* implicit */long long int) arr_11 [i_6] [i_6 - 1])) : (var_6)));
        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) 6687220463079576440ULL))));
    }
}
