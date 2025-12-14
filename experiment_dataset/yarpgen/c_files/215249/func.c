/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215249
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((unsigned char) (unsigned char)114);
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2 + 1] [i_1] [i_3 - 1] [i_2 + 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65535))));
                                arr_14 [(signed char)12] [i_1] [i_2] [i_2] [i_2] [i_3 + 1] [i_2] |= ((unsigned char) 4294967295U);
                                var_20 = ((/* implicit */unsigned int) var_4);
                                var_21 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((int) (unsigned char)70))), (min((arr_3 [i_0] [i_4 - 2] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)17))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = (unsigned char)70;
    /* LoopNest 2 */
    for (signed char i_5 = 3; i_5 < 19; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        {
                            arr_25 [i_6] [i_6] [i_5] [i_5] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_16 [i_5]), (arr_16 [i_5])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_16 [i_5]))))) : (18446744073709551615ULL)));
                            var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)30)) < (((/* implicit */int) (signed char)-1)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (unsigned char)9))))));
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) var_15))));
                            var_26 = ((/* implicit */long long int) (-(var_7)));
                        }
                    } 
                } 
                var_27 += ((/* implicit */_Bool) var_8);
                var_28 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (short)12243))));
            }
        } 
    } 
}
