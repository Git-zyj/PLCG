/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36084
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0))))) & (min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) | (arr_0 [i_0] [i_0]))), (((unsigned int) 2883413912U))))));
        var_17 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0])) < (((/* implicit */int) arr_1 [(unsigned char)20] [(unsigned char)20])))));
        var_18 = ((/* implicit */unsigned int) (unsigned char)254);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)25))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 907953983U))))) : (((/* implicit */int) (unsigned char)28))));
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [(unsigned char)10])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_1]))));
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1] [i_2])) / (((/* implicit */int) arr_6 [i_1] [i_1]))));
            var_21 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) != ((~(var_10)))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_0 [(unsigned char)19] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) && (((/* implicit */_Bool) ((unsigned int) arr_4 [i_2])))));
        }
        for (unsigned int i_3 = 4; i_3 < 24; i_3 += 4) /* same iter space */
        {
            var_23 = ((((/* implicit */_Bool) (unsigned char)31)) ? (((((/* implicit */_Bool) 503758950U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_0))) : (arr_3 [i_1]));
            arr_11 [(unsigned char)18] [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_3 - 2])) || (((/* implicit */_Bool) arr_4 [i_3 - 1]))));
            var_24 = ((/* implicit */unsigned char) var_12);
        }
        for (unsigned int i_4 = 4; i_4 < 24; i_4 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned char) ((unsigned int) arr_14 [i_4 - 3]));
            var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)254))));
            arr_16 [i_1] [i_4 - 2] = ((/* implicit */unsigned int) ((unsigned char) ((13U) >= (40225124U))));
        }
    }
    /* LoopSeq 2 */
    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        var_27 = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_17 [(unsigned char)9])) >> (((/* implicit */int) min(((unsigned char)25), (arr_14 [i_5]))))))));
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (((-(((/* implicit */int) min((var_9), ((unsigned char)234)))))) != ((-(((/* implicit */int) ((arr_18 [6U]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))))));
    }
    for (unsigned char i_6 = 2; i_6 < 8; i_6 += 4) 
    {
        var_29 |= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((arr_12 [i_6] [i_6] [17U]), (((/* implicit */unsigned int) var_7))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_6 - 1])))))));
        var_30 = ((/* implicit */unsigned char) 0U);
    }
}
