/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43533
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
    var_20 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1657322544)) ? (((/* implicit */unsigned long long int) var_2)) : (var_14))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))), ((~(((((/* implicit */_Bool) var_17)) ? (var_7) : (((/* implicit */unsigned long long int) var_17))))))));
    var_21 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)29191)), (-6121853723309863388LL)))) || ((_Bool)1)))), (max((((/* implicit */int) var_15)), (((((/* implicit */_Bool) (unsigned short)31892)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)202))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned long long int) 1283049140U));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((arr_12 [i_3]) > (arr_12 [i_2])))))));
                                var_23 += ((/* implicit */short) (!(((((/* implicit */unsigned long long int) -1730868998)) != (var_6)))));
                                var_24 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) ((signed char) (short)-16807))), (max((var_16), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))))), (((/* implicit */unsigned long long int) ((short) arr_1 [i_1])))));
                                arr_13 [i_3] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) -671905736)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1 - 1] [i_1 + 1]))) : (((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [2]))))))));
                                arr_14 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 10752126472404372609ULL)) ? ((-2147483647 - 1)) : ((((_Bool)1) ? (184258807) : (((/* implicit */int) (unsigned short)1027))))))), (arr_11 [i_0] [(short)1] [i_1] [i_3] [(short)1])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
