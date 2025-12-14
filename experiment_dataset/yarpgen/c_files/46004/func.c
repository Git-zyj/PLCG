/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46004
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
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 7; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) (+(((/* implicit */int) ((arr_7 [i_0 - 3]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 + 1] [i_1 + 1] [i_2]))))))));
                                var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)0))));
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((unsigned long long int) (~(((/* implicit */int) (unsigned short)17496)))))));
                                var_18 *= ((/* implicit */short) (+(((/* implicit */int) ((short) arr_12 [i_3] [(unsigned short)4] [i_0 - 2] [i_3] [i_0] [i_3])))));
                                var_19 = ((/* implicit */unsigned short) min(((-(-6091899919664244321LL))), (((/* implicit */long long int) (~(1352393418))))));
                            }
                        } 
                    } 
                    var_20 -= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) arr_12 [2LL] [i_2] [(unsigned short)6] [i_0] [2LL] [2LL])))))), (((((/* implicit */long long int) 2917950998U)) & (arr_4 [i_2] [i_2] [i_2 + 4])))));
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((unsigned int) (+(-8436551376326887737LL)))))));
                    arr_15 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) (~(arr_12 [i_1] [i_2 + 2] [i_1] [6] [i_1] [i_1])));
                }
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-961))))) || (((/* implicit */_Bool) arr_6 [i_0 + 2] [i_1 + 1]))));
                arr_16 [i_0] [i_1] [i_1] = ((/* implicit */int) ((signed char) max(((unsigned short)17473), (arr_13 [i_0 - 1] [i_0 - 1] [i_1 + 1]))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) var_4);
}
