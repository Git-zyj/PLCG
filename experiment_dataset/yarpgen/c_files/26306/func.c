/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26306
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
    var_20 = ((/* implicit */signed char) ((unsigned char) ((unsigned char) ((long long int) 3ULL))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_5 [i_0 + 3] [i_0 + 3]))) % (((/* implicit */int) ((short) arr_5 [i_0 + 1] [i_0 + 1])))));
                /* LoopSeq 3 */
                for (int i_2 = 3; i_2 < 19; i_2 += 3) 
                {
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0 + 3] [i_2 - 2])) || (((/* implicit */_Bool) var_3)))))))));
                    arr_11 [i_0] [11ULL] [i_2] [i_2 - 2] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned long long int) (unsigned short)65535)));
                    var_22 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_4 [i_0 + 4] [i_0 + 2])))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 2] [i_0 + 2])) | (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0])))))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_15 [i_0 + 4] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) arr_3 [i_0 + 4] [i_0 - 1]))), (((((/* implicit */int) arr_3 [i_0 + 4] [i_0 + 2])) - (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1]))))));
                    var_23 = ((/* implicit */_Bool) ((3046471894U) - (((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [(signed char)14])))), (((/* implicit */int) (_Bool)1)))))));
                }
                for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    arr_18 [3LL] |= ((((/* implicit */unsigned long long int) 2147483647)) / (max((((/* implicit */unsigned long long int) (unsigned char)66)), (5394101827457356410ULL))));
                    var_24 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_9 [i_0 + 3] [i_0 + 3]))))));
                    arr_19 [i_0] [i_1] [i_4] = min((((((((/* implicit */_Bool) -1LL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16297))))) * (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) (unsigned char)0))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_1] [i_0 + 1] [i_0 + 2] [i_0 + 3]))))));
                    var_25 = max((((/* implicit */unsigned char) (!(((((/* implicit */int) (signed char)85)) <= (((/* implicit */int) (signed char)-1))))))), (max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (signed char)6))))), (((unsigned char) (unsigned char)33)))));
                }
                var_26 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) max(((unsigned short)9645), (arr_8 [i_1] [i_0 + 4] [i_0 + 1] [i_0 + 2]))))));
                arr_20 [i_1] [i_0] = ((/* implicit */unsigned int) var_10);
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) var_18);
    var_28 = (signed char)-54;
}
