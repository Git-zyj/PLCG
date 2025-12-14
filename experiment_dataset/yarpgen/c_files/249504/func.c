/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249504
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
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (+(var_13))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) 448339770U);
        var_17 = (~(((/* implicit */int) ((unsigned char) ((unsigned char) (unsigned char)62)))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)10)) ? (3765701890U) : (((/* implicit */unsigned int) -1356681243))));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0])) << (((((/* implicit */int) ((unsigned char) ((unsigned char) (short)25594)))) - (245)))));
            var_20 -= ((/* implicit */unsigned char) ((((_Bool) var_7)) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */int) arr_2 [i_0]))))), (max((3213890599058093830ULL), (16331880095656861344ULL))))) : (((/* implicit */unsigned long long int) min((-2085047888608014800LL), (((/* implicit */long long int) 3528142304U)))))));
        }
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) /* same iter space */
        {
            arr_10 [i_0] [i_0] [i_2 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1845950956)) ? (min(((-(((/* implicit */int) var_7)))), (((/* implicit */int) (unsigned char)197)))) : (((/* implicit */int) (unsigned char)56))));
            arr_11 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3846627526U))))), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)204))))), (((((/* implicit */_Bool) (unsigned char)135)) ? (3031701686350640476ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_2 + 1])))))))));
            arr_12 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) arr_9 [i_0] [i_2] [i_0]);
        }
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21))) : (3573995933U)));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 3; i_4 < 18; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                {
                    arr_21 [i_4] [i_4 + 1] = ((/* implicit */int) ((arr_17 [i_4] [i_4 - 2] [i_4 - 1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115)))));
                    var_22 = ((/* implicit */unsigned char) 4294967293U);
                }
            } 
        } 
        arr_22 [i_3] &= ((/* implicit */short) (+(((/* implicit */int) (unsigned char)14))));
    }
}
