/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52418
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_6))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_10 = ((/* implicit */int) ((max((arr_5 [(_Bool)1] [5LL]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-20424))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((int) 5914291505465099020LL)) == (((/* implicit */int) var_6))))))));
                                arr_15 [i_0] [(unsigned char)1] [(unsigned short)4] = ((/* implicit */unsigned char) (((_Bool)1) ? (max((((/* implicit */unsigned long long int) var_9)), (arr_5 [i_2] [i_0]))) : (((/* implicit */unsigned long long int) min((-8687481564458623463LL), (((/* implicit */long long int) (_Bool)1)))))));
                                var_11 = ((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_0] [(_Bool)1] [i_2] [i_3] [i_4] [i_0] [i_4])) ^ ((~(((/* implicit */int) (short)20425))))));
                                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)4304)))))));
                            }
                        } 
                    } 
                    var_13 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) ((int) arr_11 [i_0] [i_1] [(_Bool)1] [i_2] [i_1]))), (arr_10 [i_0] [i_1] [i_2] [i_0])));
                    arr_16 [0ULL] [2LL] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)97)), (5914291505465098998LL)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_8 [i_0] [i_1] [i_2]))) : (((((/* implicit */_Bool) 5914291505465099000LL)) ? (arr_8 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                }
                var_14 *= ((/* implicit */unsigned long long int) (~(min((2932836341822084869LL), (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_1] [i_1]))))));
                arr_17 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)159)) ? (-899397785) : (((/* implicit */int) (unsigned char)200))));
                arr_18 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)9374)) != (1665053078)));
            }
        } 
    } 
    var_15 = ((/* implicit */int) max((var_15), (max(((+(((/* implicit */int) var_9)))), (min((((/* implicit */int) (signed char)50)), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_9))))))))));
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 22; i_5 += 2) 
    {
        for (short i_6 = 1; i_6 < 21; i_6 += 2) 
        {
            {
                var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_19 [i_5 - 1]) && (((/* implicit */_Bool) arr_23 [i_6 + 3]))))) < (((((/* implicit */_Bool) arr_22 [i_5] [i_5] [i_6])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))));
                var_17 |= ((/* implicit */unsigned long long int) (unsigned short)51176);
            }
        } 
    } 
}
