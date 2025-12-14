/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239421
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
    var_16 = min((((/* implicit */long long int) var_15)), ((~(((((/* implicit */_Bool) 12088144493428167275ULL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) (unsigned short)32552)))))) ? (((min((var_9), (((/* implicit */unsigned long long int) (unsigned short)32961)))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)115))))))) : (var_13)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32982)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 2) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 4U))))) == (((/* implicit */int) var_10)))))));
                var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)32984))));
                var_20 = ((/* implicit */unsigned long long int) (unsigned short)32552);
            }
            for (unsigned long long int i_3 = 4; i_3 < 15; i_3 += 2) /* same iter space */
            {
                var_21 = ((short) arr_6 [i_0] [i_1 - 1] [i_3 + 1]);
                arr_10 [10LL] [i_3 + 2] [i_0] [i_0] = ((/* implicit */int) ((min((((((/* implicit */_Bool) (unsigned short)19815)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32541))) : (arr_7 [i_0] [i_0]))), (((/* implicit */long long int) var_10)))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 - 1] [i_3 + 2]))))))));
            }
        }
        var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (419137940U) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))))) < (((/* implicit */unsigned int) ((/* implicit */int) (!((((_Bool)0) && (((/* implicit */_Bool) (short)-29342))))))))));
        var_23 *= ((/* implicit */unsigned int) (-((~(var_8)))));
    }
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) var_8);
                    var_25 = ((/* implicit */short) arr_8 [i_4] [i_5] [i_5]);
                }
            } 
        } 
        var_26 |= ((/* implicit */unsigned int) (~(((((/* implicit */long long int) ((/* implicit */int) (short)29655))) | ((~(-1799888024173055506LL)))))));
    }
}
