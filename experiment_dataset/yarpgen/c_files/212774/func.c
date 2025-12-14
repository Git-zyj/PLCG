/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212774
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) - (arr_1 [i_0])));
        var_13 = ((/* implicit */_Bool) ((unsigned long long int) 1327273128147821676LL));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_14 = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) ^ (((((/* implicit */unsigned long long int) 1767590661U)) | (arr_1 [i_1]))));
            var_15 = ((/* implicit */int) -3321006816094394892LL);
            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (((_Bool)0) ? (1905583179303290097LL) : (((/* implicit */long long int) 140576035U)))))));
            var_17 = ((/* implicit */short) (+((-(((/* implicit */int) arr_2 [i_1]))))));
        }
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) arr_2 [i_0]))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_2))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(6472535983376437858LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_2])) < (456056774))))) : (((((/* implicit */_Bool) 2147483638)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))) : (var_4)))));
        arr_8 [i_2] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_2])) : (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_6 [i_2])) : (97542014))));
        var_21 = ((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_2]))));
        arr_9 [(_Bool)1] |= ((/* implicit */unsigned short) (!(var_3)));
    }
    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
    {
        arr_12 [i_3] = ((/* implicit */unsigned char) max((arr_11 [(signed char)16]), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-5427))))) ? (((((/* implicit */_Bool) (unsigned short)8164)) ? (((/* implicit */int) arr_10 [i_3])) : (arr_11 [i_3]))) : (((/* implicit */int) arr_10 [i_3]))))));
        var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) arr_7 [i_3] [i_3])) : (((/* implicit */int) arr_6 [i_3])))) == (max((((int) -6010850982236828916LL)), (((/* implicit */int) arr_6 [i_3]))))));
    }
    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
    {
        var_23 += ((/* implicit */int) var_0);
        var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -3321006816094394892LL))));
    }
    var_25 = ((/* implicit */signed char) (((_Bool)1) ? (((max((var_3), ((_Bool)1))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_5)))) : ((~(((/* implicit */int) var_1)))))) : (((/* implicit */int) var_8))));
}
