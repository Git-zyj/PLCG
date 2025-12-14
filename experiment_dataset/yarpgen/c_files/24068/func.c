/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24068
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
    var_15 = ((/* implicit */short) (~(2634808745U)));
    var_16 = ((/* implicit */short) (signed char)2);
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_13))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_18 &= ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) 2572729616U)) ? (1660158550U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-39))))));
        var_19 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))), (min((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (var_5)))));
        var_20 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))) ^ (arr_1 [i_0]));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max(((unsigned short)49152), (((/* implicit */unsigned short) (short)-28185)))))));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((~(48145048U))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_11)), (var_1))))))) ? (((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) arr_0 [i_1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3326719639U))))))) : ((~(((/* implicit */int) arr_2 [i_1] [i_1]))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 3; i_2 < 20; i_2 += 3) 
        {
            var_23 &= ((/* implicit */short) max((((unsigned int) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [i_1]))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1] [i_2 - 1])) && (((/* implicit */_Bool) 971343856U)))))) > (((((/* implicit */_Bool) var_0)) ? (var_5) : (0U))))))));
            arr_10 [i_2] [(unsigned char)7] = ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_2]))));
        }
    }
    for (short i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_4 = 2; i_4 < 22; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) (short)(-32767 - 1));
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_2 [i_4 - 1] [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4 - 1] [i_4 - 1]))) : (arr_9 [i_4 - 2] [i_4 - 1] [i_4 + 1]))))))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2022807057U)) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) (short)6171))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-19545), ((short)(-32767 - 1)))))) : ((~(102350160U)))))) ? ((-(((/* implicit */int) (short)480)))) : (((/* implicit */int) min((arr_5 [i_3]), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-16384))) < (arr_17 [(unsigned char)16] [(unsigned char)16] [i_3] [i_3])))))))));
    }
}
