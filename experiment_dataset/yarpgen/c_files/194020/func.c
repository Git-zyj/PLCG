/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194020
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
    for (short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) (+(arr_8 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0] [3U])));
                                var_17 = ((/* implicit */int) (unsigned char)252);
                                var_18 = ((/* implicit */_Bool) ((unsigned char) (unsigned short)65519));
                                var_19 -= ((/* implicit */unsigned int) var_0);
                                arr_10 [i_0] [i_0] [(unsigned char)3] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65528))) > (4095ULL)))), (arr_4 [i_0] [i_1] [i_2])));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) var_0);
                    var_21 = ((/* implicit */unsigned short) ((((arr_0 [i_0 - 1]) ^ (((/* implicit */int) var_1)))) <= (((/* implicit */int) (unsigned short)16))));
                    var_22 -= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 1048575U)) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)16), ((unsigned short)12))))) : (((arr_6 [0U] [0U] [0U] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            {
                arr_17 [i_6] [12ULL] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_15 [i_5] [i_5] [i_5])))) ? (arr_13 [i_6]) : (arr_12 [i_5])))), (((((((/* implicit */int) (short)-32765)) == (var_0))) ? (max((((/* implicit */long long int) var_7)), (var_13))) : (min((((/* implicit */long long int) arr_16 [i_5])), (var_9)))))));
                var_23 = ((/* implicit */unsigned int) ((((18446744073709547517ULL) ^ (((/* implicit */unsigned long long int) arr_14 [i_6])))) << (((((/* implicit */int) (short)32765)) - (32754)))));
                var_24 = arr_16 [i_6];
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)240))));
    var_26 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32764))) : (18446744073709547503ULL)))));
}
