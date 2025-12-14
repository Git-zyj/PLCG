/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39630
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */int) max(((unsigned short)62847), ((unsigned short)62825)));
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((int) ((_Bool) arr_3 [(signed char)10] [i_1 - 2] [i_1 - 2]))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_14 [i_4] [i_1] [i_1] [i_1 - 2] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1] [i_1 - 1] [i_2])))))));
                                var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)106)), ((unsigned short)44306)))) != (((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned short)62829))))))), (arr_11 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0] [i_4])));
                                var_14 = ((/* implicit */short) max((max((var_9), (((/* implicit */long long int) arr_10 [i_1] [(unsigned short)11] [i_1 + 2])))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_10)))) ? (min((0U), (1048568U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))))))));
                                arr_15 [i_1] [i_1 - 3] [i_2] [i_1 - 3] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((int) (-(max((71672796), (((/* implicit */int) arr_4 [i_1] [i_1] [i_2])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        var_15 *= ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) -624669063)) && (((/* implicit */_Bool) -7242076194241315207LL))))), ((+(((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (signed char)88))));
        arr_19 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) max(((signed char)0), (min((((/* implicit */signed char) (_Bool)0)), ((signed char)-105)))))) >= ((+((-(((/* implicit */int) var_2))))))));
    }
}
