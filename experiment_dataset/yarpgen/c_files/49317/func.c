/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49317
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
    var_10 *= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)6)) ? (((/* implicit */int) (signed char)91)) : (134217720))))) >> (((((/* implicit */int) var_4)) - (12059)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */short) max((max((((/* implicit */int) max(((signed char)-91), ((signed char)71)))), (((((/* implicit */_Bool) arr_3 [i_0] [i_4])) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) var_4)))))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_0 [i_3] [i_4])) : (((/* implicit */int) (short)11583)))) != ((-(var_0))))))));
                                var_11 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? ((-(((/* implicit */int) (short)(-32767 - 1))))) : ((+(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_1 [i_3] [i_1]))))))));
                                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(min((-5395757914782659474LL), (((/* implicit */long long int) arr_0 [(signed char)7] [i_3]))))))) ? (((/* implicit */long long int) min((((((/* implicit */int) (signed char)-39)) ^ (arr_6 [i_0] [(unsigned char)15] [i_4]))), (((((/* implicit */_Bool) arr_8 [(signed char)2] [i_1] [i_2] [4ULL])) ? (((/* implicit */int) (short)32760)) : (((/* implicit */int) var_5))))))) : ((~(max((var_8), (((/* implicit */long long int) var_9)))))))))));
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] = arr_2 [i_0];
                                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (-((-(((unsigned long long int) (unsigned char)17)))))))));
                            }
                        } 
                    } 
                    arr_14 [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 2] [i_2 + 1])) ? (arr_4 [i_0] [i_0 - 1] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-15)))))) ? (((arr_4 [i_0] [i_0 + 2] [i_2 - 2]) ^ (16805030906868924590ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1] [i_2 - 2]))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 0U)) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32767))))))))) ? (((long long int) ((var_0) ^ (((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((((/* implicit */int) var_1)) | ((~(((/* implicit */int) var_9)))))))));
}
