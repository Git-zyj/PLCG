/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189994
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
    for (signed char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_16 = arr_5 [i_0 + 1] [i_0 + 1];
                arr_6 [i_0] = ((/* implicit */short) (~((~(((/* implicit */int) (signed char)112))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        arr_10 [i_2] [i_2] = min((((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) arr_5 [i_2] [i_2])))))), (((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_1 [i_2] [i_2]) : (((/* implicit */unsigned long long int) -9LL)))));
        var_17 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)124)) || (((/* implicit */_Bool) (signed char)-103))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (signed char)-52)), ((unsigned short)49152)));
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */int) var_11);
                        var_20 *= ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_12 [i_3])))), (((((/* implicit */_Bool) (unsigned short)49152)) ? (((/* implicit */int) (signed char)124)) : (-1156998966)))));
                        var_21 = ((/* implicit */unsigned char) var_15);
                        var_22 *= ((/* implicit */short) (unsigned char)199);
                    }
                    arr_18 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16ULL)) ? (arr_7 [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) 1906455563U)) ? (((/* implicit */unsigned long long int) 8791798054912LL)) : (arr_15 [i_2] [i_4] [(signed char)4] [i_3])))))) ? (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned char)197)))))) : (((var_3) | (((/* implicit */int) ((((/* implicit */int) arr_4 [i_3] [(_Bool)1])) > (((/* implicit */int) var_5)))))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)59)), (max(((unsigned short)62476), (((/* implicit */unsigned short) (_Bool)1)))))))));
}
