/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224486
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) ((((-3563566061190441122LL) + (9223372036854775807LL))) >> (((max((((/* implicit */long long int) (short)-24125)), (((long long int) (short)-24125)))) + (24159LL)))));
        var_13 = ((/* implicit */unsigned short) max((var_13), (max((((/* implicit */unsigned short) (short)24120)), ((unsigned short)9)))));
    }
    for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        var_14 *= ((/* implicit */unsigned char) (-((-(((/* implicit */int) (unsigned short)65517))))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_1]) + (((/* implicit */int) (unsigned short)1))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)20649))))) : (((long long int) (signed char)23))));
    }
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        arr_6 [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((var_4) ^ (((/* implicit */int) (signed char)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((long long int) (short)-18138)))), (((arr_4 [i_2]) | (((/* implicit */long long int) ((/* implicit */int) (short)-3187)))))));
        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2]))));
    }
    /* LoopSeq 2 */
    for (int i_3 = 3; i_3 < 13; i_3 += 1) 
    {
        var_17 ^= ((/* implicit */long long int) ((var_7) && ((!(((/* implicit */_Bool) ((unsigned short) arr_1 [(unsigned char)6])))))));
        var_18 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_3 [18ULL])) ? (((/* implicit */int) ((arr_2 [i_3] [10LL]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) : ((-(((/* implicit */int) var_5))))))));
        var_19 |= ((/* implicit */unsigned short) ((signed char) min((-1542466545), (((/* implicit */int) (short)27244)))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 2; i_4 < 13; i_4 += 1) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)230)) + (1542466544)));
        var_21 = (unsigned short)65535;
        var_22 = ((/* implicit */unsigned long long int) var_6);
        var_23 = ((/* implicit */long long int) ((unsigned int) arr_0 [i_4] [i_4]));
        var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) (short)-18125))))) ? (((/* implicit */int) arr_0 [(short)6] [i_4 - 2])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19))) < (arr_10 [i_4] [i_4]))))))));
    }
    var_25 = ((/* implicit */unsigned int) min((((unsigned short) ((long long int) var_3))), (((/* implicit */unsigned short) var_3))));
}
