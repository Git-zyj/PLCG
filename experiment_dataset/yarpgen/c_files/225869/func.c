/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225869
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
    var_13 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) > ((+(var_11))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) : (var_10));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4] [i_1] [i_2] [i_1] [3U] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) (-((~(arr_10 [i_4] [4U])))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (short)14347))))) ? (((/* implicit */unsigned long long int) min((2271033205602691761LL), (((/* implicit */long long int) var_4))))) : (((((/* implicit */_Bool) arr_6 [i_2] [(short)2] [i_1] [(short)2])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (6823623449465590249ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11623120624243961366ULL)) ? (arr_6 [14LL] [i_1] [i_1] [i_1 - 1]) : (-2271033205602691762LL))))))) && (((11623120624243961363ULL) > (((/* implicit */unsigned long long int) min((arr_1 [i_0]), (((/* implicit */unsigned int) var_3)))))))));
                                var_15 = ((/* implicit */_Bool) min((max((arr_6 [(signed char)15] [i_1] [i_1] [i_1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [(unsigned short)9] [i_1]))))))), (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_2] [i_2] [i_1]))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))))))));
                                var_16 = ((/* implicit */short) min((((/* implicit */long long int) min((min((var_5), (((/* implicit */unsigned int) (_Bool)1)))), (var_10)))), (6892956056561992645LL)));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                    {
                        var_17 &= ((/* implicit */signed char) 11623120624243961366ULL);
                        var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((-2271033205602691760LL) + (9223372036854775807LL))) << (((7927470514141798675ULL) - (7927470514141798675ULL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-27147))))) : ((~(((/* implicit */int) var_0))))))), ((~(((((/* implicit */unsigned long long int) arr_3 [i_1])) & (6823623449465590249ULL)))))));
                        var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)7520))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
                    {
                        var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)0))));
                        var_21 = ((/* implicit */unsigned short) 7927470514141798675ULL);
                        var_22 |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) max(((_Bool)1), ((_Bool)1)))), (min((var_6), (((/* implicit */short) var_4)))))))) > (min((((((/* implicit */_Bool) (short)0)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_6] [(short)16] [i_1] [i_6] [i_6]))))), (((var_9) << (((var_10) - (3860604433U)))))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)(-32767 - 1))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */int) ((max((0U), (((/* implicit */unsigned int) (_Bool)1)))) < (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) : (max((((/* implicit */int) ((_Bool) var_2))), (min((((/* implicit */int) (unsigned char)121)), (arr_10 [6ULL] [i_6])))))));
                    }
                    arr_19 [i_1] [i_1] = ((/* implicit */long long int) max((((unsigned long long int) arr_18 [i_1 + 3] [i_1] [i_2] [i_1 - 1] [(unsigned char)16])), (((((/* implicit */_Bool) min((11623120624243961366ULL), (((/* implicit */unsigned long long int) 1612313186))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) : (min((((/* implicit */unsigned long long int) var_1)), (var_11)))))));
                    var_24 ^= ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1])))));
                }
            } 
        } 
    } 
}
