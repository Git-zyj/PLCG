/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22688
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
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_16 &= ((/* implicit */unsigned long long int) var_2);
        arr_3 [(signed char)15] [i_0] = ((/* implicit */signed char) (short)32741);
    }
    for (unsigned int i_1 = 4; i_1 < 21; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [9LL] = ((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */unsigned long long int) 2304628602U)), (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_0 [i_1] [i_1]) : (4034162072481230046ULL))))));
        arr_7 [i_1 - 1] = ((/* implicit */long long int) max((max((arr_4 [i_1 + 1] [i_1 - 4]), (arr_4 [i_1] [i_1 - 4]))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_15)))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 1) 
    {
        var_17 *= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_5))))), (((long long int) (short)4301))));
        var_18 = ((/* implicit */short) min((arr_5 [(signed char)2] [i_2 + 2]), (((/* implicit */unsigned short) arr_1 [i_2]))));
        arr_11 [i_2] = -2051465114157299576LL;
    }
    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((34112173U) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))), (((((/* implicit */_Bool) (unsigned short)44072)) ? (4034162072481230055ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21644))))))))));
        arr_14 [5ULL] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (((var_12) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [2]))))) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)(-127 - 1)), (var_5))))))) + (((/* implicit */long long int) ((/* implicit */int) max((arr_8 [0U] [i_3]), (arr_8 [(_Bool)0] [i_3])))))));
    }
    var_20 = ((/* implicit */_Bool) ((signed char) var_3));
    /* LoopSeq 2 */
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        arr_17 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)128)) & (((/* implicit */int) ((((/* implicit */int) (signed char)45)) < (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_1 [i_4])))))))));
        arr_18 [i_4] = ((/* implicit */int) arr_10 [i_4] [(_Bool)1]);
    }
    for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10359612560301681229ULL))))) ? (((/* implicit */int) (short)27832)) : (((/* implicit */int) (signed char)-34))));
        arr_21 [i_5] [i_5] = ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_6) : (arr_16 [i_5])));
        var_22 = ((/* implicit */unsigned int) arr_9 [i_5] [i_5]);
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (arr_1 [i_5])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1073741823ULL)) ? (max((277565598U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) var_3))))) : (min((((/* implicit */long long int) (_Bool)1)), (4949468781555287079LL)))));
    }
}
