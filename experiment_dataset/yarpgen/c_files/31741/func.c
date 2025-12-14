/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31741
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            var_10 = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_2 [i_1 - 1] [i_1 - 1])), (var_5)));
            arr_4 [(unsigned short)12] = arr_0 [(unsigned short)18];
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [(short)9])) * (((int) min((21ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
        }
        var_11 = ((/* implicit */_Bool) max((var_11), ((!(((/* implicit */_Bool) ((var_8) / (((((/* implicit */_Bool) -172030124)) ? (((/* implicit */int) var_7)) : (-172030151))))))))));
        var_12 |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) -172030124)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-55))) : (var_5))), (((((/* implicit */_Bool) -172030136)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55297))) : (var_0)))));
    }
    for (int i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [7])) || (((/* implicit */_Bool) arr_8 [(signed char)17]))))) - (((/* implicit */int) ((((/* implicit */unsigned int) var_6)) <= (var_9)))))) >> (((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))))), (var_3))) - (1613774539U)))));
        arr_10 [i_2] [i_2] = ((/* implicit */short) arr_7 [i_2] [i_2]);
        arr_11 [(unsigned char)7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 172030106)) ? (((883158502U) << (((/* implicit */int) (unsigned char)23)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)4095)))))) ? (arr_1 [i_2]) : (((((/* implicit */_Bool) max((arr_1 [(signed char)2]), (var_9)))) ? (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))) : (arr_1 [i_2]))) : (max((((/* implicit */unsigned int) var_7)), (var_9)))))));
        arr_12 [2] = ((/* implicit */signed char) ((((((7128114352624981777LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)52))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))))) ? (((((/* implicit */_Bool) arr_3 [8ULL])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_3 [i_2])))) : (((/* implicit */int) arr_3 [i_2]))));
    }
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            {
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) (unsigned char)30))))) ? (arr_16 [i_3] [i_3]) : (((((((/* implicit */_Bool) arr_16 [6ULL] [(unsigned short)10])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4] [(signed char)22]))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3])))))));
                var_14 = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) var_9)) ? (arr_16 [(unsigned short)18] [13]) : (arr_16 [i_3] [(_Bool)1]))), (var_0))), (max((((arr_16 [(short)3] [11]) * (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) ((_Bool) arr_15 [i_3])))))));
            }
        } 
    } 
    var_15 ^= ((/* implicit */long long int) var_8);
}
