/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197816
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
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */signed char) var_7);
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    var_15 += ((/* implicit */short) (+(((/* implicit */int) arr_7 [i_1]))));
                    arr_8 [i_0] [i_1] [(short)2] = ((/* implicit */long long int) var_6);
                    var_16 = ((/* implicit */short) (!(((((((/* implicit */_Bool) 15333220232228640345ULL)) ? (((/* implicit */int) (unsigned short)47873)) : (((/* implicit */int) arr_6 [(_Bool)1] [(_Bool)1])))) > (((/* implicit */int) var_8))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 12; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551592ULL)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) arr_6 [i_1 - 1] [i_3 - 1]))))) ? (((((/* implicit */int) arr_6 [i_1 - 3] [i_3 + 3])) << (((/* implicit */int) var_2)))) : ((~(((/* implicit */int) arr_6 [i_1 - 1] [i_3 + 2]))))));
                                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0])) >= (((/* implicit */int) ((short) (-(((/* implicit */int) (signed char)11)))))))))));
                                var_19 ^= ((/* implicit */long long int) (-((-(((/* implicit */int) var_11))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) (+(arr_4 [i_0])))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_5 = 2; i_5 < 14; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        {
                            arr_17 [i_0] [i_5] [i_0] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(4210843820002497333LL)))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_10 [i_5])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)61))))));
                            arr_18 [i_6] [i_6] [i_5 - 2] [i_5] = ((/* implicit */unsigned short) -1);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))) + (((/* implicit */int) var_6))));
    var_22 = ((/* implicit */_Bool) max(((-(-22))), (((/* implicit */int) (unsigned char)69))));
    var_23 = ((/* implicit */_Bool) (unsigned short)47873);
}
