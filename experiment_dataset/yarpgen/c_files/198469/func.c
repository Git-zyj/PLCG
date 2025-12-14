/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198469
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-55))) & (var_2)))) >= (((((/* implicit */_Bool) 4294967295U)) ? (14269429209043435714ULL) : (14269429209043435714ULL))))), ((!(((/* implicit */_Bool) 912604813U))))));
                var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16384)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned char i_5 = 3; i_5 < 9; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-12735)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 5U))))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_5 - 1] [i_6]))))), ((-(((/* implicit */int) (unsigned char)92))))))));
                                arr_17 [i_2] [i_4] [i_2] [i_3] [i_6] [5U] [1U] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_2] [i_4] [i_4] [i_5]))));
                                arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) (~(min((0U), (((unsigned int) 0U))))));
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_5 - 3] [i_5 + 1])) ? (((/* implicit */int) arr_8 [i_5 - 1])) : (((/* implicit */int) arr_3 [i_4] [i_5 - 1] [i_5 - 1]))))))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (~(3758096384U))))))));
            }
        } 
    } 
}
