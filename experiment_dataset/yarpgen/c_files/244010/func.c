/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244010
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
    var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) var_4))));
    var_11 = ((/* implicit */unsigned char) var_3);
    var_12 *= ((/* implicit */unsigned char) max(((-(((/* implicit */int) var_9)))), (min((((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned short)20052)))), (((/* implicit */int) (unsigned char)0))))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) max((((/* implicit */short) (unsigned char)0)), (var_0))))))) : (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) min((var_5), (((/* implicit */short) (!(((/* implicit */_Bool) var_3)))))));
                            arr_12 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (short)-21581))))) > (((/* implicit */int) max((var_0), ((short)-21608))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_9)) & (((/* implicit */int) var_1)))) : ((+(((/* implicit */int) (short)-21601))))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (981855860U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
                        }
                    } 
                } 
                var_15 -= ((/* implicit */unsigned short) arr_1 [i_0]);
                var_16 -= ((/* implicit */unsigned short) var_5);
                arr_14 [i_0] = ((/* implicit */short) arr_11 [i_0] [i_1]);
                /* LoopNest 3 */
                for (unsigned char i_4 = 1; i_4 < 20; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_4] [i_5] [i_5] [i_5] [i_4] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21600))) : (arr_20 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)21589)) ? (((/* implicit */int) (short)-21601)) : (((/* implicit */int) var_8))))), (arr_1 [i_0]))))));
                                var_17 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21602)) ? (((/* implicit */int) arr_19 [i_6] [i_1] [i_4] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)55598))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_5]))))) : (((/* implicit */int) ((short) var_1))))), (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
