/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203161
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned char) var_7))), (min((((/* implicit */unsigned int) var_0)), (arr_5 [i_0] [i_1 - 1]))))))));
                arr_7 [i_0] [i_1 - 1] [i_1 - 1] = ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 6))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3 - 2] = var_4;
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(min((((/* implicit */int) (signed char)96)), (-1748134992)))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (arr_1 [(unsigned short)2])))) ? (((unsigned long long int) 723976726U)) : (((/* implicit */unsigned long long int) arr_9 [(unsigned short)10])))) : (min(((+(var_9))), (((/* implicit */unsigned long long int) var_10)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) var_1))));
                                var_17 -= ((/* implicit */unsigned short) ((((((/* implicit */long long int) min((var_4), (arr_0 [4ULL])))) ^ (arr_1 [(signed char)12]))) / (((/* implicit */long long int) min((-1453238258), (((/* implicit */int) (unsigned char)129)))))));
                            }
                        } 
                    } 
                } 
                arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-97)) & (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_1] [i_1 - 1]))) : (arr_19 [i_0] [i_0] [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_7 = 1; i_7 < 23; i_7 += 1) 
    {
        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_28 [i_9 - 1] [i_11] [i_9] [i_7 - 1])), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-32))))));
                                arr_33 [i_7] [i_8] [i_7] [i_9] [i_9] [i_10] [i_7] = ((/* implicit */signed char) ((unsigned char) (((((_Bool)1) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) (signed char)-13)))) * (((/* implicit */int) arr_28 [i_9 - 1] [i_8] [i_9] [i_7 - 1])))));
                                var_19 *= ((/* implicit */unsigned char) 5589564555654887226ULL);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) (short)6328);
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))));
}
