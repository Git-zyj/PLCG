/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213093
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
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_11 |= ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0 + 2]);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_12 |= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_2] [7U] [i_3])) || (((/* implicit */_Bool) var_10)))) ? (1867188035) : (((/* implicit */int) var_1)))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-1402829283) : (((/* implicit */int) arr_1 [i_0] [i_2]))))) ? (((/* implicit */int) var_5)) : (var_0)))));
                            arr_9 [i_0] [i_1] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_2] [i_3] [i_3] [i_3] [i_3])), ((+(arr_2 [i_0] [i_0])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) var_6);
                            arr_17 [2LL] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) var_4))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))))) != (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (long long int i_6 = 1; i_6 < 20; i_6 += 4) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                arr_22 [i_6] [i_7] [i_6] = max((((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((1402829282) > (((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_4)), ((unsigned char)90)))) : ((~(((/* implicit */int) arr_20 [i_6])))))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        {
                            var_15 -= ((/* implicit */signed char) (-(((arr_20 [i_6 + 1]) ? (((/* implicit */int) arr_20 [i_6 + 2])) : (arr_25 [i_6] [i_6] [i_6 - 1] [i_9])))));
                            var_16 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (~(1117411358)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_6] [i_6 - 1] [i_8] [i_9]))) : (arr_19 [i_9]))), (((/* implicit */long long int) arr_25 [(signed char)22] [(signed char)22] [i_8] [i_7]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    for (short i_11 = 0; i_11 < 23; i_11 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) max((var_17), (var_4)));
                            var_18 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) -2015537049)) ? (((/* implicit */int) var_2)) : (var_6))) != ((-(((/* implicit */int) var_7)))))) ? (min((var_8), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) ((unsigned int) var_5));
            }
        } 
    } 
}
