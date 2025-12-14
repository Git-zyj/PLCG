/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202898
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        arr_8 [i_0] [i_1] [i_2] = (-(((/* implicit */int) (short)-29221)));
                        arr_9 [i_0] [i_1 + 2] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3937))) / (18446744073709551615ULL)));
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))) / (((/* implicit */int) (unsigned short)57344)))))));
                        var_18 ^= ((_Bool) arr_6 [i_1] [i_1 - 2] [i_1] [i_1 + 1]);
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 - 2])) ? (((((/* implicit */_Bool) var_5)) ? (13696094410367888597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) : (18446744073709551615ULL))))));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 13660622206140327047ULL))))))))));
                            var_21 = ((/* implicit */signed char) (-(arr_4 [i_0] [i_1 - 1] [i_1 + 1] [i_1 - 1])));
                        }
                    }
                    var_22 = ((/* implicit */long long int) (~((~(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_2] [i_2]))) : (var_14)))))));
                    arr_12 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4711)) ? (((/* implicit */unsigned long long int) 2143713535035372128LL)) : (0ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1 + 2] [i_1] [i_2]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (15ULL)))) ? ((~(16ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3007374073U)) ? (((/* implicit */int) arr_2 [i_0])) : (arr_7 [i_0] [i_1] [i_2] [i_2] [i_2])))))));
                    var_23 = ((((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1 - 1])) ? (((/* implicit */int) (unsigned short)6335)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) -1))))))));
                }
            } 
        } 
    } 
    var_24 &= max((var_11), (((/* implicit */unsigned short) var_7)));
    var_25 = (((-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (unsigned short)3941)))))) ^ (((/* implicit */int) var_10)));
}
