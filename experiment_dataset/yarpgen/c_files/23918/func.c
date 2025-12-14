/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23918
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1893954673)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((var_13) - (arr_4 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_7 [i_1] [i_1 - 1] [i_1 - 1] [i_0])))) : (((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1 - 1])) - (var_15)))));
                    arr_11 [i_0] [i_1] [i_1] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))), (((((/* implicit */_Bool) 1099511627775ULL)) ? (1099511627775ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33891))))))) == (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) (unsigned short)33891)), (arr_4 [i_2]))), (((/* implicit */unsigned int) arr_7 [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1])))))));
                    arr_12 [(short)5] [i_1] [i_0] = (~(((((3267397512108884995LL) - (-3267397512108885004LL))) - (((/* implicit */long long int) (+(var_1)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2] [5ULL] [i_1] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(signed char)7] [i_1 + 1] [i_1])))))) + (min((var_15), (((/* implicit */unsigned long long int) arr_5 [(unsigned short)4] [i_3])))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_8 [i_0] [i_1] [i_3])))))))));
                                arr_18 [(signed char)4] [i_1] [i_1] [i_1] [(unsigned char)6] [(signed char)1] [(unsigned char)9] = 1229181569979258648LL;
                                arr_19 [i_1] = (_Bool)0;
                            }
                        } 
                    } 
                    var_16 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) ((signed char) var_15)))))) - (var_2)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            {
                arr_27 [i_5] [i_5] [i_5] = ((/* implicit */signed char) arr_5 [i_6] [i_6]);
                arr_28 [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1893954662)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_5 [i_5] [i_6]) + (((/* implicit */long long int) ((/* implicit */int) (signed char)10)))))))))) : (max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_5] [i_5] [(unsigned char)3]))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) & (var_13)))))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        {
                            arr_34 [i_5] [i_8] = ((/* implicit */unsigned char) (~(var_10)));
                            arr_35 [i_5] [i_8] [(unsigned char)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((1099511627775ULL) == (((/* implicit */unsigned long long int) 1048575U)))))) ? (13685095523941167399ULL) : (var_12)));
                            var_17 = ((/* implicit */_Bool) min((arr_0 [i_7]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)17))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_9 = 1; i_9 < 9; i_9 += 4) 
                {
                    for (signed char i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        {
                            arr_40 [6] [i_9 - 1] [6] &= ((/* implicit */unsigned short) (~(max((arr_31 [i_9 - 1]), (arr_31 [i_9 - 1])))));
                            var_18 -= ((/* implicit */short) var_12);
                            arr_41 [i_5] [i_6] [i_9] [i_10] = ((/* implicit */int) var_5);
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = var_4;
}
