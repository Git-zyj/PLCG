/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227949
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
    var_12 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1])))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) var_9)))))) == (15645114142673566961ULL)))), (((arr_1 [i_0 + 1]) / (((/* implicit */unsigned int) ((-551604080) - (((/* implicit */int) var_11)))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_9 [(short)9] [i_0 + 2] [i_0 - 1] [i_2])) || (((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1] [i_0 + 2] [(_Bool)1])))) || (((/* implicit */_Bool) min((arr_9 [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 1]), (arr_9 [i_0] [i_0 - 1] [i_0 + 1] [i_3]))))));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            var_15 = 18446744073709551615ULL;
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2083045397026975013ULL)) ? (3574998488U) : (719968807U)))) : (max((((/* implicit */unsigned long long int) max((var_5), (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
                        }
                        for (short i_5 = 2; i_5 < 23; i_5 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) 719968807U))));
                            var_18 = ((/* implicit */unsigned char) var_1);
                            var_19 += ((/* implicit */short) ((((_Bool) arr_8 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_5 - 2])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_0] [i_0 - 1])))))) & (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (719968807U))))))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_6 = 1; i_6 < 23; i_6 += 3) 
                        {
                            arr_20 [i_0] [i_1] [i_2] [i_1] [3ULL] = (-(((/* implicit */int) arr_15 [i_0] [i_1])));
                            var_20 = ((/* implicit */short) var_8);
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 + 2] [i_1] [i_2] [i_3] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0 + 2] [i_7] [i_2] [i_3] [i_7]))) : (719968807U)));
                            var_22 = ((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                        }
                        var_23 = ((/* implicit */unsigned int) max(((signed char)-34), (((/* implicit */signed char) arr_19 [i_0] [i_1]))));
                        var_24 = (signed char)-1;
                    }
                } 
            } 
        } 
        arr_23 [i_0] = max(((-(var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) & (((/* implicit */int) (!(var_11))))))));
    }
    var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-18711)), (4294967295U)));
}
