/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213696
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) max((1967332745U), (((/* implicit */unsigned int) (unsigned short)55196)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = max((max((max((1967332745U), (((/* implicit */unsigned int) 562112843)))), (max((2327634551U), (var_4))))), (max((max((1967332745U), (1684652047U))), (max((((/* implicit */unsigned int) 134184960)), (arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_12 -= max((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_0 [i_0 + 1])), (4087144603U)))), (max((((/* implicit */unsigned long long int) (signed char)82)), (10022267927391305266ULL))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_9 [i_0 + 2] [i_1] [i_2] [i_3])), (4292870144U)))), (max((((/* implicit */unsigned long long int) arr_0 [i_0 - 3])), (18446744073709551605ULL))))));
                            var_13 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_5 [i_0])), (1967332744U)))), (max((((/* implicit */unsigned long long int) (signed char)85)), (var_8))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)217)), (3903576222U)))), (max((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_2] [i_2])), (arr_8 [i_0 + 2] [i_0] [i_0 + 2]))))))));
                            /* LoopSeq 2 */
                            for (int i_4 = 2; i_4 < 16; i_4 += 3) /* same iter space */
                            {
                                var_14 -= max((max((((/* implicit */unsigned int) max((arr_4 [i_1] [i_1] [i_1]), (var_10)))), (max((((/* implicit */unsigned int) (_Bool)0)), (var_7))))), (((/* implicit */unsigned int) max((max((-1702047848), (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) max(((_Bool)0), (arr_12 [i_0]))))))));
                                var_15 &= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((max((((/* implicit */int) arr_12 [i_0])), (var_10))), (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_1))))))), (max((max((((/* implicit */unsigned int) arr_12 [i_0 - 3])), (3078379213U))), (((/* implicit */unsigned int) max((var_5), (7))))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 16; i_5 += 3) /* same iter space */
                            {
                                var_16 = ((/* implicit */long long int) 790243314);
                                arr_18 [i_0 - 2] [i_1] [i_0 - 2] [i_1] [i_3] [i_5] [i_5 + 1] = ((/* implicit */unsigned long long int) 427181543);
                            }
                        }
                    } 
                } 
                var_17 -= max((max((max((var_7), (((/* implicit */unsigned int) var_6)))), (max((((/* implicit */unsigned int) (_Bool)1)), (var_7))))), (max((max((arr_7 [i_0 - 3] [i_1] [i_0 - 3] [i_0]), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) max((arr_16 [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1]), (arr_16 [i_0] [i_1] [i_1] [i_1])))))));
            }
        } 
    } 
    var_18 = max((((/* implicit */unsigned int) max((((/* implicit */int) max((var_6), (var_6)))), (max((var_5), (1678451315)))))), (max((((/* implicit */unsigned int) max((var_3), (var_3)))), (max((var_4), (((/* implicit */unsigned int) var_9)))))));
    /* LoopSeq 1 */
    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) max((max((max((var_4), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) max((-790243309), (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) max((max((2147483647), (((/* implicit */int) (unsigned char)254)))), (max((-791150585), (((/* implicit */int) (_Bool)1)))))))));
        var_20 = ((/* implicit */int) max((((/* implicit */unsigned int) max((536870911), (((/* implicit */int) (unsigned short)65313))))), (max((max((((/* implicit */unsigned int) (signed char)85)), (arr_19 [i_6]))), (((/* implicit */unsigned int) max((arr_5 [i_6]), (((/* implicit */unsigned char) (_Bool)1)))))))));
    }
}
