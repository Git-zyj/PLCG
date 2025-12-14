/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33481
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
    var_12 = ((/* implicit */unsigned short) var_2);
    var_13 ^= ((/* implicit */long long int) var_10);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) arr_0 [i_1])))) % (((/* implicit */int) (short)24576))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 + 3] [i_2 + 2]))) ^ (arr_3 [i_2] [i_2 + 3] [i_2 - 1])))));
                    var_14 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_5 [i_2 + 1])) ? (arr_5 [i_2 + 2]) : (arr_5 [i_2 - 1])))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4 - 2] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) 10640253025441003184ULL)) ? (arr_1 [i_2 - 1]) : (arr_1 [i_2 + 2]))));
                                var_15 = ((/* implicit */short) ((((arr_11 [i_1] [i_2 + 2] [i_4 + 2] [i_4] [i_2 + 2] [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) ? (max((arr_11 [i_0] [i_2 - 1] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4]), (((/* implicit */unsigned int) (unsigned short)32768)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_11 [i_0] [i_2 + 2] [i_4 - 2] [i_4] [i_4 - 1] [i_4 - 1]))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (unsigned short)32768);
                                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_2] [i_1] [i_0]) - (arr_2 [i_0] [i_1] [i_1])))) ? (((((/* implicit */_Bool) 11597753994907151452ULL)) ? (var_7) : (((/* implicit */int) (unsigned short)47521)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_3] [i_2 - 1])) : (((/* implicit */int) var_3)))))))));
                                var_17 *= ((/* implicit */unsigned long long int) min((((int) (unsigned short)47521)), (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57624))) * (arr_7 [i_0] [i_1] [i_0]))) > (arr_7 [i_0] [i_1] [i_2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)7924)) % (var_9)))) : (var_0))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -245934688700773233LL))))));
}
