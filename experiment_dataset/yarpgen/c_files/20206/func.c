/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20206
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
    for (signed char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_11 ^= ((/* implicit */signed char) arr_7 [i_2 - 1] [i_0 + 3]);
                                var_12 = ((/* implicit */signed char) ((((/* implicit */long long int) 770359461U)) < (-2073735018051204440LL)));
                                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_1])))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_0]))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)17653))) : (((/* implicit */int) arr_6 [i_0]))));
                    arr_14 [i_0] [i_1] [i_1] [(signed char)2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)49530))));
                }
                for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 34359738367LL)) ? (((/* implicit */int) (signed char)-85)) : (((/* implicit */int) (signed char)17))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            {
                                arr_23 [(signed char)0] [(signed char)0] [i_6] [i_6] [i_6] [i_0] = ((/* implicit */long long int) var_4);
                                var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 + 2] [i_0 + 1])) ? (var_7) : (((/* implicit */int) arr_5 [i_0])))) << (((/* implicit */int) (!(((/* implicit */_Bool) (short)4497)))))));
                                var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (short)32217)), (arr_0 [i_0])));
                            }
                        } 
                    } 
                    arr_24 [i_5] [i_5] [i_0] = ((/* implicit */unsigned int) (-(max((((((/* implicit */_Bool) (signed char)-127)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_5] [i_5] [i_5]))))), (((((/* implicit */long long int) ((/* implicit */int) var_5))) % (arr_9 [12ULL] [i_0] [i_1] [i_1] [i_0] [i_0])))))));
                    arr_25 [i_0] [i_5] = ((/* implicit */unsigned long long int) (~(4294967295U)));
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)7)), (4179625221753905177ULL)))) ? (max((((/* implicit */unsigned long long int) max((-1085136971), (((/* implicit */int) (short)-32209))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_1] [i_1] [i_0]))) | (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 2] [i_1 + 1] [i_0 - 1] [i_1 - 2])))))));
                }
                arr_26 [i_0] [i_1 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-5198)) ? (2073735018051204420LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)7)))));
            }
        } 
    } 
    var_18 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */int) var_0))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max((var_3), (((/* implicit */signed char) ((_Bool) 1180350247)))))));
}
