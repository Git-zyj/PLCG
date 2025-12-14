/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209965
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
    var_18 = ((/* implicit */unsigned long long int) min((var_1), (var_1)));
    var_19 = ((/* implicit */int) var_15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) min((6151076803423235214ULL), (((/* implicit */unsigned long long int) ((unsigned short) arr_5 [i_1 + 1] [i_1 - 2] [i_1 - 1])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_0] [11LL] [i_2 - 1] [i_2 - 1] [i_4]))) && (((/* implicit */_Bool) ((arr_13 [i_0] [i_1 - 2] [i_2] [i_3] [i_3]) >> (((var_11) - (1345062735U))))))));
                                var_21 = ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) arr_9 [i_0] [i_1 - 3] [i_2 + 1] [(unsigned char)3] [4ULL])))));
                                var_22 = ((/* implicit */int) min((var_22), ((-(((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_1 - 3] [i_2] [i_3] [i_4])))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_2 + 1] [i_2 - 1] [i_1 + 2] [i_1 - 2] [i_1 + 1] [i_1 - 3])) ? (arr_10 [i_0] [i_0] [i_1] [i_1 + 1] [i_2 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) 15221671551845006889ULL))))))));
                    arr_16 [i_2] [i_1] [i_1 + 2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)219)) ? (8143033951774281719LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-12380)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -1392055746)) && (((/* implicit */_Bool) 2147483647))))) : (((/* implicit */int) ((((/* implicit */_Bool) -1176155302)) || (((/* implicit */_Bool) (unsigned char)252)))))));
                }
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */int) (short)16028);
                            arr_24 [i_6] [9ULL] [i_5] [0U] [6ULL] [i_0] = (-(((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_7 [i_6]) : (arr_19 [i_6] [i_5] [i_0]))));
                            arr_25 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_22 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_5] [14] [i_6]) - (arr_22 [i_1 - 2] [i_1 + 2] [i_5] [i_5] [i_1 + 2] [i_6])))) ? (((((/* implicit */_Bool) (unsigned short)39247)) ? (((/* implicit */long long int) 3430513359U)) : (-8143033951774281705LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_1] [i_1 + 1] [i_6] [i_1] [i_6] [i_6])) ? (var_8) : (4275575470U))))));
                            arr_26 [i_0] [i_1] [i_5] [i_0] = max((((int) var_13)), (((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1] [i_1 - 3])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) var_10)))));
}
