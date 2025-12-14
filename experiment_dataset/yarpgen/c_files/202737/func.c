/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202737
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
    var_14 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)63))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) min((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) var_5))));
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) min(((short)-32767), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)7)) && (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_3])))))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_5 [i_2] [i_2 + 3] [i_2])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_2] [i_3])) : (((/* implicit */int) (_Bool)1))))))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (short)1146))))), (var_0))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    for (unsigned short i_5 = 3; i_5 < 14; i_5 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((arr_13 [i_0] [i_1] [i_4] [i_1]), (((/* implicit */long long int) (unsigned char)7))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_4] [i_5]))) : (max((arr_10 [i_0 - 1] [i_5 + 4] [i_1] [i_5]), (((/* implicit */long long int) var_11))))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((var_4), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) arr_14 [i_0] [i_1] [i_4] [i_5]))))) ? (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (unsigned short)1920)) : (((/* implicit */int) (short)-9984)))) : (((/* implicit */int) ((unsigned short) arr_12 [i_1] [i_4])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_6 = 3; i_6 < 17; i_6 += 2) 
                {
                    for (short i_7 = 2; i_7 < 16; i_7 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((-7107868505421185401LL) + (7107868505421185414LL))) - (13LL))))))) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_16 [i_0] [i_1]))) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_6] [i_7])) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_1])))) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_6] [i_7]))));
                            var_20 = ((/* implicit */unsigned short) (_Bool)1);
                            var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-9969)), (min((((((/* implicit */_Bool) (unsigned char)70)) ? (var_8) : (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_6] [i_1])))), (((/* implicit */unsigned long long int) var_4))))));
                            arr_21 [i_1] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))), (((((/* implicit */_Bool) (short)-9984)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-27349))) : (474245919U)))))) || (((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_6] [i_1] [i_6] [i_6])) && (((/* implicit */_Bool) var_13)))))))));
                            var_22 = ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_7])) ? (((/* implicit */int) (unsigned short)63601)) : (((/* implicit */int) (unsigned short)49181))))) || ((!(((/* implicit */_Bool) arr_11 [i_0 - 2] [i_1] [i_6 - 1]))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) min((arr_3 [i_1]), (((/* implicit */short) arr_2 [i_1] [i_1]))));
            }
        } 
    } 
}
