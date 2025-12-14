/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199616
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 |= ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */unsigned long long int) (short)64)), ((~(var_9))))));
                    arr_8 [(_Bool)1] [i_1] [i_1 - 1] [i_2] &= ((/* implicit */long long int) (signed char)125);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_2] [(signed char)4] [i_4 - 1] = ((((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)-126)))) - (((/* implicit */int) ((unsigned char) var_6)))))) ? ((+(((/* implicit */int) (signed char)-125)))) : ((~(((/* implicit */int) var_14)))));
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) == (((long long int) (short)254)))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3 - 1] [(signed char)2] = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) ((long long int) (signed char)86))))));
                                var_19 -= ((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-125))))), ((~(var_3)))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) max((min((765069519U), (((/* implicit */unsigned int) (unsigned char)119)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(1465755585))))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 2; i_5 < 12; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) (short)-11725);
                /* LoopNest 3 */
                for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) (unsigned char)180);
                                var_23 *= ((/* implicit */long long int) (signed char)-1);
                                var_24 = ((/* implicit */long long int) ((((/* implicit */int) max((arr_25 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]), (((/* implicit */unsigned char) (signed char)-125))))) | (((int) -1465755586))));
                                var_25 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (33546240U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-65))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_17 [i_5])))))));
                                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (-(((/* implicit */int) (short)256)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) ((unsigned long long int) (+(((/* implicit */int) (_Bool)1)))));
    var_28 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((((/* implicit */signed char) var_0)), ((signed char)-56)))))) ? (((/* implicit */int) max(((short)-65), (((/* implicit */short) (_Bool)0))))) : (((((/* implicit */_Bool) 4226049370161720219LL)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (_Bool)1))))));
    var_29 = ((/* implicit */_Bool) ((unsigned char) var_0));
}
