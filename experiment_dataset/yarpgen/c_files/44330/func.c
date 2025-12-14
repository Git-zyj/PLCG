/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44330
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (unsigned short)21))));
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 18; i_2 += 1) 
                {
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (-((((-(((/* implicit */int) (unsigned char)143)))) - (((/* implicit */int) (unsigned short)51795)))))))));
                    var_13 += ((/* implicit */unsigned char) (-(((/* implicit */int) min((((unsigned short) (unsigned short)65517)), (((/* implicit */unsigned short) arr_5 [i_0] [i_2 - 2] [i_2 + 1] [i_1])))))));
                }
                arr_7 [i_0] [i_1] = ((/* implicit */short) (unsigned char)196);
                arr_8 [i_0] [i_0] [i_1] |= ((/* implicit */int) (!(((/* implicit */_Bool) 0U))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (13611794636099240580ULL)))))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    for (unsigned char i_6 = 1; i_6 < 14; i_6 += 3) 
                    {
                        {
                            arr_18 [i_3] [i_6 + 2] = arr_4 [(short)11];
                            arr_19 [1U] [1U] [i_3] [i_6] = ((/* implicit */int) (unsigned short)13741);
                            var_15 = ((unsigned int) ((unsigned char) (~(((/* implicit */int) (unsigned char)170)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_7 = 3; i_7 < 15; i_7 += 4) 
                {
                    for (short i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */int) arr_15 [i_3] [i_4] [i_7] [i_8]);
                            var_17 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)19));
                            arr_27 [i_3] = ((/* implicit */unsigned char) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (15830026774348647088ULL))) * (((/* implicit */unsigned long long int) arr_17 [(unsigned short)2] [i_7] [i_7] [i_4] [i_3])))), (((/* implicit */unsigned long long int) (short)32747))));
                        }
                    } 
                } 
                var_18 ^= ((/* implicit */short) max((((unsigned long long int) (+(((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -4313064712874535751LL)) ? (arr_23 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */unsigned int) ((unsigned char) arr_10 [i_3]))))))));
                var_19 -= ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (short)-32748)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_4);
    var_21 = ((/* implicit */unsigned char) var_9);
}
