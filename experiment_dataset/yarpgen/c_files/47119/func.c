/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47119
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) && (((_Bool) max((((/* implicit */long long int) (unsigned char)255)), (var_6)))))))));
    var_11 = ((/* implicit */short) max(((+(((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) var_0)) : (var_6))))), (((/* implicit */long long int) min((4095U), (((/* implicit */unsigned int) 1978311616)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)0)), (1978311599)));
                        var_12 = ((/* implicit */unsigned char) (~(min(((~(arr_0 [i_2] [i_1]))), (((/* implicit */unsigned long long int) arr_3 [23ULL]))))));
                        var_13 = ((/* implicit */int) (~(arr_5 [i_0 - 2] [i_0 - 2])));
                    }
                    arr_13 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1978311605)) ? (arr_10 [1ULL] [i_1] [i_1 + 2] [i_2] [1ULL]) : (arr_11 [i_2] [i_0]))))))), ((signed char)115)));
                    /* LoopNest 2 */
                    for (long long int i_4 = 3; i_4 < 23; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) ((unsigned char) (-(264241152))));
                                var_15 = ((/* implicit */unsigned long long int) arr_17 [i_1] [i_2] [i_4 - 1] [i_1]);
                                arr_19 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) max((arr_6 [i_5] [i_1 + 1] [i_0 - 3] [i_0]), (((/* implicit */short) arr_3 [i_0 - 1]))))), (((((/* implicit */_Bool) 8646911284551352320ULL)) ? (((/* implicit */int) (short)14724)) : (1978311628)))));
                                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (~(((((/* implicit */_Bool) (-(-1978311599)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (3876526199867299740ULL))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_0]))));
                    arr_20 [i_2] [i_1] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */int) (short)27227)) >= (((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) (unsigned short)16376)) : (((/* implicit */int) ((short) (unsigned char)175)))))));
                }
            } 
        } 
    } 
    var_18 = min((((unsigned int) ((var_1) <= (((/* implicit */unsigned long long int) var_6))))), (max((((((/* implicit */unsigned int) -92008845)) * (3665320014U))), (((/* implicit */unsigned int) ((_Bool) var_9))))));
}
