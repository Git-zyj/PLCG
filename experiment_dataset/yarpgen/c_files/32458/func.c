/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32458
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
    var_18 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_2))) ? ((~(((/* implicit */int) (short)-7801)))) : (((/* implicit */int) var_15))))) : (var_3));
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)29770)) ? (((/* implicit */int) (unsigned short)5634)) : (((/* implicit */int) (_Bool)0))))) ? (((((((/* implicit */_Bool) (short)-275)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)2209))))) * (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (var_8))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)0)))))));
                    var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)-7801))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2 - 1])) || (((/* implicit */_Bool) arr_3 [i_2 + 1])))))) : (((arr_6 [i_0] [i_1] [i_2]) ? (((unsigned long long int) var_14)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 - 1])))))));
                    var_21 -= ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_15)))) ? ((((_Bool)0) ? (arr_2 [i_2 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)150))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65532))) ^ (var_4)))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) 3099591400586354920ULL))));
                }
                /* LoopSeq 2 */
                for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [i_1]))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7680))) : (285978576338026496ULL))) : (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)186)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)7801))))) : (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */long long int) max((1128683334U), (((/* implicit */unsigned int) (_Bool)0))))) : (-3LL))));
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1022)) ? (((/* implicit */int) (_Bool)1)) : (-1480949607)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 3145743514325303359LL)) ? (var_4) : (((/* implicit */long long int) -2147483636))))))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7801))))) : (arr_12 [i_0] [i_1] [i_1] [i_3]))))))));
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((15347152673123196700ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (-(((/* implicit */int) var_14)))))))) : (((((/* implicit */_Bool) 15347152673123196695ULL)) ? (((/* implicit */int) ((unsigned short) var_17))) : (((/* implicit */int) arr_6 [i_3] [i_1] [i_0])))))))));
                    arr_13 [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 1152921504606842880ULL)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (arr_9 [i_3])))) ? (((/* implicit */unsigned long long int) arr_2 [i_3])) : (15580880467295959529ULL))) : (((((/* implicit */_Bool) ((var_2) / (var_7)))) ? (arr_7 [i_1] [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)38685)) + (((/* implicit */int) (unsigned short)25640)))))))));
                }
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0]))) : (var_2)))) ? (16ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22))) : ((~(var_3))))))));
                    var_27 &= ((/* implicit */unsigned char) arr_11 [i_0] [i_1] [i_4] [i_4]);
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)22))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) (signed char)-105)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))))) ? (var_4) : (((((/* implicit */_Bool) ((unsigned char) 1ULL))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)37)))))));
                    var_29 &= ((/* implicit */int) ((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned short) arr_3 [i_1]))))) ? (max((var_13), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8))))));
                }
            }
        } 
    } 
}
