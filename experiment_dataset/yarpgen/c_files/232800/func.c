/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232800
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) || (((_Bool) ((((/* implicit */_Bool) (signed char)-106)) ? (var_7) : (((/* implicit */int) var_9)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) var_13)))));
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        arr_12 [i_1] [i_3] = ((/* implicit */_Bool) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [(_Bool)1]))) * (arr_3 [i_0] [i_1] [5U]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)32))))) ? (((((/* implicit */int) arr_2 [i_2] [i_3])) / (((/* implicit */int) var_5)))) : (arr_6 [i_0 + 1] [i_0 - 1] [i_2 + 1]))))));
                        arr_13 [i_0] [i_3] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_3] [i_2 - 1] [i_3] [i_0]);
                        var_19 -= ((/* implicit */unsigned long long int) var_12);
                        arr_14 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-89))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
                    {
                        arr_18 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_4]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_4] [i_4] [i_2 - 1] [i_1] [(unsigned short)0]))))) : (((var_14) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)51745)) ? (1860102694) : (((/* implicit */int) arr_17 [i_4] [i_0] [i_0] [i_0])))))))));
                        arr_19 [i_2 + 1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3034139645U)) * (var_13)))) ? (2823769401167235778ULL) : (((/* implicit */unsigned long long int) min((-1860102694), (642946442)))))) / (1192803908798571472ULL)));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((8503142500534225411ULL) >> (((((/* implicit */int) (signed char)-121)) + (181)))))) ? (((/* implicit */int) arr_11 [1U] [i_0] [i_1] [1U] [i_4])) : (((/* implicit */int) max((((/* implicit */signed char) ((_Bool) arr_8 [4] [1ULL] [i_0 - 1] [7] [i_0 - 1] [i_0]))), (max((var_16), (((/* implicit */signed char) arr_10 [i_0 - 2] [i_2] [i_0 - 2] [i_4] [i_4])))))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max((arr_22 [i_1]), (((/* implicit */unsigned long long int) 2147483647)))))));
                            var_22 = (-(((((((/* implicit */int) ((signed char) (unsigned short)32767))) + (2147483647))) << (((var_6) & (((/* implicit */int) var_1)))))));
                            var_23 = ((/* implicit */unsigned long long int) var_16);
                        }
                        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            var_24 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((14241739202528274944ULL) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))))) ? (min((((/* implicit */unsigned long long int) (_Bool)0)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((-1860102703) * (((/* implicit */int) arr_11 [i_7] [i_7] [i_7] [i_7] [i_7])))) != (((/* implicit */int) ((((/* implicit */int) var_16)) > (((/* implicit */int) (signed char)33)))))))))));
                            arr_27 [(signed char)4] [i_1] [i_2] [i_5] [i_7] = ((/* implicit */unsigned int) ((var_8) && (((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) 2092738905))))))));
                        }
                        var_25 = ((/* implicit */unsigned long long int) (~(753669710)));
                        arr_28 [i_0] [i_0] [i_1] [i_1] [i_2] [i_5] &= ((/* implicit */_Bool) max((2147483647), (max((((int) 15ULL)), (((/* implicit */int) ((arr_22 [i_2]) != (((/* implicit */unsigned long long int) var_2)))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */_Bool) (signed char)-107);
                        /* LoopSeq 1 */
                        for (int i_9 = 3; i_9 < 8; i_9 += 2) 
                        {
                            var_27 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) >> (((((/* implicit */int) arr_30 [i_9 + 4] [i_0 - 4])) + (123)))));
                            arr_35 [i_0 - 2] [4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2092738905)) ? (((arr_3 [i_0 - 1] [(_Bool)1] [i_0 - 1]) >> (((var_6) - (22778109))))) : (((/* implicit */unsigned long long int) 0))));
                        }
                    }
                    var_28 = ((int) ((((/* implicit */_Bool) ((unsigned short) arr_15 [i_2 + 1] [i_0] [i_2] [i_2 + 1] [i_0] [i_0]))) ? (((((/* implicit */_Bool) 583394030)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_4))) : (((/* implicit */unsigned int) (~(arr_16 [i_1] [i_1] [8ULL] [i_1]))))));
                    arr_36 [i_1] [i_1] [i_2 + 2] = ((/* implicit */unsigned long long int) ((var_6) <= (((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551614ULL))))) & (((((/* implicit */int) var_9)) | (((/* implicit */int) arr_30 [i_2 + 1] [i_0]))))))));
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((arr_21 [i_0] [i_0 - 3] [i_0 - 4] [i_0 - 4] [i_0] [i_0 - 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_0] [i_0 - 3])) || (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1] [i_0]))))))))));
                }
            } 
        } 
    } 
}
