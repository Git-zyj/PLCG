/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227017
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
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((2757644368345839258LL), (((/* implicit */long long int) var_4))))) ? ((+(var_15))) : ((+(2147483647)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((var_5) - (1576563169)))))) ? (1965413815) : (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) (signed char)-37)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0 - 1]) / (arr_1 [i_0] [i_0 + 2])))) ? (arr_1 [i_0] [i_1]) : (min((((((/* implicit */int) var_13)) - (arr_6 [i_0] [17U] [i_0]))), (((/* implicit */int) var_2))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_4 [i_0 + 4] [i_0 + 3] [i_0] [i_0 + 4])) ? (309757451023783540LL) : (((/* implicit */long long int) 55945023U)))), (((/* implicit */long long int) max((arr_4 [i_0 - 1] [(_Bool)1] [i_0] [i_0 + 3]), (((/* implicit */int) (signed char)127)))))));
                    arr_8 [i_2] [i_1] [i_0] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_1]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                var_19 = ((unsigned int) ((((/* implicit */unsigned long long int) ((var_11) >> (((((/* implicit */int) arr_13 [i_0 + 2])) - (33078)))))) - (((arr_5 [i_3] [i_3] [17] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96)))))));
                var_20 = ((/* implicit */signed char) min(((~(var_5))), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) arr_0 [i_4]))))) > (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) -968674457)) : (2757644368345839258LL))))))));
                var_21 = ((/* implicit */short) max((((/* implicit */long long int) ((unsigned char) ((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))), (((max((5538833308731960857LL), (((/* implicit */long long int) var_10)))) - (((/* implicit */long long int) (+(((/* implicit */int) (short)-8192)))))))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) 3098076153U);
                var_22 = ((/* implicit */unsigned int) ((long long int) ((arr_5 [i_3] [i_0 + 3] [i_0 + 3] [i_0 + 3]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20991))))));
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_16 [i_5]))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                arr_21 [i_0] [i_0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(var_5)))) ^ (((arr_9 [i_0 + 3] [i_0 - 1] [i_0]) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)60)))))));
                var_24 = ((short) (+(-171324409)));
                arr_22 [(_Bool)1] [i_3] [i_6] |= ((/* implicit */int) ((unsigned int) (~(932991611))));
            }
            var_25 -= ((/* implicit */_Bool) (((+(((/* implicit */int) min((var_16), (((/* implicit */short) var_12))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
        }
    }
}
