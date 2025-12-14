/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21614
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)25))))) % (((((/* implicit */_Bool) var_4)) ? (arr_0 [i_1]) : (arr_0 [i_1]))))));
                arr_5 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (arr_0 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1] [i_1])) + (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) arr_2 [i_1] [i_1]))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */short) max((((/* implicit */unsigned short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)47))))), (((signed char) (signed char)127))))), (var_3)));
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 4) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((70368207306752ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)45))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)25)))));
        arr_9 [i_2] [i_2] &= ((/* implicit */unsigned int) arr_6 [i_2]);
    }
    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 4) /* same iter space */
    {
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned short) var_8);
        arr_15 [i_3] [i_3] |= ((/* implicit */int) arr_6 [i_3 - 1]);
        arr_16 [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)65535));
        arr_17 [i_3] [i_3] = ((/* implicit */unsigned int) arr_13 [i_3 - 2]);
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            for (unsigned short i_5 = 2; i_5 < 20; i_5 += 4) 
            {
                for (int i_6 = 4; i_6 < 20; i_6 += 4) 
                {
                    {
                        arr_27 [i_6] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_22 [i_3] [i_3] [i_5] [i_3])) ? (var_1) : (((/* implicit */unsigned long long int) var_4)))) % (((/* implicit */unsigned long long int) arr_11 [i_4]))))) && (((/* implicit */_Bool) ((arr_25 [i_3 + 1]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)203))))))));
                        arr_28 [i_5 - 1] [i_4] [i_6 + 2] [i_6 + 2] [i_5 - 1] [i_4] = ((/* implicit */unsigned short) var_6);
                        arr_29 [i_3] [i_3] [i_3] [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_22 [i_6 - 2] [i_6] [i_6] [i_6 - 2])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)2047))))) : (((((/* implicit */_Bool) 2643184603U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-39))) : (14755079777361486157ULL)))));
                    }
                } 
            } 
        } 
    }
}
