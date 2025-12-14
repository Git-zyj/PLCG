/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246563
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_16 &= ((/* implicit */unsigned long long int) (signed char)21);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_13 [2ULL] [i_0] [i_0] [(short)11] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned short) (short)9579)), ((unsigned short)54527))), (((/* implicit */unsigned short) arr_6 [i_1 + 3] [i_1 - 3] [i_1 + 3]))))) ? (((/* implicit */int) ((((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) < (((/* implicit */int) arr_2 [i_1 - 2] [i_0])))) && (((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-8)), (var_10))))))) : (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1] [(unsigned short)7])) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (_Bool)0))))));
                                arr_14 [i_4] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)22))))) && (((/* implicit */_Bool) ((int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_4])))))), (arr_7 [i_2])));
                                var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-56)) && (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)11029)) < (((/* implicit */int) (_Bool)1))))))))));
                                var_18 &= ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */int) arr_9 [(signed char)7] [(signed char)7] [(signed char)7] [i_3] [i_4])) >= (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)217))) <= (arr_8 [i_3] [i_1])))))) | ((~(((/* implicit */int) (unsigned char)255))))));
                            }
                        } 
                    } 
                    var_19 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))))), (max(((-(((/* implicit */int) (signed char)-10)))), (((((/* implicit */_Bool) (short)27401)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))))));
                    arr_15 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_9 [4ULL] [i_2] [i_1 + 1] [(signed char)7] [i_0 - 1])) == (((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1])))) ? (((/* implicit */int) max(((unsigned short)891), (((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1]))))) : ((((_Bool)1) ? (((/* implicit */int) arr_9 [(signed char)12] [i_0] [(signed char)12] [(short)9] [i_0])) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) 3052864737557389253ULL))) != (((var_2) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)7641)))))))))));
}
