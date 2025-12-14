/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217968
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        var_19 += ((/* implicit */unsigned short) ((_Bool) (_Bool)1));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(max((1361215574), (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)0)), (((unsigned char) (short)4926))))) : (((((/* implicit */int) min(((short)-4927), (((/* implicit */short) (_Bool)1))))) ^ (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)8)), ((unsigned short)2)))))))))));
                        arr_11 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)23))) : (((((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3693597566652554581LL))) | (3693597566652554581LL)))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 3; i_4 < 13; i_4 += 4) 
                        {
                            arr_14 [i_0] [i_4] = ((/* implicit */long long int) max((((unsigned short) var_3)), (var_15)));
                            arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_14)))) ? (-27LL) : (((/* implicit */long long int) ((int) var_5)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)88)) * (((/* implicit */int) (unsigned char)23))))) : (((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) : (((((/* implicit */_Bool) 18446744073709551613ULL)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)23)))))))));
                            arr_16 [i_0] [i_0] [i_0] = max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)32768))))), (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 1630905660)) : (8444514317483194467LL))))));
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max((((var_6) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_15))))), ((((_Bool)1) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (var_11) : (((/* implicit */unsigned long long int) ((int) ((unsigned long long int) 7291872888332968364ULL))))));
                        }
                    }
                    for (short i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */_Bool) var_9);
                        var_23 = ((((/* implicit */_Bool) max((18446744073709551596ULL), (((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (18446744073709551571ULL)))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)31)) ? (18446744073709551615ULL) : (18446744073709551571ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)8)))))))));
                        var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) -545916329)) ? (((((/* implicit */_Bool) 7904495593514573825LL)) ? (((/* implicit */int) (_Bool)1)) : (-985259140))) : (((/* implicit */int) var_9))));
                        var_25 = ((/* implicit */unsigned short) max((var_16), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */unsigned long long int) -896836351)) : (var_14))))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)4926))) : (max((7904495593514573825LL), (((/* implicit */long long int) var_0)))))))));
                        var_27 = ((/* implicit */_Bool) var_9);
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((_Bool) (unsigned char)24))) : ((+(((/* implicit */int) ((_Bool) var_4)))))));
                    }
                    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((min((max((4294967295U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)2860)) : (-1869154991)))))) << (((/* implicit */int) var_16)))))));
                }
            } 
        } 
    } 
    var_30 += ((/* implicit */_Bool) ((unsigned int) (unsigned char)124));
    /* LoopNest 2 */
    for (short i_7 = 2; i_7 < 21; i_7 += 2) 
    {
        for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            {
                var_31 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) (unsigned short)9115)) : (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_18)) ? (-985259140) : (((/* implicit */int) (signed char)-80))))))) : (18446744073709551609ULL)));
                arr_28 [i_7] [i_7] [i_8] = ((/* implicit */long long int) var_10);
                var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_16)) : (985259127)))), (var_2))) * (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)26)) : (((/* implicit */int) (short)-27))))))))));
            }
        } 
    } 
}
