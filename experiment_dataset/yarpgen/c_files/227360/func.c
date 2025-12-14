/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227360
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) 1397636164);
                                var_17 = ((/* implicit */unsigned int) ((int) 2693822277U));
                                var_18 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 3253718562U)) || (((/* implicit */_Bool) 1041248733U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1041248735U)) ? ((-(0ULL))) : (16743575074006530337ULL))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (long long int i_5 = 1; i_5 < 9; i_5 += 2) 
                    {
                        arr_18 [i_1] [i_5] [i_0] [i_0] [i_1] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)31)) && (((/* implicit */_Bool) (unsigned char)205))));
                        arr_19 [i_0] [6] [i_1] [i_0] [i_0] [i_1] |= ((/* implicit */short) var_7);
                    }
                    /* vectorizable */
                    for (signed char i_6 = 1; i_6 < 11; i_6 += 4) /* same iter space */
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) (signed char)-59);
                        var_19 |= ((/* implicit */int) ((((/* implicit */_Bool) 1041248730U)) ? (var_3) : (((/* implicit */unsigned int) var_8))));
                    }
                    for (signed char i_7 = 1; i_7 < 11; i_7 += 4) /* same iter space */
                    {
                        arr_27 [i_1] [7] [i_2] = ((/* implicit */signed char) (-(((int) 3253718565U))));
                        arr_28 [i_2] = ((/* implicit */signed char) 3253718559U);
                        arr_29 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_0)))) && ((!(((/* implicit */_Bool) (signed char)67))))));
                        arr_30 [i_1] [i_7] |= max((((((/* implicit */_Bool) ((int) var_2))) ? (4398046511103LL) : (((((/* implicit */_Bool) -1687989225)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (7185189356070186137LL))))), (max((-3503651067463855448LL), (((/* implicit */long long int) 3253718561U)))));
                    }
                    var_20 = max((((/* implicit */unsigned int) min((1687989225), ((~(1826592733)))))), (((((/* implicit */_Bool) (unsigned short)999)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 0U)))) : ((~(1041248735U))))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) (_Bool)1))))) ? ((+(var_9))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1687989228)) ? (((/* implicit */int) var_0)) : (-2147483646))))));
                    var_22 |= ((/* implicit */unsigned int) -1687989225);
                }
            } 
        } 
    } 
    var_23 = max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))), (var_5));
}
