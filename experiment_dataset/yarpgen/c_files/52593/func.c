/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52593
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
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_13 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 - 1])) ? (var_1) : (((/* implicit */int) var_5))));
        arr_2 [i_0] = (signed char)26;
        var_14 = ((/* implicit */unsigned long long int) (-((+(arr_1 [i_0] [i_0])))));
        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -3371204088713607646LL))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 20; i_2 += 2) 
            {
                for (unsigned short i_3 = 2; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_2] [(unsigned char)4] [i_0] [(unsigned char)4] [i_2] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_0 - 1] [i_3]))));
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) 2962331461U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)61025))))));
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) (short)128)) ? (var_10) : (((/* implicit */int) var_9))))))) ? (max(((~(((/* implicit */int) (signed char)-127)))), (max((2113929216), (((/* implicit */int) (signed char)120)))))) : (((/* implicit */int) (((~(113736534))) > (((/* implicit */int) (signed char)-124)))))));
    /* LoopSeq 1 */
    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        var_18 -= ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) (signed char)34)), (arr_11 [i_4])))));
        arr_14 [i_4] [i_4] = (-(var_7));
    }
    var_19 ^= ((/* implicit */signed char) max((2046014542U), (((/* implicit */unsigned int) (signed char)-124))));
}
