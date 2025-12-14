/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206399
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
    var_12 = ((/* implicit */int) ((var_3) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_2)) : (min((var_6), (var_11))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((int) (unsigned short)38566))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((_Bool) var_2)))))));
                var_14 = ((/* implicit */short) (-(((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)31)) ^ (((/* implicit */int) (_Bool)0))))))));
                var_15 = ((/* implicit */unsigned char) ((long long int) ((min((((/* implicit */long long int) (signed char)-32)), (var_1))) != (((/* implicit */long long int) ((var_2) ? (var_6) : (var_6)))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
                {
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_0)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_9)))))))));
                    var_17 *= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (signed char)-87)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))));
                    var_18 *= ((/* implicit */short) (unsigned short)9721);
                    arr_8 [i_0] [(_Bool)1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) 14168331908910415671ULL)) ? (((/* implicit */unsigned int) -1526174877)) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) max(((signed char)-31), ((signed char)-1)))) : ((+(((/* implicit */int) (signed char)-1))))));
                }
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) / (((/* implicit */int) var_0))))) ? (var_6) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) var_5))))) ? (var_1) : (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    /* LoopNest 2 */
                    for (short i_4 = 3; i_4 < 18; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 17; i_5 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14168331908910415671ULL)) ? (var_6) : (var_6)))) ? (((((/* implicit */_Bool) var_8)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))));
                                arr_18 [i_3] [i_1] [(short)6] [i_4] [i_4] = (_Bool)1;
                                var_21 -= ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_9))) < (((long long int) var_6)))) ? (((((/* implicit */_Bool) max((var_7), (((/* implicit */short) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)21126))))) : (max((((/* implicit */unsigned long long int) var_11)), (14168331908910415671ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)-15443)))))))));
                            }
                        } 
                    } 
                    var_22 -= ((/* implicit */long long int) min((((/* implicit */int) max((var_7), (var_7)))), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (short)22449)) ? (((/* implicit */int) var_5)) : (var_8))) : (((/* implicit */int) max((var_10), (var_3))))))));
                }
                /* vectorizable */
                for (unsigned short i_6 = 2; i_6 < 17; i_6 += 3) 
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) (_Bool)0))))) ? ((+(((/* implicit */int) (signed char)25)))) : (((var_10) ? (((/* implicit */int) (unsigned short)64321)) : (((/* implicit */int) (unsigned short)1222))))));
                    var_24 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)19350)) == (((/* implicit */int) var_7)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (-1935963329) : (((/* implicit */int) (unsigned char)238)))))));
                    arr_21 [(signed char)10] [i_6] [i_1] [i_6] = ((/* implicit */long long int) 1200860690U);
                }
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (~(((/* implicit */int) (((-(((/* implicit */int) var_5)))) <= (((/* implicit */int) ((unsigned char) var_11)))))))))));
}
