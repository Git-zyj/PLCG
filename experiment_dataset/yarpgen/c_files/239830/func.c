/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239830
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
    for (unsigned long long int i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (signed char i_4 = 4; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) min((((((((/* implicit */int) (short)-29612)) + (((/* implicit */int) arr_8 [i_2] [i_1] [i_1] [i_1])))) < (((((/* implicit */int) (short)-9292)) | (((/* implicit */int) (unsigned char)50)))))), (((((2147483644) | (((/* implicit */int) (short)-29625)))) == (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (short)1023)))))))));
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) arr_1 [i_4] [i_4 - 3]))))) && (((/* implicit */_Bool) max(((unsigned short)8191), ((unsigned short)7511)))))))) / (min((max((arr_9 [i_0]), (((/* implicit */unsigned long long int) arr_7 [i_2] [i_4 + 2])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32743)) ^ (((/* implicit */int) (short)-29625))))))))))));
                            }
                        } 
                    } 
                    var_20 += ((max((max((((/* implicit */unsigned long long int) var_7)), (11094810737857283642ULL))), (min((arr_9 [i_0 - 4]), (((/* implicit */unsigned long long int) (unsigned short)7519)))))) ^ (max((min((var_3), (((/* implicit */unsigned long long int) (_Bool)1)))), (min((arr_9 [i_2]), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_2 - 1])))))));
                }
                arr_12 [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) max((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)27743)))), (max(((_Bool)1), ((_Bool)0)))))), (((((/* implicit */long long int) ((-1619971600) - (((/* implicit */int) arr_1 [i_1] [i_0]))))) * (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 4] [i_0 - 4]))) % (arr_11 [i_0] [i_1] [7LL])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((max((((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1)))), (17ULL))) & (((((var_3) >> (((2147483647) - (2147483636))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (unsigned char)255)))))))))))));
    var_22 = ((/* implicit */_Bool) min((((((((((/* implicit */int) var_2)) + (2147483647))) << (((((((/* implicit */int) var_11)) + (33))) - (26))))) << (((((var_3) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17))))) - (3ULL))))), (((((/* implicit */int) (short)2)) / (((/* implicit */int) (_Bool)1))))));
}
