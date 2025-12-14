/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231946
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((((/* implicit */_Bool) -575623417)) ? (((/* implicit */int) (signed char)48)) : (var_2))), ((+(var_2)))))) / (var_4)));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) (signed char)22))))) ^ (((((((/* implicit */_Bool) (unsigned short)2)) || (((/* implicit */_Bool) arr_2 [i_0 + 4])))) ? (((/* implicit */unsigned long long int) ((unsigned int) (signed char)70))) : (((unsigned long long int) (unsigned short)3666))))));
                var_12 = ((((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_1 [i_1])), (var_3))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2])))))) | (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */short) (signed char)75))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 4; i_2 < 14; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    arr_13 [i_4] [i_3] [i_2] = ((/* implicit */signed char) (((-(((/* implicit */int) (signed char)76)))) & (((/* implicit */int) (signed char)-52))));
                    arr_14 [(unsigned char)1] [i_3] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-32))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)65535))) : ((+(var_3)))))));
                }
                for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (((/* implicit */int) arr_5 [i_2 - 1] [i_2])) : (((/* implicit */int) (signed char)-71)))) % (((/* implicit */int) min(((short)-10104), (((/* implicit */short) (_Bool)1))))))))));
                                arr_22 [i_6] = ((/* implicit */unsigned int) ((signed char) ((((arr_18 [i_6] [i_6] [i_6] [i_6]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_6] [i_3])))) & (((((/* implicit */int) var_8)) / (((/* implicit */int) (unsigned short)54109)))))));
                                var_14 = ((/* implicit */_Bool) max(((+(((/* implicit */int) (_Bool)1)))), ((((+(((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [i_6])))) % (((((/* implicit */int) var_7)) | (((/* implicit */int) arr_4 [i_2] [7U]))))))));
                                var_15 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned short)11426)) ? (arr_12 [i_2] [i_3] [i_5]) : (((/* implicit */int) (signed char)92)))), (((/* implicit */int) arr_18 [i_2] [i_2] [i_6] [(unsigned char)4]))));
                            }
                        } 
                    } 
                    var_16 -= ((/* implicit */signed char) (unsigned char)196);
                }
                var_17 -= ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
            }
        } 
    } 
}
