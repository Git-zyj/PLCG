/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41879
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
    var_10 = ((/* implicit */unsigned int) var_6);
    var_11 = ((/* implicit */unsigned short) min(((-(var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_4)))) : (((/* implicit */int) min(((short)-32744), (((/* implicit */short) var_3))))))))));
    var_12 = ((/* implicit */short) 18446744073709551608ULL);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_14 [2] [i_0] [i_2 - 1] [i_3] [i_4] [i_4] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 3]))) % (-1LL))) | (((/* implicit */long long int) arr_6 [i_0] [i_0]))));
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 1])) + (((/* implicit */int) arr_13 [i_0] [i_0 - 1] [i_2 + 2] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) || (arr_11 [i_0] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_2 + 2])))) : (((/* implicit */int) ((signed char) ((arr_5 [i_0] [7U]) | (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned char) -201290173))), (((((/* implicit */_Bool) arr_6 [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 + 2] [2U] [i_0] [i_0] [i_0]))) : (arr_6 [i_3] [i_0])))))) / (((((/* implicit */_Bool) (unsigned short)30324)) ? (((/* implicit */unsigned long long int) 872072655)) : (18446744073709551602ULL)))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) (((+(((/* implicit */int) arr_10 [i_0 - 1] [i_2 + 2] [i_2 - 1])))) + (((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_0 + 3] [i_2 + 1] [i_2 + 1])), (var_5))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        arr_18 [i_0 + 4] [i_1] [i_2 - 1] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (short)-1))));
                        arr_19 [i_0] [i_1] [i_1] [i_1] = 1LL;
                        arr_20 [i_0 + 1] [i_0] [i_2 - 1] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (short)32761)) > (((/* implicit */int) (signed char)71)))))));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) || (((/* implicit */_Bool) -22LL))));
                        /* LoopSeq 2 */
                        for (short i_6 = 4; i_6 < 10; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (short)32754)) : (arr_15 [(unsigned short)7] [i_1] [i_2] [i_5] [i_6]))) * ((+(((/* implicit */int) arr_3 [i_2] [i_5]))))));
                            var_18 = ((/* implicit */unsigned short) (+(arr_12 [i_2] [i_2 + 1] [i_6 - 3] [i_2 + 1] [i_0])));
                        }
                        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            arr_27 [i_0] [i_1] [i_2 - 1] [i_5] [i_5] [i_0] [i_7] = ((unsigned long long int) arr_8 [i_0 + 1] [i_0] [i_0]);
                            var_19 = ((/* implicit */_Bool) (+(arr_23 [i_0 + 2])));
                        }
                    }
                    arr_28 [i_0] = ((/* implicit */unsigned short) arr_25 [i_1] [i_0]);
                }
            } 
        } 
        arr_29 [i_0] [i_0] = ((/* implicit */signed char) max(((-(((/* implicit */int) arr_13 [i_0 + 2] [i_0 + 2] [(signed char)1] [i_0])))), ((-((-(((/* implicit */int) arr_22 [i_0 + 3] [i_0] [i_0] [i_0 + 4] [i_0]))))))));
        arr_30 [i_0] [i_0 - 1] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 3])) == (arr_15 [i_0] [i_0] [i_0] [i_0 + 2] [i_0])))), ((-(2147483647)))));
        var_20 = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
}
