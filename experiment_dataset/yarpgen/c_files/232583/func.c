/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232583
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
    var_12 = ((/* implicit */unsigned int) (-(764104177181775665LL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_13 += ((arr_0 [i_0] [i_0]) != (arr_0 [i_0] [i_0]));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] = (!(((/* implicit */_Bool) arr_1 [i_1 + 1])));
            var_14 ^= ((/* implicit */unsigned char) var_0);
            var_15 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1])) || (((/* implicit */_Bool) 72057559678189568ULL))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) var_7);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))))));
                            var_17 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) ((signed char) 3U)))));
                            var_18 += ((/* implicit */long long int) (-((-(arr_14 [12] [i_4] [i_4] [i_0])))));
                        }
                    } 
                } 
            } 
            arr_18 [i_0] = (((+(var_10))) != (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)13)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [(_Bool)1])))))));
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)10122)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (_Bool)1)))) <= (((((/* implicit */int) var_11)) & (((/* implicit */int) arr_5 [(short)14])))))))));
            var_20 = ((/* implicit */long long int) max((var_20), (-6890474093094130264LL)));
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                arr_22 [i_0] [11] [8U] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)10122))) <= (arr_4 [i_0] [(unsigned short)14] [i_6]))))));
                arr_23 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3320408237U)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_6] [i_6])) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) (!((_Bool)1))))));
                var_21 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_10)))) || (((((/* implicit */_Bool) (signed char)28)) && (((/* implicit */_Bool) -1271588076))))));
                arr_24 [i_0] [i_0] [i_2] [i_6] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_20 [i_0]))));
            }
        }
    }
}
