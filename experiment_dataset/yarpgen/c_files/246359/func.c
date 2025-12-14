/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246359
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (min((((/* implicit */unsigned long long int) 588390583928116599LL)), (18446744073709551598ULL))) : (((/* implicit */unsigned long long int) var_12)))));
        var_14 = ((/* implicit */long long int) ((unsigned long long int) ((long long int) ((1536474934U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) -636157528))) ? (min((var_6), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
    var_16 = (_Bool)1;
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((var_7), (((/* implicit */long long int) var_5)))) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((~((((_Bool)1) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
    var_18 = ((/* implicit */unsigned short) max((((/* implicit */int) (_Bool)1)), (min((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))), (var_9)))));
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) max(((((_Bool)1) && ((_Bool)1))), ((!(((/* implicit */_Bool) ((unsigned long long int) var_12))))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
                    {
                        var_20 = ((max((((/* implicit */long long int) (_Bool)1)), (arr_3 [i_1 + 1] [i_1 + 1]))) ^ (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max((((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_1] [i_3] [i_4]))))), (((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_3])) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))) : (min((((/* implicit */long long int) (_Bool)1)), (var_6))))))))));
                        var_22 = ((/* implicit */int) (+(min((arr_3 [i_3] [i_1 + 1]), (((/* implicit */long long int) (_Bool)1))))));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_23 += ((/* implicit */_Bool) var_3);
                            arr_14 [i_1] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_1] [i_2] [i_3]))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (var_3)))))));
                            var_24 += ((/* implicit */_Bool) arr_3 [i_1] [i_2]);
                            var_25 = ((/* implicit */_Bool) min((var_25), (((((/* implicit */unsigned long long int) min((((/* implicit */int) var_10)), (max((var_9), (var_9)))))) < (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? ((((_Bool)1) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_3] [i_4] [i_5])))))))))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((unsigned int) arr_6 [i_1 + 1] [i_1] [i_1 + 1])) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_6 [i_1 + 1] [i_1] [i_1 + 1]), (arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1])))))));
                        }
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */short) ((min(((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))), ((~(((/* implicit */int) arr_10 [1ULL])))))) != ((~(((/* implicit */int) var_3))))));
                        var_28 = ((/* implicit */unsigned short) var_3);
                    }
                    arr_17 [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((((/* implicit */int) var_10)), (arr_16 [i_1] [i_2] [i_2] [i_3] [i_3] [i_3])))))) ? ((-(((/* implicit */int) (!((_Bool)1)))))) : (((/* implicit */int) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
}
