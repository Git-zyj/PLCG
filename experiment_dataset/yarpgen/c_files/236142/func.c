/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236142
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
    var_15 = (-(var_0));
    var_16 &= ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((unsigned int) -2147483639))) ? (((/* implicit */int) var_8)) : ((-(((/* implicit */int) var_7))))))));
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min((min((((((/* implicit */_Bool) -723052193)) ? (((/* implicit */long long int) var_9)) : (var_4))), (((/* implicit */long long int) min((var_9), (((/* implicit */int) var_8))))))), (((/* implicit */long long int) var_6)))))));
    var_18 = (_Bool)1;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_19 ^= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-4)) & (((/* implicit */int) (signed char)4))))), (var_11)));
                arr_6 [i_0] [i_1] [(unsigned short)16] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_5 [i_0]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) (-(min((arr_4 [i_0]), (((/* implicit */unsigned long long int) arr_8 [i_3] [0] [i_1]))))));
                            var_21 *= ((/* implicit */_Bool) min((arr_10 [i_0] [i_1] [i_2] [i_0]), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (signed char)8)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_1] [i_2] [i_1])))))))));
                            var_22 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_3 [i_0] [(unsigned char)6] [i_2]) ? (((/* implicit */int) arr_3 [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                            {
                                var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)32256))));
                                var_24 -= ((/* implicit */unsigned short) min((((16140901064495857664ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5))))), (((/* implicit */unsigned long long int) arr_1 [i_2] [i_1]))));
                                arr_15 [i_0] [i_0] [i_0] [i_1] [18ULL] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)100))))) & (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) (unsigned short)5)) / (-2147483639))) : (((/* implicit */int) arr_14 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4]))))));
                            }
                        }
                    } 
                } 
                arr_16 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) | (-1718619484)))) ? (((/* implicit */int) ((unsigned char) (unsigned short)33279))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [i_1])), ((unsigned char)89))))));
            }
        } 
    } 
}
