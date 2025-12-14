/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236957
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
    var_18 = -2017766806;
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0 - 2] [i_0] = ((/* implicit */signed char) (-((-(((/* implicit */int) max(((unsigned short)44203), ((unsigned short)7761))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_1 + 2] [i_1 - 1] [i_1] = ((/* implicit */_Bool) (((-(-2017766813))) >> (((((((-2017766827) + (2147483647))) << (((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) - (259433630)))));
                    arr_9 [i_1 + 1] [i_1] [i_1 + 1] = (-(((/* implicit */int) (_Bool)1)));
                    arr_10 [i_0] = ((/* implicit */signed char) ((((long long int) arr_2 [i_1 + 1] [i_1 + 2])) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1])) ? (arr_0 [i_0 + 2] [i_0]) : (((/* implicit */int) (_Bool)0)))))));
                    arr_11 [i_0] [(signed char)11] [(unsigned short)13] [i_2] = ((/* implicit */int) (((((_Bool)1) || (((/* implicit */_Bool) arr_1 [i_1 - 1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1858452105)) ? (25165824) : (((/* implicit */int) (_Bool)1)))))));
                }
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            {
                                arr_22 [i_4] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) -6473118977522163312LL)) ? (-2017766845) : (((/* implicit */int) (signed char)-62)))));
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (-((-((-(((/* implicit */int) (unsigned char)223)))))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((long long int) min((max((-847029417), (((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 2]))))))));
                    var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)19665)) == (-1858452105)))) : (((/* implicit */int) (_Bool)0)))), (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned short)14653))))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */int) (unsigned char)222);
}
