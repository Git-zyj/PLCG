/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32018
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
    var_13 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_2));
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_10)))) ? (((((/* implicit */int) (unsigned short)40790)) % (((/* implicit */int) var_11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40790))) : (var_3))))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_15 = arr_0 [i_0] [i_0];
        var_16 = ((/* implicit */long long int) ((arr_0 [i_0] [14LL]) < (min((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [i_0] [i_0])))));
    }
    for (long long int i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */long long int) max((var_17), (((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_1 + 1]))))) + (((long long int) arr_2 [i_1 + 2]))))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                arr_8 [(unsigned short)10] [i_3] = ((/* implicit */unsigned short) max(((((~(var_10))) ^ ((~(308871389651158227LL))))), (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40790))) : (((((/* implicit */_Bool) arr_3 [3LL])) ? (-4433911494642582458LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
                var_18 = ((/* implicit */unsigned short) -22LL);
            }
            arr_9 [i_1 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_0 [i_1 - 1] [15LL]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_6 [i_1 + 2])) - (8687)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_0))) | (arr_0 [i_1 + 2] [19LL]))) : (((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 1]))) : (-9LL)))));
        }
        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
        {
            arr_12 [i_4] [i_4] [i_1] = max((((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (3626034878083510935LL)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_8))))))));
            var_19 += var_4;
        }
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) ((0LL) == (1688780334712397068LL))))) > (min((arr_10 [18LL] [i_1]), (var_2))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)65516))))) : (min((-1867720010410815856LL), ((+(var_9))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            var_21 = ((/* implicit */long long int) var_5);
            /* LoopSeq 1 */
            for (long long int i_6 = 1; i_6 < 18; i_6 += 2) 
            {
                var_22 = (-(var_10));
                arr_18 [i_6] = ((/* implicit */unsigned short) (-(arr_10 [(unsigned short)12] [i_1 - 1])));
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(6265082830184272388LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_13 [i_1 - 1] [i_1] [i_1]))))) : (((((/* implicit */_Bool) (unsigned short)56720)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38241))) : (var_3)))));
            }
            var_24 += ((/* implicit */unsigned short) 6265082830184272394LL);
        }
    }
}
