/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245061
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
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65535))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (var_5) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_15)) : (var_10))))))) && (((((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 2])))))));
        var_18 = ((/* implicit */int) (short)-1);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            var_19 = ((((/* implicit */_Bool) arr_5 [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (4206690197U));
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)2)) * (((/* implicit */int) arr_7 [i_0] [i_1]))))) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [4ULL])))))));
        }
        for (short i_2 = 2; i_2 < 11; i_2 += 1) /* same iter space */
        {
            arr_11 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((arr_0 [i_0 + 1] [i_0 - 2]), (((/* implicit */unsigned int) (unsigned short)4095))))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (arr_10 [i_2]) : (((/* implicit */int) (unsigned char)213))))) : (((((/* implicit */_Bool) (signed char)7)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned short)65535)))) & (((int) var_2)))))));
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (unsigned short)65507)))))) ? (((/* implicit */int) var_7)) : ((~((~(((/* implicit */int) (short)-1))))))));
            /* LoopNest 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 1) 
                {
                    {
                        arr_17 [i_2] [i_2] [i_3] [(unsigned short)4] [i_4] [i_4] = ((/* implicit */short) (-(((/* implicit */int) var_13))));
                        var_22 = ((/* implicit */signed char) (~(((int) (_Bool)1))));
                    }
                } 
            } 
            var_23 = max((((((/* implicit */int) (short)-1)) / (((/* implicit */int) (unsigned short)2)))), ((-(((/* implicit */int) (unsigned short)61441)))));
        }
        for (short i_5 = 2; i_5 < 11; i_5 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned short) ((signed char) arr_16 [13U] [i_0] [i_0] [i_0] [i_5 + 3] [i_5]));
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                var_25 -= ((/* implicit */signed char) (~(5711913780400305076LL)));
                var_26 = ((/* implicit */unsigned int) var_7);
            }
            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned short)2]))) : (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3))) : (((140737488355327ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 1])))))))) ? (((/* implicit */unsigned long long int) (+(var_0)))) : (max((((/* implicit */unsigned long long int) arr_16 [i_0 + 1] [i_5] [5U] [(unsigned char)9] [i_5] [i_5 - 1])), (((unsigned long long int) (short)-16)))))))));
        }
        var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 + 1])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_18 [i_0 + 1])) : (var_1))) : (arr_10 [(short)6])))) / ((+((~(8776941054408588949ULL)))))));
    }
    var_29 = ((/* implicit */unsigned char) var_2);
    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? ((-(var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
    var_31 |= ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned short)4088)) & (-1))))))));
}
