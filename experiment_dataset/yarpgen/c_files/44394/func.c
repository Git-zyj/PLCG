/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44394
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((signed char) ((((/* implicit */int) (unsigned short)2697)) | (((/* implicit */int) (unsigned short)62836))))))));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_14))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */int) max((var_11), (arr_5 [i_0])))) ^ (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (unsigned char)181)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_17 [i_3] [i_0] [i_2] [i_4] [(signed char)14] &= ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)166))));
                                var_20 -= ((/* implicit */long long int) max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_10 [i_4] [i_3] [i_0])))), (((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_3] [i_3])) != (((/* implicit */int) (_Bool)1)))))));
                                var_21 &= ((/* implicit */short) ((unsigned char) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16)))))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((((/* implicit */int) (unsigned char)37)), (var_1))) >> (((((/* implicit */int) var_14)) - (17332)))))) ? (max((((((/* implicit */int) var_6)) - (((/* implicit */int) var_8)))), (((/* implicit */int) (unsigned char)1)))) : ((+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)2695)) : (((/* implicit */int) (signed char)46))))))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((unsigned int) (signed char)52))) & (((unsigned long long int) arr_9 [i_1] [i_1] [i_1]))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */unsigned long long int) ((-139474443) - (-1613071946)))) : (767874536068724035ULL)));
                    var_25 = ((/* implicit */_Bool) (+(-1613071946)));
                }
            } 
        } 
        var_26 = (~(((/* implicit */int) ((var_0) && (((/* implicit */_Bool) var_6))))));
    }
    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_14)) << ((((+(arr_4 [i_5] [(_Bool)1]))) - (1992568055137212738LL)))))))))));
        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14))))) - (((var_15) + (var_15)))))) ? (((min((((/* implicit */int) (unsigned short)65535)), (arr_18 [i_5]))) + (((/* implicit */int) (signed char)12)))) : ((((!((_Bool)1))) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (unsigned short)44604)))))))));
    }
    var_29 = ((/* implicit */short) ((((((((/* implicit */_Bool) (signed char)31)) ? (6551627285439056961LL) : (((/* implicit */long long int) 3760445564U)))) & (((/* implicit */long long int) ((/* implicit */int) var_13))))) << (((((/* implicit */int) var_14)) - (17325)))));
}
