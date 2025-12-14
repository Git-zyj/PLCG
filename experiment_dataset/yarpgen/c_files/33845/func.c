/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33845
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
    var_10 = ((/* implicit */_Bool) ((long long int) (short)32764));
    var_11 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
        var_13 = ((/* implicit */unsigned short) (+((((!(((/* implicit */_Bool) -2147483625)))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) arr_2 [i_0]))))))));
        arr_4 [i_0] = min((((((/* implicit */_Bool) (-(arr_0 [i_0] [i_0])))) ? (276009480) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_0] [i_0])))))), ((+(((/* implicit */int) arr_3 [i_0] [i_0])))));
    }
    /* LoopNest 3 */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        for (int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                {
                    var_14 = ((/* implicit */short) (-(((/* implicit */int) var_1))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        for (short i_5 = 2; i_5 < 16; i_5 += 3) 
                        {
                            {
                                arr_18 [8U] [i_1] [(_Bool)1] = ((/* implicit */long long int) min(((~(-517922769))), ((~(((/* implicit */int) arr_15 [i_5] [i_4] [i_1] [i_2] [i_1]))))));
                                arr_19 [(unsigned short)0] |= ((/* implicit */signed char) min(((~(((/* implicit */int) max(((signed char)15), (((/* implicit */signed char) (_Bool)1))))))), (((/* implicit */int) ((unsigned short) 6979446938473460203ULL)))));
                                arr_20 [i_1] [i_1] [i_1] [i_4] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_12 [i_5 + 1] [i_1] [i_1] [i_2]))))));
                            }
                        } 
                    } 
                    arr_21 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) 129024);
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -517922778)), ((~(var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : ((+(arr_7 [i_3] [i_1])))));
                }
            } 
        } 
    } 
}
