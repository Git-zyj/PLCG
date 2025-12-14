/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240316
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
    var_12 = ((((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */int) (signed char)0)), (1375570699)))), ((-(-7313559766864079861LL)))))) ? ((~(((((/* implicit */_Bool) (unsigned short)65535)) ? (var_7) : (7836347505129623610ULL))))) : (var_3));
    var_13 &= ((/* implicit */unsigned long long int) var_1);
    var_14 = ((/* implicit */signed char) 4294967290U);
    var_15 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] &= ((/* implicit */long long int) (+(4294967282U)));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned char) arr_2 [i_1]))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-13560))) : (arr_1 [i_1])))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    arr_10 [i_0] [10LL] [i_2] [i_0] = ((/* implicit */short) arr_4 [i_0] [i_1]);
                    arr_11 [i_0] = ((/* implicit */int) min((arr_1 [i_0]), (max((arr_4 [i_2] [i_1]), (arr_4 [i_1] [i_0])))));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    for (long long int i_4 = 2; i_4 < 17; i_4 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) arr_14 [i_0] [i_1] [i_4 - 2] [i_4 - 1]);
                            var_17 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) ((unsigned int) 17689833588067894033ULL))), (max((5580465528045419663LL), (arr_13 [i_0]))))), (((/* implicit */long long int) ((unsigned short) -5580465528045419664LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
