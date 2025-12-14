/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226471
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
    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) 1480539735795993477ULL)))));
    var_14 = ((/* implicit */signed char) max((var_12), (((/* implicit */unsigned short) ((unsigned char) var_11)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [(short)8] = ((/* implicit */signed char) 16966204337913558131ULL);
        arr_4 [i_0] = ((/* implicit */_Bool) ((long long int) min((min((((/* implicit */unsigned short) var_3)), (arr_0 [i_0]))), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)-26868))) > (arr_1 [(unsigned short)12])))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 4; i_2 < 12; i_2 += 1) 
            {
                arr_10 [i_0] [(unsigned char)2] [i_0] = max(((((!(((/* implicit */_Bool) var_5)))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) (unsigned short)20678)))), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_1), ((unsigned short)2047))))))));
                var_15 = 1918205049U;
                var_16 = ((/* implicit */unsigned short) -1577011438);
            }
            arr_11 [i_0] [i_1] = ((/* implicit */long long int) ((1103364859366825160ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) ((18446744073709551614ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(signed char)5]))))))) ? (((/* implicit */int) (short)26867)) : (((/* implicit */int) ((unsigned short) var_1)))));
        }
        for (long long int i_3 = 4; i_3 < 12; i_3 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) min(((+(33554304LL))), (((/* implicit */long long int) arr_12 [(unsigned char)4] [i_3] [i_3 - 3]))));
            var_19 = ((/* implicit */_Bool) var_8);
            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (var_2) : (((/* implicit */long long int) (+(((/* implicit */int) (short)-26867)))))));
        }
        for (long long int i_4 = 4; i_4 < 12; i_4 += 3) /* same iter space */
        {
            arr_17 [i_0] [(signed char)6] [12ULL] = ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_2))), (((/* implicit */long long int) ((signed char) var_0))))), (((((/* implicit */_Bool) max((16966204337913558131ULL), (((/* implicit */unsigned long long int) var_11))))) ? (max((((/* implicit */long long int) var_11)), (var_5))) : (((/* implicit */long long int) ((/* implicit */int) max((var_1), (arr_12 [i_0] [(unsigned short)1] [i_0])))))))));
            var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */unsigned short) (_Bool)1)), (var_6))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [9LL] [i_4])) ? (((/* implicit */int) var_3)) : (-1035208613)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [6LL] [6LL] [6LL]))) < (var_4))))) : (2529387389357285257ULL)))));
            arr_18 [6LL] = ((/* implicit */short) min((((long long int) arr_16 [0] [0] [i_4 - 4])), (((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)104)), (arr_14 [(signed char)0] [12LL] [i_0]))))));
        }
        arr_19 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) max(((short)-26868), (((/* implicit */short) (_Bool)1)))))));
    }
}
