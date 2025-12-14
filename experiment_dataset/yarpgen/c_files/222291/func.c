/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222291
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((long long int) var_3)) : (((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) var_7)))) == (((/* implicit */int) var_6))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        arr_2 [8U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5274154526153360464LL)) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1]))))));
        var_18 = ((/* implicit */unsigned char) ((((max((var_15), (((/* implicit */unsigned long long int) -2953634272361019782LL)))) * (((/* implicit */unsigned long long int) var_14)))) * (((/* implicit */unsigned long long int) ((int) arr_0 [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                {
                    arr_13 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_11 [i_1] [i_1] [i_2] [i_3]))) || (((/* implicit */_Bool) min((arr_11 [i_1] [i_2] [i_3] [i_3]), (arr_11 [i_1] [i_2] [i_3] [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        for (int i_5 = 2; i_5 < 19; i_5 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) 0ULL);
                                arr_18 [i_1] [i_3] [i_4] [i_5] = ((/* implicit */signed char) var_7);
                            }
                        } 
                    } 
                    var_20 = ((unsigned long long int) min((((((/* implicit */int) var_0)) * (((/* implicit */int) var_2)))), (((/* implicit */int) var_11))));
                    var_21 = ((/* implicit */unsigned int) (short)0);
                }
            } 
        } 
        arr_19 [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_11 [i_1] [(_Bool)1] [i_1] [i_1])) > (((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)28459)) : (((/* implicit */int) arr_16 [i_1] [i_1])))))) ? ((+(arr_14 [9] [9] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(signed char)5] [7ULL] [(short)15]))) == (arr_5 [i_1])))))));
    }
}
