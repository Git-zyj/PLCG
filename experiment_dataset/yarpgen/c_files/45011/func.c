/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45011
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
    var_15 &= ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)76))))))) ? (arr_6 [i_1] [i_2]) : (((/* implicit */int) ((((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) > (((/* implicit */unsigned long long int) ((4294967293U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
                            arr_14 [i_2] [i_2] [i_2] [i_0] &= ((/* implicit */short) (unsigned char)26);
                        }
                    } 
                } 
                var_16 = ((/* implicit */short) (+(min((((/* implicit */int) (!(var_12)))), (arr_5 [i_0] [i_1])))));
                var_17 = arr_12 [i_0 + 2] [i_0 + 1];
                /* LoopSeq 3 */
                for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((9223372036854775792LL) >= (9223372036854775782LL)))))))));
                    var_19 ^= ((/* implicit */long long int) ((unsigned long long int) (short)-9));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_21 [i_5] [i_0] [i_0] [i_0 - 1] = ((/* implicit */signed char) arr_7 [i_0]);
                    arr_22 [i_0] [i_0] = ((/* implicit */signed char) arr_17 [i_0 + 2]);
                    arr_23 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_18 [i_0 + 2] [i_0 + 2]), (((/* implicit */unsigned long long int) var_3)))))));
                    arr_24 [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */signed char) arr_16 [i_1] [i_1]);
                    arr_25 [i_5] [i_0 + 1] [i_5] [i_0] = arr_5 [i_5] [i_5];
                }
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((((/* implicit */_Bool) 17447111646350671704ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1535))) : (((((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6 + 1] [i_1]))) : (arr_3 [i_0 - 1]))) << (((min((18446744073709551613ULL), (((/* implicit */unsigned long long int) arr_3 [i_0 + 2])))) - (4109627938ULL)))))))));
                    arr_29 [14ULL] [i_0] [i_0] [14ULL] &= ((/* implicit */signed char) 999632427358879901ULL);
                }
                arr_30 [i_0] [i_0] = ((/* implicit */signed char) min(((-(-9223372036854775793LL))), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))))));
            }
        } 
    } 
}
