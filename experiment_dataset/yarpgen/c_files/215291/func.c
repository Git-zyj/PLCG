/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215291
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
    var_17 = var_0;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    var_18 = ((/* implicit */long long int) min((var_18), (arr_3 [i_1])));
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((arr_5 [14LL] [i_1] [i_0]) - (((((/* implicit */_Bool) ((arr_1 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_5 [10] [10] [i_2])))) : (max((var_12), (arr_5 [i_0] [i_1] [i_0]))))))))));
                    var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [1ULL] [0U] [i_2]))))))))));
                }
                var_21 = ((/* implicit */unsigned char) (((~(var_11))) & (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) & (var_11)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)58213))));
                    var_23 -= ((/* implicit */signed char) ((((1466329505118001913LL) - (((/* implicit */long long int) var_10)))) ^ ((+(3447899286525140705LL)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        arr_15 [i_0] [i_1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_12 [i_0] [i_0] [i_3])));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_4])) ? (arr_8 [i_0] [i_1] [i_3]) : (var_0)));
                    }
                }
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                {
                    arr_20 [i_1] [i_1] = ((/* implicit */signed char) ((((-1466329505118001916LL) + (9223372036854775807LL))) >> (((16515733832631089679ULL) - (16515733832631089657ULL)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_18 [i_0] [i_1] [i_5] [i_1]) + (arr_18 [i_6] [2LL] [i_1] [(short)4])))) ? (((arr_18 [i_0] [i_0] [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_1])))));
                        var_26 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_19 [i_0] [7ULL] [i_5])) ^ (((/* implicit */int) var_3)))) | (((/* implicit */int) max(((unsigned short)9904), (((/* implicit */unsigned short) arr_6 [i_0] [i_0] [7LL])))))))), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) ^ (((16515733832631089680ULL) ^ (4279429422086849322ULL)))))));
                        arr_25 [i_0] [i_1] [i_1] [i_1] [i_1] [i_6] = ((/* implicit */unsigned int) (unsigned char)216);
                    }
                    for (short i_7 = 2; i_7 < 17; i_7 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)86)), (var_13)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_0] [i_5] [(unsigned char)9])) ? (var_8) : (4053387566U)))) : (((var_15) - (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [(unsigned char)13] [i_0])))))))) : (min((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */long long int) var_2)))))))));
                        var_28 = ((/* implicit */long long int) (-(((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_22 [i_0] [(unsigned char)13] [i_0] [i_0] [(short)15] [i_0]))) - (((/* implicit */unsigned long long int) arr_17 [i_7 - 1] [10ULL] [i_7] [i_7]))))));
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_5] [i_7 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_7 + 2] [i_7 + 2] [i_7] [i_7] [i_7] [(unsigned char)19]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((1931010241078461937ULL), (965370163953707919ULL)))))))));
                        arr_28 [i_0] [i_0] [18U] [i_5] [i_7 - 1] [i_0] = ((/* implicit */unsigned int) arr_23 [(signed char)12] [(signed char)12] [i_7]);
                    }
                }
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) (~(arr_14 [i_8] [i_0] [15U] [i_0])))) : (((unsigned long long int) var_11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [i_0] [i_8]))) + (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_13 [i_0] [i_0] [16ULL] [i_8])))))) : (((((arr_24 [17ULL] [i_8] [i_8] [i_0] [i_0] [i_8]) | (var_7))) & (var_7))))))));
                    arr_33 [i_1] [i_8] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_16 [12U] [i_8])) : (((/* implicit */int) arr_4 [i_0]))))) ? (((long long int) arr_13 [i_0] [i_0] [i_8] [i_8])) : ((~(var_13)))))) ? (((/* implicit */int) ((17682013947763727680ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26909)))))) : ((-(((/* implicit */int) (unsigned short)58092))))));
                }
                var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) arr_4 [i_0]))));
            }
        } 
    } 
}
