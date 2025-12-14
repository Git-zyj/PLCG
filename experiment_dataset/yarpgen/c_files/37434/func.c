/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37434
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) (short)-20749);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (6510226813770207294ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0])))));
            var_21 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)-8676)) ? (arr_0 [i_0]) : (((/* implicit */long long int) 2664243473U))))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (short)27)) ? (((((/* implicit */_Bool) (signed char)-9)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_7 [i_0] [i_1])))) : (((/* implicit */long long int) 1111795364))));
                        var_23 = ((/* implicit */long long int) 1725362409);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
            {
                arr_15 [(unsigned short)7] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (unsigned short)0))) ? (((/* implicit */int) ((short) 2344566736U))) : ((~(((/* implicit */int) arr_13 [i_4] [i_0] [i_0] [i_0]))))));
                var_24 = ((/* implicit */unsigned short) 1111795372);
                arr_16 [(unsigned short)9] [i_0] [i_0] [i_0] = ((/* implicit */short) ((arr_0 [i_0]) == (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_0] [i_4])))))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
            {
                arr_19 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) (unsigned short)65528))))));
                var_25 = ((/* implicit */long long int) ((unsigned char) arr_3 [i_0] [i_0] [i_0]));
            }
            arr_20 [i_0] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(1111795361))))));
        }
    }
    var_26 = ((/* implicit */short) (+(18446744073709551612ULL)));
}
