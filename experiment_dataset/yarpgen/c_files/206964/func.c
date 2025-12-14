/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206964
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
    var_10 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1])))));
        arr_4 [9] [i_0 + 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)0)) * (((/* implicit */int) (unsigned short)3))))) / (140737488355327ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (3599167862324201776ULL))))))))));
        arr_5 [i_0] [i_0] = max(((!(((/* implicit */_Bool) -8150072748978427587LL)))), ((!((!(((/* implicit */_Bool) var_6)))))));
        var_11 = ((/* implicit */unsigned char) ((((arr_2 [i_0 - 2] [i_0 - 1]) ? (((/* implicit */int) (short)32748)) : (524287))) <= (((/* implicit */int) (signed char)90))));
    }
    for (unsigned short i_1 = 1; i_1 < 18; i_1 += 3) 
    {
        var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (short)-20136)) ? (((/* implicit */unsigned long long int) arr_7 [i_1])) : (arr_6 [i_1] [(unsigned short)2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_8 [8])))) : (((((/* implicit */unsigned long long int) 8150072748978427586LL)) - (max((18111047002628989765ULL), (((/* implicit */unsigned long long int) -601037108))))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 3; i_2 < 16; i_2 += 4) 
        {
            arr_12 [i_1] = (i_1 % 2 == zero) ? (((/* implicit */signed char) (-((((((((_Bool)1) ? (arr_11 [i_2]) : (arr_11 [i_1 - 1]))) + (9223372036854775807LL))) << (((arr_6 [i_2 - 3] [i_1]) - (8965698772944358549ULL)))))))) : (((/* implicit */signed char) (-((((((((_Bool)1) ? (arr_11 [i_2]) : (arr_11 [i_1 - 1]))) + (9223372036854775807LL))) << (((((arr_6 [i_2 - 3] [i_1]) - (8965698772944358549ULL))) - (14318510924463312781ULL))))))));
            var_13 = ((/* implicit */long long int) (+((-(((((/* implicit */unsigned long long int) arr_10 [i_2 - 2] [i_1])) + (16054342981623490944ULL)))))));
        }
        var_14 = ((/* implicit */int) ((((/* implicit */long long int) 524287)) & (max((-6195626816568506895LL), (((/* implicit */long long int) (signed char)-118))))));
    }
}
