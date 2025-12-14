/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197166
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        arr_12 [4ULL] [i_1] [i_2] [(short)9] = ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
                        var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)86)) && (((/* implicit */_Bool) -567153434))));
                    }
                    arr_13 [i_2] [i_2] [16LL] [i_0] = ((((/* implicit */_Bool) 15252964620841280712ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) : (3110817255917779160ULL));
                    var_19 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [13LL] [i_2])) ? (min((var_1), (((/* implicit */long long int) arr_4 [i_1])))) : (((/* implicit */long long int) min((((/* implicit */int) (signed char)-88)), (4095))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)4754), (((/* implicit */unsigned short) (unsigned char)163)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)97))) % (7549923726207937408ULL)))));
                    arr_14 [i_0] [(short)11] = ((/* implicit */unsigned short) var_7);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 2) 
    {
        for (signed char i_5 = 1; i_5 < 7; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) arr_2 [i_4 + 2] [i_5 + 3]))));
                        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))) - (arr_3 [i_5 + 2] [i_4 - 1])));
                        arr_28 [i_4] [(unsigned char)8] [(signed char)8] [i_4] |= ((/* implicit */_Bool) ((unsigned long long int) arr_21 [i_4]));
                    }
                    var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_17) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)156)) > (((/* implicit */int) var_5))))))))) ? (((/* implicit */int) ((signed char) var_3))) : ((~(((/* implicit */int) ((unsigned char) var_4)))))));
                    arr_29 [i_5] [i_4] [i_5] = ((/* implicit */unsigned long long int) (signed char)121);
                    var_23 = var_7;
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 8; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 2; i_9 < 9; i_9 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_13))))) / (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-34))) : (-5642271586523683999LL)))));
                                arr_34 [(_Bool)1] [i_4] [i_4] [i_5] [10LL] [i_5] [i_4] = (+(var_4));
                                arr_35 [i_5] [i_5] [i_5 + 4] [i_6] [i_8 + 1] [i_9] = ((/* implicit */short) (-(((((/* implicit */_Bool) -8403439971515200064LL)) ? (-5041156159657233326LL) : (((/* implicit */long long int) 67108736))))));
                                var_25 *= ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) (short)-26489)))));
                                var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)186)) ? (((/* implicit */unsigned long long int) -8131678677038982237LL)) : (850983340642619376ULL))), (((/* implicit */unsigned long long int) var_10))))) && (((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned long long int) 8403439971515200063LL)), (11199911010469698213ULL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
