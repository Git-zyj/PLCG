/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36359
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)37079))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)14))))) | (((((var_5) + (9223372036854775807LL))) >> (((-67108864) + (67108895)))))));
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (~(((3160083419U) >> (((arr_1 [i_0]) - (9274651279550799986ULL))))))))));
    }
    var_12 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 4 */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_13 = ((/* implicit */_Bool) var_9);
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((((((((/* implicit */int) var_6)) + (-106623122))) + (2147483647))) << (((((((((/* implicit */long long int) 0U)) + (-7088482700404185896LL))) + (7088482700404185925LL))) - (29LL))))) * (((/* implicit */int) var_7)))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_2] [i_2])) <= (((/* implicit */int) arr_2 [(_Bool)1] [i_2]))));
        arr_9 [i_2] [13LL] = 1937683429559353449LL;
        var_16 = ((/* implicit */signed char) var_8);
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2])))));
    }
    for (unsigned int i_3 = 3; i_3 < 24; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((7976365822318304159LL) << (((((-7976365822318304160LL) + (7976365822318304211LL))) - (51LL)))))) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) (unsigned char)244))));
        var_18 = ((/* implicit */signed char) ((unsigned long long int) var_6));
        var_19 = ((/* implicit */unsigned long long int) ((int) (short)4085));
    }
    for (unsigned short i_4 = 4; i_4 < 7; i_4 += 4) 
    {
        var_20 = ((/* implicit */_Bool) ((signed char) var_2));
        var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 15771477804613497832ULL))))) >> ((((-(((/* implicit */int) var_1)))) + (14633)))))) ? (((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) arr_10 [i_4] [i_4])) : (((/* implicit */int) (short)-4080))))) ? (((((/* implicit */_Bool) (unsigned short)59461)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-3099915704448007225LL))) : (((/* implicit */long long int) arr_7 [i_4 + 3] [i_4 + 3])))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_1 [i_4 - 1]))))))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) (+(1972516582)))) - (var_5)));
    }
    var_23 = ((/* implicit */_Bool) var_5);
}
