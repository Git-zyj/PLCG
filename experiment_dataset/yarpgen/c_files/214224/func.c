/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214224
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                arr_9 [3] [(_Bool)1] = arr_1 [i_0] [i_1];
                arr_10 [i_2] = ((/* implicit */short) (_Bool)0);
                var_14 = ((/* implicit */long long int) arr_6 [i_1] [(short)14]);
            }
            for (int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                arr_14 [i_0] [i_1] = ((/* implicit */int) (~(var_1)));
                arr_15 [(short)10] [(signed char)3] [i_1] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (~(arr_1 [i_0] [(short)2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) arr_12 [i_1] [i_3])) ? (0) : (((/* implicit */int) (signed char)52)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5233)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)238))))))))));
            }
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                var_15 = ((/* implicit */unsigned int) var_1);
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)12679))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7047869621252341298LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60303))) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                arr_18 [13LL] [i_1] [i_1] = ((/* implicit */signed char) arr_0 [i_4]);
                var_17 = ((/* implicit */short) max(((unsigned short)8191), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [(short)5] [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (signed char)120))))) <= (2234351394U))))));
            }
        }
        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            arr_21 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0]), (arr_2 [i_0])))) ? (((/* implicit */int) min((arr_2 [(short)1]), (arr_2 [i_0])))) : (((/* implicit */int) var_0))));
            var_18 = ((/* implicit */long long int) (((_Bool)1) ? ((-(((/* implicit */int) arr_5 [i_0] [i_5])))) : (((/* implicit */int) (unsigned char)93))));
            arr_22 [i_5] [i_5] = ((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) (unsigned short)1)))));
        }
        arr_23 [i_0] = ((((/* implicit */_Bool) (unsigned short)1)) ? ((~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
    }
    var_19 = ((/* implicit */short) ((var_4) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60314)))));
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13495))))) : (((/* implicit */int) max(((unsigned short)57345), ((unsigned short)57330))))))) ? (9007199254740991LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) min((var_8), (((/* implicit */unsigned short) (short)-17575)))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_3))))));
}
