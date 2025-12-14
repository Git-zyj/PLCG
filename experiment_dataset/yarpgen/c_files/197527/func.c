/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197527
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
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) -1273167929359846669LL))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) & (((long long int) 18446744073709551615ULL))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (1810898330U)))) ? ((~(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 1736922530327210122LL))))))) ? (((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) var_2))))) : (max((((/* implicit */long long int) arr_0 [i_0])), (var_3)))));
        var_13 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */long long int) -1121885196)) : (1048448LL))));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) ((unsigned char) 1220361141));
        var_15 = ((/* implicit */unsigned long long int) ((((_Bool) (short)-512)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1]))))) ? (((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) 1179431332U)) < (12134273558940939565ULL)))), ((signed char)15)))))));
    }
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) (_Bool)0)), (max((((/* implicit */long long int) (short)15878)), (8008770886962264775LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) (short)-15892))))) ? (((/* implicit */int) arr_0 [i_2])) : ((~(((/* implicit */int) (signed char)0)))))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            for (signed char i_4 = 1; i_4 < 16; i_4 += 3) 
            {
                for (unsigned short i_5 = 2; i_5 < 17; i_5 += 1) 
                {
                    {
                        arr_17 [i_2] [i_3] [i_5] [i_4] [i_5 + 1] = ((/* implicit */unsigned int) max((max((((-6725741976368832992LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19))))), (((/* implicit */long long int) (signed char)-55)))), (((/* implicit */long long int) ((arr_16 [i_5 + 2] [i_5 - 1] [i_5 + 1] [i_5 + 2] [i_5 - 1] [i_5]) ? (1588594232) : (((/* implicit */int) arr_16 [i_5 + 2] [i_5 - 1] [i_5] [i_5] [i_5 - 2] [i_5 + 2])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3623309442797683798ULL)) ? (1928158371) : (((((/* implicit */_Bool) (signed char)38)) ? (3) : (((/* implicit */int) arr_5 [i_4]))))));
                            var_18 = ((/* implicit */unsigned long long int) ((504403158265495552LL) < (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))));
                            var_19 = ((/* implicit */unsigned short) (signed char)53);
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) ? (4142326134U) : (((unsigned int) 524529337))));
                            var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) 9223372036854775807LL)))));
                        }
                    }
                } 
            } 
        } 
        arr_20 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)18)) & ((+(((/* implicit */int) (!((_Bool)0))))))));
    }
    var_22 -= ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) (unsigned char)0)))));
}
