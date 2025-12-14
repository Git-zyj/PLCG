/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19911
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
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */int) (((~((((-9223372036854775807LL - 1LL)) % (((/* implicit */long long int) 611119371U)))))) < ((~(-3238039904122135763LL)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 1; i_4 < 23; i_4 += 4) 
                            {
                                arr_12 [i_3] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_3 - 2])) ? (arr_6 [i_0] [i_0 - 1] [i_3 - 2]) : (580838582))), (min((arr_6 [i_0 - 1] [i_0 - 1] [i_3 - 2]), (((/* implicit */int) var_11))))));
                                var_12 = ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
                                var_13 = max((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (arr_6 [i_0] [i_0] [(unsigned char)14]) : (((/* implicit */int) arr_9 [i_3 + 2] [10LL] [i_4] [i_4 - 1] [i_4])))), (((/* implicit */int) var_9)));
                            }
                            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                            {
                                arr_15 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_11 [i_1] [10ULL]), (((/* implicit */unsigned int) arr_9 [i_1] [i_1] [i_5 - 1] [i_5] [i_5]))))) ? (((((/* implicit */_Bool) max((7323400013356238422ULL), (9920672687272671124ULL)))) ? (min((12674327126427388314ULL), (((/* implicit */unsigned long long int) (unsigned char)50)))) : (((/* implicit */unsigned long long int) 1049390836U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22836)))));
                                arr_16 [i_0] [i_0] [i_3] [i_0] = ((max((-580838583), (max((var_4), (582108541))))) ^ (((/* implicit */int) max((max(((short)-27773), (((/* implicit */short) var_3)))), (((/* implicit */short) (!(((/* implicit */_Bool) 6590404614444389849ULL)))))))));
                                var_14 |= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)206)), (-908953711)))))))));
                                var_15 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_5 - 1] [i_5] [i_5 - 1] [i_5])) % (((/* implicit */int) var_7))))) | ((~(var_6)))));
                            }
                            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                            {
                                arr_21 [i_2] [i_3] [i_3] = (unsigned char)255;
                                var_16 -= ((/* implicit */unsigned char) ((((var_2) + (2147483647))) >> ((((~(min((((/* implicit */long long int) var_11)), (arr_3 [i_0] [i_0] [i_0]))))) - (46LL)))));
                            }
                            var_17 = ((/* implicit */signed char) (((~(((long long int) (unsigned char)50)))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) : ((~(2730448532U))))))));
                            var_18 = ((/* implicit */int) ((signed char) max((arr_3 [i_3 + 2] [i_2] [i_0 - 2]), (arr_3 [i_0 - 3] [i_2] [i_2]))));
                        }
                    } 
                } 
                arr_22 [i_0] [i_0] [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1]))))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) -1913858084)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)255)))), (((((/* implicit */int) var_3)) + (((/* implicit */int) var_8))))))) : (((arr_18 [i_0 - 1] [(_Bool)1] [i_0] [i_0] [i_0] [i_0]) / (arr_18 [i_0 - 1] [0] [0] [i_0] [i_0] [0])))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (var_6)));
}
