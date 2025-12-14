/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45884
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? ((+(arr_0 [i_1]))) : (((((/* implicit */int) arr_7 [i_2] [i_1] [i_0])) | (((/* implicit */int) (short)-15286))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] [i_1] [(unsigned char)12] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_13 [i_2] [i_2 + 2] [i_2] [i_2]))))) ? (((/* implicit */int) arr_5 [i_2 + 3] [i_1] [i_1])) : (((/* implicit */int) arr_12 [i_2 + 2] [i_2] [i_2 + 3] [9] [i_0]))));
                                var_13 = (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1874077188930839731LL)))) ? (min((((/* implicit */unsigned long long int) (signed char)2)), (var_8))) : (((/* implicit */unsigned long long int) arr_0 [11ULL]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (-1874077188930839732LL) : (-1874077188930839732LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (1874077188930839731LL) : (((/* implicit */long long int) arr_0 [i_5]))))) : (7928413876030788415ULL)))) ? (var_8) : (((((/* implicit */_Bool) 7928413876030788415ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_5] [i_5]))) : ((~(4293389762941077343ULL)))))));
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -1874077188930839731LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_6))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3893414493U)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-1)), (7819451094326275514LL)))) ? (1874077188930839731LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 859637499U)) ? (((/* implicit */int) arr_2 [(unsigned short)0])) : (1750047335))))))) : (7928413876030788415ULL)));
                        arr_19 [i_0] [i_1] [i_2] [5] = ((/* implicit */unsigned short) var_10);
                        arr_20 [i_0] [(short)1] [11LL] [i_5] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1772176220489075759LL)) ? (-1214426208509169237LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)47)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_17 [(_Bool)1] [i_1] [i_1] [i_1])) : (arr_0 [(signed char)3]))))));
                    }
                    arr_21 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_2 - 1])), (arr_6 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_8 [i_1] [i_1] [i_1])))) ? (-1874077188930839731LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 + 3] [7LL] [7LL]))))))));
                    var_16 += ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [(signed char)2] [i_2 + 3] [i_2])))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_4);
}
