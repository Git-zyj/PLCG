/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194580
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
    var_15 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (+(4178378069U)))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46336)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 1; i_2 < 7; i_2 += 1) 
                {
                    arr_11 [i_0] [i_0] = ((/* implicit */unsigned int) min(((~((~(((/* implicit */int) var_2)))))), (((/* implicit */int) ((unsigned short) (unsigned short)36856)))));
                    var_16 = ((/* implicit */unsigned short) (+(min((((/* implicit */int) arr_5 [i_0])), ((-(((/* implicit */int) (unsigned short)19199))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_18 [i_3] [i_1] [i_0] [i_4] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) 5846805426867805269LL)) : (((((/* implicit */_Bool) 76898414U)) ? (13463770063167517094ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19190))))));
                        arr_19 [i_0] [i_0] [i_1 + 1] [3LL] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1153540955U)) ? (((/* implicit */int) (unsigned short)46336)) : (((/* implicit */int) (unsigned short)65535))));
                        var_17 = ((/* implicit */unsigned short) ((unsigned int) arr_3 [i_0] [i_1 + 1]));
                    }
                    arr_20 [i_0] [i_0] = var_0;
                    arr_21 [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) (((-(((((/* implicit */long long int) ((/* implicit */int) var_13))) & (var_10))))) <= (((/* implicit */long long int) (-((~(((/* implicit */int) var_0)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_18 = var_5;
                                arr_28 [i_0] [i_0] [i_0] [6U] [i_6] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 30U)) - (var_6)))), (((unsigned long long int) arr_14 [i_1] [i_0] [i_1] [8U])))), (((/* implicit */unsigned long long int) ((short) 0U)))));
                                var_19 = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((arr_13 [i_0] [i_1]) >> (((4218068881U) - (4218068857U))))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)65535), ((unsigned short)19199))))))))))) : (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((arr_13 [i_0] [i_1]) + (9223372036854775807LL))) >> (((4218068881U) - (4218068857U))))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)65535), ((unsigned short)19199)))))))))));
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min((min((((((/* implicit */_Bool) (unsigned short)0)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)62188)) * (((/* implicit */int) arr_8 [i_0] [i_5] [i_0]))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)19199)) : (((/* implicit */int) var_7)))) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46336)))))))))))));
                                arr_29 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)36413)))))))), (((((/* implicit */_Bool) (short)-8192)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27))) : (3063927223U)))));
                            }
                        } 
                    } 
                }
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (-(3153728299U))))) ? ((+(8491171026056429664ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)42921))))))))));
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32867))))))))), ((+(((/* implicit */int) (_Bool)1)))))))));
                arr_30 [(_Bool)1] [i_0] = (-(((((/* implicit */_Bool) max(((unsigned short)19172), ((unsigned short)65535)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [(unsigned short)2] [i_1 + 2] [i_1 + 2]))) : (11ULL))));
            }
        } 
    } 
}
