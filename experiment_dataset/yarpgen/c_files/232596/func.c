/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232596
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
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -5331004359765058652LL)) && (((/* implicit */_Bool) var_1)))))) < (arr_8 [i_0] [i_2] [i_3 + 2])))), ((+(((/* implicit */int) (!((_Bool)0))))))));
                                var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_10)))));
                                var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0 - 1] [i_1] = ((/* implicit */_Bool) 3137363604086641331LL);
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_14 [(unsigned short)7] [i_1] [1ULL] [i_0] [i_1] [16] [i_1])) : (((/* implicit */int) arr_9 [(signed char)4]))))) ? (((((/* implicit */int) arr_10 [i_0 - 2] [i_0 + 1])) % (((/* implicit */int) arr_10 [i_0 - 2] [i_0 - 2])))) : (((/* implicit */int) arr_15 [i_1] [i_1] [4U] [i_1] [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 18; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        for (int i_9 = 3; i_9 < 18; i_9 += 2) 
                        {
                            {
                                var_21 -= (!(((/* implicit */_Bool) max(((((_Bool)0) ? (3263247214U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_0)))))))));
                                arr_30 [i_5] [i_6] = ((/* implicit */unsigned long long int) arr_4 [(unsigned char)0]);
                            }
                        } 
                    } 
                } 
                var_22 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (~(var_15))))) || (((arr_25 [i_6] [i_5] [i_6] [i_6]) >= (((/* implicit */unsigned long long int) arr_1 [i_5]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_10 = 1; i_10 < 15; i_10 += 2) 
    {
        for (long long int i_11 = 2; i_11 < 15; i_11 += 3) 
        {
            {
                arr_37 [i_10] [(unsigned char)14] |= ((/* implicit */unsigned long long int) ((unsigned int) arr_23 [2LL] [i_11] [i_10] [11]));
                var_23 = arr_34 [i_11] [2ULL];
                var_24 = ((/* implicit */int) var_8);
            }
        } 
    } 
}
