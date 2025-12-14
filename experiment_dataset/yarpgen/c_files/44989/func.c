/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44989
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)41407))));
        var_17 = ((/* implicit */int) ((3494241680U) << (((/* implicit */int) (_Bool)1))));
        var_18 = (+(((((/* implicit */int) (_Bool)1)) + (var_13))));
        var_19 += ((/* implicit */_Bool) (unsigned char)206);
        arr_3 [i_0] [i_0] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) (_Bool)1);
        var_21 = ((/* implicit */unsigned char) (-(var_11)));
        var_22 = (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 9492784834716754658ULL))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
        arr_6 [(unsigned char)8] = ((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)99))))) << (((800725612U) - (800725586U))));
    }
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 16; i_2 += 4) 
    {
        for (signed char i_3 = 2; i_3 < 16; i_3 += 4) 
        {
            {
                arr_11 [i_2 + 1] [i_2 - 1] = ((/* implicit */unsigned char) (unsigned short)46628);
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */unsigned long long int) 1891787073U)) : (var_6))) + (((/* implicit */unsigned long long int) 384790386U))));
                            arr_17 [i_2] [i_3] [i_4] = ((/* implicit */short) ((((2403180230U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)68))))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned short)0)) % (((/* implicit */int) (_Bool)1))))));
                            var_25 |= ((/* implicit */long long int) -1323840232);
                            arr_24 [i_7] [i_7] [i_6] [i_3 - 1] [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
                            arr_25 [i_2] [i_2] [i_2] = ((/* implicit */int) var_7);
                            arr_26 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) 1323840225)) || (((/* implicit */_Bool) -1323840214)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
