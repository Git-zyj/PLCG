/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225641
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
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_18 += ((/* implicit */long long int) min((((((/* implicit */int) var_15)) == (((/* implicit */int) arr_11 [i_4 + 1] [i_2] [i_0 - 3] [i_0] [i_2] [i_0])))), (((var_3) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 18446744073709551604ULL))))))));
                                var_19 = ((/* implicit */long long int) (-(arr_6 [i_4 - 2])));
                            }
                        } 
                    } 
                    var_20 ^= ((/* implicit */_Bool) min(((signed char)7), ((signed char)-6)));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 17; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_2] [i_0] [i_5] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-7))));
                                var_21 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-6)), (var_13)))) ? (((((/* implicit */_Bool) 1708008358)) ? (3146125354923240637LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-14849))))) : ((+(arr_15 [i_0 + 1] [i_5 + 4] [(unsigned short)5] [i_5] [i_5 + 4] [i_6 - 1])))))));
                                arr_22 [i_0] [14] [(signed char)5] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_9 [i_5 + 3] [i_5 - 1] [(unsigned short)8] [i_5 + 4])))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))));
                                arr_23 [i_0] [i_0 - 1] [i_0] [i_2] [i_0] [i_6 - 1] = ((/* implicit */unsigned int) var_1);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) var_2);
                    var_23 = ((/* implicit */unsigned long long int) ((min((min((var_6), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8086272215276647541LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : (var_8)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10395)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            {
                var_24 *= ((/* implicit */_Bool) ((((/* implicit */long long int) max((((/* implicit */int) min((var_1), (((/* implicit */short) var_16))))), (((((/* implicit */_Bool) (unsigned short)46845)) ? (((/* implicit */int) (_Bool)1)) : (-204360592)))))) - ((~(arr_15 [(short)10] [i_7] [(short)10] [i_7] [i_7] [i_7])))));
                arr_28 [i_7] [(unsigned short)6] [i_7] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_4 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */int) (unsigned short)64116)) : (((/* implicit */int) min((var_10), (var_15))))))));
                var_25 -= ((/* implicit */unsigned char) (signed char)12);
            }
        } 
    } 
    var_26 &= ((/* implicit */long long int) (((~((~(((/* implicit */int) var_4)))))) % (((/* implicit */int) min(((signed char)-31), (((/* implicit */signed char) (_Bool)1)))))));
    var_27 &= ((/* implicit */signed char) var_17);
}
