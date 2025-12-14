/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42771
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_10 = (!(((/* implicit */_Bool) var_5)));
                var_11 = ((/* implicit */unsigned short) max((1966738308), (min((1966738299), (((4) | (((/* implicit */int) (short)-32752))))))));
                var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((unsigned short) 1223355343)))) ? (((/* implicit */long long int) max(((+(((/* implicit */int) (unsigned short)49601)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) 1966738304)) <= (6436605482209357274ULL))))))) : ((~(min((((/* implicit */long long int) arr_3 [i_0] [i_1])), (arr_2 [i_1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_2))))) : (((/* implicit */int) min((arr_1 [i_3]), (((/* implicit */signed char) (_Bool)1))))))) <= (max((((((/* implicit */_Bool) arr_8 [i_2] [i_3])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_6)))), (max((((/* implicit */int) (unsigned short)41460)), (var_8)))))));
                arr_10 [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775786LL)) ? (arr_5 [i_2]) : (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    var_14 = ((unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)65535)), (4294967290U)));
                    var_15 = ((/* implicit */unsigned long long int) 9223372036854775807LL);
                    var_16 = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) ((unsigned short) (unsigned short)15918))), (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */int) (unsigned short)4003)))))) + (((/* implicit */int) ((signed char) arr_6 [i_4])))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_17 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 6964586025385470798ULL)) ? (1966738304) : (((/* implicit */int) (unsigned char)0)))), (((((/* implicit */_Bool) max((4294967267U), (((/* implicit */unsigned int) (short)32767))))) ? ((-(4))) : ((-(((/* implicit */int) var_2))))))));
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-9404)) ? ((+(min((9223372036854775807LL), (((/* implicit */long long int) (signed char)55)))))) : (((/* implicit */long long int) max((min((-1966738285), (((/* implicit */int) var_5)))), (min((((/* implicit */int) var_1)), (arr_14 [i_2] [1LL]))))))));
                    var_19 = ((/* implicit */long long int) ((short) var_0));
                    var_20 = ((/* implicit */unsigned long long int) (~(max(((-(((/* implicit */int) var_3)))), (max((-928026069), (((/* implicit */int) arr_6 [i_3]))))))));
                    var_21 = ((/* implicit */int) ((short) max((((/* implicit */long long int) (~(1643565807)))), (max((((/* implicit */long long int) var_8)), (arr_13 [i_3] [i_3]))))));
                }
            }
        } 
    } 
}
