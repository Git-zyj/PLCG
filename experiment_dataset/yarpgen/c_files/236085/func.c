/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236085
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)30083)) >> (((((/* implicit */int) (unsigned short)56322)) & (((/* implicit */int) (unsigned short)31))))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_17))) * (arr_0 [i_0])))));
        arr_4 [(unsigned char)6] |= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)56322)) == (((/* implicit */int) arr_1 [(short)2] [i_0])))))));
        arr_5 [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((((/* implicit */int) arr_1 [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) + (13420)))))) : (((/* implicit */unsigned short) ((((((/* implicit */int) arr_1 [i_0] [i_0])) + (2147483647))) >> (((((((/* implicit */int) arr_1 [i_0] [i_0])) + (13420))) - (8165))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) / (arr_0 [i_0])));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 2; i_2 < 19; i_2 += 1) 
        {
            arr_13 [i_1] [i_1] &= ((/* implicit */int) ((short) arr_8 [i_2 - 2]));
            arr_14 [i_1] [i_2] = ((/* implicit */unsigned char) arr_8 [i_1]);
        }
        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5351))) <= (4336813480353964573ULL)));
        var_23 = ((/* implicit */short) ((unsigned long long int) arr_12 [i_1] [i_1] [i_1]));
        arr_15 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 652057991)) * (16589427522251816484ULL)));
    }
    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 1; i_4 < 6; i_4 += 2) 
        {
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)14185)) ? (((/* implicit */int) (unsigned short)35092)) : (((/* implicit */int) (unsigned short)45776))));
            arr_23 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_10 [i_3] [i_3])), (((((/* implicit */_Bool) arr_7 [i_4 + 1])) ? ((-(((/* implicit */int) arr_8 [i_3])))) : (((((((/* implicit */int) var_12)) + (2147483647))) << (((((/* implicit */int) var_19)) - (12415)))))))));
        }
        for (unsigned int i_5 = 3; i_5 < 8; i_5 += 4) 
        {
            arr_27 [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)239)) << (((((/* implicit */int) ((unsigned short) var_14))) - (38233))))) - (((/* implicit */int) min((arr_16 [i_3] [i_3]), (min((arr_11 [i_3] [i_3] [i_3]), ((unsigned short)4147))))))));
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (-(arr_22 [(signed char)2] [i_3] [i_5 - 3]))))));
            var_26 = ((/* implicit */unsigned short) ((((unsigned int) (unsigned char)169)) + (((/* implicit */unsigned int) ((/* implicit */int) var_18)))));
        }
        for (short i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)5348)) ^ (((((/* implicit */_Bool) arr_20 [i_3] [i_6])) ? (((/* implicit */int) arr_20 [i_3] [i_6])) : (((/* implicit */int) arr_20 [i_3] [i_3])))))))));
            var_28 += ((/* implicit */unsigned short) var_6);
        }
        var_29 = ((/* implicit */short) (unsigned char)20);
        arr_30 [i_3] = ((/* implicit */signed char) max((((((/* implicit */int) arr_11 [i_3] [i_3] [i_3])) - (((/* implicit */int) (signed char)127)))), (((/* implicit */int) min((arr_11 [i_3] [i_3] [i_3]), (arr_11 [i_3] [i_3] [i_3]))))));
    }
    var_30 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)101)), (var_9)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (3129186769U)))))));
    var_31 = ((/* implicit */unsigned int) var_2);
}
