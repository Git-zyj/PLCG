/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35863
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
    var_11 = ((/* implicit */unsigned long long int) (+(((var_3) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_4 - 3] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) min((arr_9 [i_2 - 1] [i_2 - 1] [i_0] [i_2 - 1] [i_4 - 1]), (arr_9 [i_2 - 1] [i_2 - 1] [i_0] [i_2 - 1] [i_4 - 1])))), (((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2 - 1] [i_0] [i_2 - 1] [i_4 - 1])) ? (((/* implicit */int) arr_9 [i_2 - 1] [i_2 - 1] [i_0] [i_2 - 1] [i_4 - 1])) : (((/* implicit */int) (short)(-32767 - 1)))))));
                                arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */long long int) -939369369)) & (arr_5 [i_0] [i_2 + 1] [i_2 - 1])))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max(((-(((((/* implicit */_Bool) arr_4 [(_Bool)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15313))) : (17602637631718823884ULL))))), (((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_2 + 2] [i_2]) & (((/* implicit */long long int) ((/* implicit */int) arr_8 [(_Bool)1] [i_2 + 2] [i_0]))))))));
                    arr_16 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)15035)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)15308)), ((unsigned short)33443)))) : ((-(-1645166370)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 4; i_5 < 15; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                arr_22 [i_5] = ((/* implicit */short) (unsigned short)58886);
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    for (short i_8 = 2; i_8 < 14; i_8 += 3) 
                    {
                        {
                            arr_27 [i_5] [i_5] [(_Bool)1] [i_5] [(_Bool)1] [i_5] = ((/* implicit */long long int) (signed char)-74);
                            arr_28 [i_8 - 2] [10LL] [i_6] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(1645166369))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) (short)15313);
}
