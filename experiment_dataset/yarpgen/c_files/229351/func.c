/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229351
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_3] = ((/* implicit */short) max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (arr_1 [i_3 - 1]))), (((/* implicit */int) ((((arr_5 [i_3]) ^ (-706443605))) >= (((/* implicit */int) (short)-27386)))))));
                        var_10 = max((((/* implicit */unsigned int) ((unsigned short) var_3))), (max((((/* implicit */unsigned int) var_9)), (var_3))));
                        var_11 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) % (((/* implicit */int) arr_2 [i_3 - 1] [i_3 - 1]))))) && (((/* implicit */_Bool) var_2))));
                        var_12 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((var_2), (var_8)))), (min((2622047267U), (((/* implicit */unsigned int) (signed char)-98))))))) ? ((+(((long long int) var_9)))) : (((/* implicit */long long int) max((arr_9 [i_3 - 1] [i_1]), (((/* implicit */unsigned int) var_2)))))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [10] [i_2] [i_2] [i_2] [i_4 - 1] = ((/* implicit */signed char) (~(((/* implicit */int) max((arr_2 [i_4 - 1] [i_4 - 1]), (arr_2 [i_4 - 1] [i_4 - 1]))))));
                        var_13 -= ((/* implicit */unsigned long long int) (~(((unsigned int) min(((signed char)-53), (((/* implicit */signed char) (_Bool)0)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_14 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) ((unsigned long long int) (_Bool)0))))));
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) max(((signed char)-45), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)22568)))))))) >> (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1)))) % (var_3)))));
                            }
                        } 
                    } 
                    var_15 ^= ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (arr_17 [i_0] [i_1] [i_2] [i_0])))));
                    /* LoopNest 2 */
                    for (short i_7 = 3; i_7 < 12; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 11; i_8 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_1 [i_2]), (arr_1 [i_7 - 3])))) && ((!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0]))))));
                                arr_29 [i_0] [i_1] [i_2] [i_0] [i_1] = var_4;
                                var_17 ^= ((/* implicit */unsigned short) min((((/* implicit */int) ((short) (_Bool)1))), ((+(((((/* implicit */int) var_1)) ^ (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_2]))) * (arr_8 [i_0] [i_1] [i_1])))));
                }
            } 
        } 
    } 
    var_19 ^= ((/* implicit */int) ((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (min((var_0), (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))))));
    /* LoopNest 3 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            for (int i_11 = 3; i_11 < 22; i_11 += 3) 
            {
                {
                    var_20 |= ((/* implicit */int) max(((_Bool)0), ((_Bool)1)));
                    arr_39 [i_9] [i_9] = (!(((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) >= (5349576947501602940LL))));
                    arr_40 [i_9] [12LL] [i_11] [(unsigned char)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)27999)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-95))));
                }
            } 
        } 
    } 
}
