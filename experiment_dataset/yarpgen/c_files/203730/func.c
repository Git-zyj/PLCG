/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203730
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) max(((unsigned short)0), (((/* implicit */unsigned short) (short)-27015)))))))))));
    var_14 = ((/* implicit */unsigned int) (_Bool)0);
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((short) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_11)))) ? ((~(var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (signed char)-11);
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_12))))) : (((unsigned int) var_1))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) ((arr_8 [i_0] [20U] [i_3]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0]))))))))) : (((/* implicit */int) var_1))));
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_8 [i_2] [i_1] [i_1]))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        arr_12 [i_0 - 1] [i_1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)1))))))) ? (var_7) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [i_1])))))));
                        var_18 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_0 + 1] [i_0 + 2])))) <= (arr_10 [i_0 + 1] [i_0 + 1]));
                        arr_13 [18ULL] [i_1] [i_2 - 1] [i_2] [i_2 + 2] &= ((/* implicit */unsigned int) ((short) (-(((/* implicit */int) ((signed char) arr_5 [i_2] [i_2]))))));
                        var_19 = ((/* implicit */unsigned short) (~(((unsigned long long int) (short)14926))));
                    }
                    for (short i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_0])) ? (arr_8 [i_0] [i_2 - 1] [i_0]) : (arr_8 [i_0] [i_2 + 2] [i_0]))), (((/* implicit */unsigned long long int) (+((-(arr_3 [i_2] [13LL]))))))));
                        arr_17 [i_5] [i_0] [i_2 - 2] [i_1] [i_0] [i_0] = (+((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0]))) ^ (arr_3 [i_0] [i_5]))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        arr_21 [i_0] = 3275890824U;
                        arr_22 [i_0] [(signed char)12] [i_2 - 2] [i_2 - 1] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_7] [i_8])) ? (((/* implicit */int) ((short) arr_27 [i_8] [i_9]))) : (((/* implicit */int) arr_28 [i_7] [i_7]))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 1; i_10 < 21; i_10 += 4) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) arr_24 [3U] [i_8]);
                                var_23 = ((/* implicit */long long int) (-(min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)89))) : (var_7))), (((/* implicit */unsigned long long int) arr_34 [i_11] [i_10] [i_10 - 1] [i_10 + 1] [i_10] [i_10 - 1] [i_10 + 1]))))));
                                arr_36 [i_11] [i_10 - 1] [i_9] [i_8] [i_11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_2), (((arr_25 [i_9]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)2044))))))))));
                                var_24 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_31 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_10 - 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (var_11))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
