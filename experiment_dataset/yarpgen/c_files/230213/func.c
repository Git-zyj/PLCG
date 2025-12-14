/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230213
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */int) 993947104U);
                var_12 = ((/* implicit */signed char) ((min((4294967293U), (((/* implicit */unsigned int) (-(-698128528)))))) < (var_7)));
                arr_6 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(9007199254740991LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_4 [(short)4] [i_0]))))) % (((/* implicit */int) (unsigned char)237))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_5 [i_0] [i_1] [i_1]) : (arr_2 [i_0])))) ? (((arr_0 [i_1]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)203))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_1])) << (((((arr_0 [i_0]) + (3871353178643119988LL))) - (27LL))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)9])) ? (min((4807906304093082707ULL), (((/* implicit */unsigned long long int) (short)127)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0]))) : (var_8))) < (var_8))))) : (((((/* implicit */_Bool) max((arr_1 [i_0] [i_1]), (((/* implicit */long long int) (unsigned short)31))))) ? (((/* implicit */unsigned long long int) arr_1 [(short)0] [i_1])) : (max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_3] [i_2]))))))));
                            arr_14 [11ULL] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (short)-120);
                            arr_15 [i_0] [i_2] [i_2] [(unsigned short)13] [(short)2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-487047620423365068LL), (((/* implicit */long long int) 326125184))))) ? (((((/* implicit */_Bool) ((var_2) >> (((((/* implicit */int) (signed char)-61)) + (86)))))) ? (((/* implicit */int) arr_12 [i_3] [(unsigned short)9] [6U] [i_3] [i_3] [i_3])) : ((-(((/* implicit */int) (signed char)-24)))))) : (((/* implicit */int) arr_4 [2U] [i_1]))));
                            arr_16 [9ULL] [i_1] [i_2] [5U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (4074866635U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) : (((/* implicit */int) var_1))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_7);
}
