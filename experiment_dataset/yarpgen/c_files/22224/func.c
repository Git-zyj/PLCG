/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22224
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((max((((/* implicit */unsigned short) (short)-1)), (var_9))), (((/* implicit */unsigned short) max(((unsigned char)172), ((unsigned char)178))))))), (max((((/* implicit */long long int) max(((unsigned char)53), (((/* implicit */unsigned char) var_6))))), (max((((/* implicit */long long int) (unsigned short)55595)), (-4922527496866029911LL)))))));
                var_14 -= ((/* implicit */unsigned int) min((min((min((((/* implicit */unsigned long long int) arr_6 [(unsigned short)1])), (arr_4 [i_0] [i_0 - 3] [i_0]))), (((/* implicit */unsigned long long int) max((arr_6 [i_1]), (((/* implicit */long long int) arr_5 [i_0] [(unsigned short)4] [5ULL]))))))), (min((11346135234849372517ULL), (((/* implicit */unsigned long long int) -1897166220))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 1; i_2 < 11; i_2 += 4) /* same iter space */
                {
                    arr_9 [i_0 + 2] = ((/* implicit */unsigned int) max((max((max((0ULL), (((/* implicit */unsigned long long int) arr_6 [i_0])))), (min((((/* implicit */unsigned long long int) (unsigned char)172)), (var_10))))), (max((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned int) -1897166220))))), (max((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) -1897166220))))))));
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) max((min((max((((/* implicit */unsigned long long int) (signed char)3)), (var_10))), (((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned int) var_8))))))), (((/* implicit */unsigned long long int) max((min((3361268326U), (((/* implicit */unsigned int) (unsigned short)55595)))), (((/* implicit */unsigned int) -1897166220)))))));
                }
                for (long long int i_3 = 1; i_3 < 11; i_3 += 4) /* same iter space */
                {
                    arr_13 [i_0] [(unsigned short)4] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_0)), (3361268326U)))), (min((((/* implicit */long long int) (_Bool)1)), (0LL)))))), (max((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned int) var_7))))), (min((((/* implicit */unsigned long long int) 1270799578)), (var_10)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_1] [i_3 + 3] [i_4] [i_5] = ((/* implicit */long long int) min((min((max((((/* implicit */unsigned int) arr_12 [(short)12] [i_3 + 2] [i_5])), (3361268317U))), (min((var_4), (arr_5 [i_0 + 1] [i_0] [i_0]))))), (max((min((((/* implicit */unsigned int) (unsigned char)93)), (933698985U))), (min((arr_5 [i_0 - 3] [i_3 + 1] [i_3]), (((/* implicit */unsigned int) var_0))))))));
                                var_15 ^= ((/* implicit */int) min((((/* implicit */long long int) min((max((((/* implicit */unsigned short) var_0)), ((unsigned short)39189))), (((/* implicit */unsigned short) min(((unsigned char)150), (((/* implicit */unsigned char) var_6)))))))), (min((((/* implicit */long long int) max((1048320U), (((/* implicit */unsigned int) (unsigned char)163))))), (min((((/* implicit */long long int) (unsigned char)106)), (arr_11 [5ULL] [i_5])))))));
                            }
                        } 
                    } 
                }
                for (long long int i_6 = 1; i_6 < 11; i_6 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_30 [i_0] [i_0] [i_6 + 3] [i_8] = ((/* implicit */int) max((max((max((var_4), (((/* implicit */unsigned int) var_7)))), (max((var_12), (933698979U))))), (((/* implicit */unsigned int) max((max(((unsigned short)24700), (((/* implicit */unsigned short) var_6)))), (((/* implicit */unsigned short) max((arr_19 [i_7] [(_Bool)1]), ((short)7)))))))));
                                arr_31 [(signed char)10] [8ULL] [(short)4] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) max(((unsigned char)131), (((/* implicit */unsigned char) var_2))))), (min((((/* implicit */long long int) var_12)), (arr_11 [7ULL] [i_8])))))), (max((max((arr_24 [i_1] [i_6 - 1] [(unsigned char)3] [i_8]), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) max((arr_25 [i_0] [(unsigned short)10] [8ULL] [5] [i_8] [i_8]), (((/* implicit */unsigned short) var_2)))))))));
                                arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = max((((/* implicit */long long int) max((max((768174806), (((/* implicit */int) var_6)))), (((/* implicit */int) min((((/* implicit */unsigned char) var_2)), ((unsigned char)172))))))), (min((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_8 [i_0] [i_1] [i_7] [i_8])))), (((/* implicit */long long int) max((var_12), (((/* implicit */unsigned int) (unsigned short)1277))))))));
                            }
                        } 
                    } 
                    arr_33 [i_6 + 1] [(unsigned short)5] [i_0 + 3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) -1798648516)), (-6891010018176035735LL)))), (max((max((((/* implicit */unsigned long long int) var_8)), (arr_7 [i_0] [10] [(unsigned short)4] [(unsigned short)4]))), (max((((/* implicit */unsigned long long int) -7272656620651282733LL)), (17705088406358313959ULL)))))));
                    arr_34 [(_Bool)1] [i_1] [(unsigned char)9] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned short) arr_20 [i_1] [i_1] [13U] [i_1] [i_1] [i_1] [(short)12])), (var_8))), (max((var_9), (((/* implicit */unsigned short) var_5))))))), (min((min((13182537638992917482ULL), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (var_4))))))));
                }
                arr_35 [i_0 + 3] = min((((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) var_0)), (var_4))), (min((var_12), (((/* implicit */unsigned int) var_1))))))), (min((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */int) arr_17 [10] [10] [i_0] [9LL] [i_0 + 3]))))), (max((arr_7 [i_0 + 3] [i_1] [i_0 + 3] [(unsigned short)11]), (((/* implicit */unsigned long long int) var_3)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) min((min((max((((/* implicit */unsigned short) var_1)), ((unsigned short)45548))), (max((var_8), (((/* implicit */unsigned short) (_Bool)1)))))), (min((max((var_7), ((unsigned short)19987))), (((/* implicit */unsigned short) max((((/* implicit */short) (unsigned char)180)), ((short)16827))))))));
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) min((max((max((var_8), (((/* implicit */unsigned short) var_1)))), (max((((/* implicit */unsigned short) (short)-16827)), (var_8))))), (min((max((((/* implicit */unsigned short) (signed char)53)), (var_7))), (((/* implicit */unsigned short) max((var_1), (((/* implicit */signed char) var_2))))))))))));
    var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((min((((/* implicit */int) var_5)), (var_3))), (((/* implicit */int) min(((short)26616), (((/* implicit */short) var_0)))))))), (max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_1)), ((unsigned short)24062)))), (max((var_12), (((/* implicit */unsigned int) (short)3584))))))));
}
