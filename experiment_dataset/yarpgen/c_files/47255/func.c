/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47255
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_12 += ((/* implicit */signed char) arr_5 [5ULL]);
                                arr_13 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */short) var_9);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0]))))) - (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))) - (arr_6 [i_0])))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((_Bool) ((signed char) -1))) ? (min((var_4), (((((/* implicit */_Bool) (unsigned short)4531)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)704))) : (65535ULL))))) : (((/* implicit */unsigned long long int) var_2))));
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) (short)16985))))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    for (int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        {
                            arr_23 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)12414))))), (max((((/* implicit */unsigned long long int) var_9)), (var_10)))))));
                            arr_24 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) min((((/* implicit */int) min(((short)-16986), (((/* implicit */short) (signed char)-105))))), (max((arr_19 [i_5] [i_6] [i_7]), (arr_19 [i_5] [5ULL] [i_5])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
    {
        for (int i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            {
                arr_31 [i_9] [i_10] [i_9] = ((/* implicit */unsigned char) var_1);
                var_16 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)189)) ? (8) : (((/* implicit */int) (unsigned char)196))))) ? (-449545535) : (((/* implicit */int) (signed char)-3)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) 12949648987981962957ULL);
}
