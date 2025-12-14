/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190702
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
    var_10 = (-(((/* implicit */int) (short)19182)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_11 = ((long long int) (-(max((((/* implicit */unsigned int) arr_2 [i_0])), (131072U)))));
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) -6541441090445857235LL))))) : (((/* implicit */int) var_2))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_13 &= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)-21711)) ? (-4416354487874706811LL) : (((/* implicit */long long int) 3298977034U))))));
        var_14 = ((/* implicit */long long int) var_9);
    }
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        var_15 = ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_2]))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(31ULL)))) ? ((+(arr_0 [i_2]))) : (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) (short)-17017)) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) arr_1 [i_2] [i_2])))))))));
        var_17 = ((/* implicit */long long int) max((127ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_2])))))));
        var_18 &= ((/* implicit */int) max((((/* implicit */unsigned long long int) (_Bool)0)), (3399557503447550997ULL)));
        var_19 = ((/* implicit */unsigned int) (~(var_8)));
    }
    var_20 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(2147483644)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101))) : (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) var_8))))))), (var_5)));
    /* LoopSeq 1 */
    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        var_21 = ((/* implicit */short) var_9);
        var_22 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 4294967295U))))));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) arr_2 [6U])) : (((/* implicit */int) arr_5 [i_3])))) << (((var_4) / ((+(var_9))))))))));
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_4] [i_3] [i_5] [i_5] [i_5] [i_7 + 3]))) != (((((/* implicit */_Bool) 0ULL)) ? (7873694398730374555LL) : (((/* implicit */long long int) 24885007U))))))), ((-(-250265316)))));
                            var_25 = ((/* implicit */short) (~(((long long int) (signed char)-87))));
                        }
                        var_26 = ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */unsigned long long int) -1LL)) : (14907441383699339285ULL))) == (((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_11 [i_6]))))))));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_3] [i_4])) ? ((~(((((/* implicit */_Bool) 3876987575582751627LL)) ? (arr_16 [i_3] [i_3] [i_6] [i_4] [i_3]) : (571505780185494858LL))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (-1073741824) : (((/* implicit */int) var_2))))), (-1069250024900858764LL)))));
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) var_8))));
                        var_29 = ((/* implicit */long long int) min((740631564U), (443244367U)));
                    }
                } 
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned int) var_6);
}
