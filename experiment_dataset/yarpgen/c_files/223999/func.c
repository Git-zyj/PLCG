/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223999
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_2) : (((/* implicit */int) (short)-18265))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (11493353076732522792ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) var_9);
            arr_7 [i_1] = ((/* implicit */long long int) 2026166894U);
        }
        var_19 = ((/* implicit */unsigned int) (((((_Bool)1) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [8ULL])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 11; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_5 = 4; i_5 < 12; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) min((((/* implicit */int) max((var_8), (((/* implicit */short) var_4))))), (((var_12) / (((/* implicit */int) (unsigned short)61980))))));
                        var_21 -= ((/* implicit */unsigned long long int) 1487344589);
                        arr_22 [i_2] = min(((+(min((((/* implicit */unsigned long long int) arr_15 [i_5] [i_2] [i_2])), (var_1))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23480)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [i_2] [i_3 + 1] [i_4] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61980))) : (((((/* implicit */_Bool) var_2)) ? (arr_3 [(_Bool)1] [i_3 + 1] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
                        arr_23 [1LL] [i_2] [2U] [10ULL] [i_2] [7ULL] = ((long long int) max((min((((/* implicit */unsigned long long int) arr_19 [(short)2] [i_3] [i_4] [(short)2] [i_2])), (7985343423567636831ULL))), (arr_8 [i_2])));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 2; i_6 < 11; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) arr_5 [i_2] [i_3 + 2])) ? (var_2) : (arr_4 [(_Bool)1] [i_2]))), (((/* implicit */int) arr_0 [i_6 + 2] [i_3 - 1])))) / ((+((+(((/* implicit */int) (short)-23510))))))));
                                var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23480)) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) (signed char)-66))))) ? ((-(-5618408540438573089LL))) : (var_13)));
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_19 [6ULL] [i_6 - 2] [i_4] [i_3 + 1] [i_2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 += ((/* implicit */unsigned char) (signed char)-102);
    }
    var_26 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-400))));
}
