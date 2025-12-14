/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248740
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
    var_12 = ((/* implicit */int) min((((/* implicit */long long int) ((_Bool) ((int) var_10)))), (((((((/* implicit */_Bool) 856268354)) ? (3917725917309993680LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) ^ (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (var_6))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)8517))) : (1607828559856085635LL)));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
                    {
                        arr_11 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((short) ((short) max((arr_4 [(unsigned short)14] [i_1] [i_3]), (var_9)))));
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((-856268355) | (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_11)), (var_7)))) : (((((/* implicit */_Bool) min((arr_4 [(_Bool)1] [i_1] [i_2]), (-1893300406516975748LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 4294967284U)))) : (((((/* implicit */long long int) 0)) + (var_1)))))));
                        var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (var_3) : (308318091U)))) ? (((/* implicit */int) arr_1 [i_0] [i_2])) : (((((/* implicit */_Bool) 4294967284U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(unsigned short)3] [i_1] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((((/* implicit */long long int) var_7)) == (arr_6 [i_0] [i_0] [i_0])))) : ((+(((/* implicit */int) var_0))))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
                    {
                        var_15 ^= ((/* implicit */long long int) min(((~(((((/* implicit */int) var_2)) ^ (arr_9 [i_0] [i_1] [i_2]))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)6119))))))));
                        arr_14 [i_1] |= (((!(((var_1) == (arr_6 [i_0] [i_0] [i_2]))))) ? (((long long int) ((unsigned short) 2663138572U))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_9)))) : (max((var_7), (((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_4]))))))));
                        var_16 &= ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) min((var_8), (var_8))))) + ((+(var_10))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_4])) ? (8539760939521244062LL) : (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_2]))))) ? (max((-302848953260234750LL), (((/* implicit */long long int) 2970606286U)))) : (((var_1) >> (0LL)))))));
                        arr_15 [(unsigned short)10] [i_0] [i_1] [i_1] [(unsigned short)10] [i_1] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((var_1) << (((((/* implicit */int) var_4)) - (35398))))), (((((/* implicit */_Bool) 4441881616984680461ULL)) ? (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_2] [0U])) : (678021249698337745LL))))))));
                        arr_16 [i_0] [i_1] [i_2] [(unsigned short)5] &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((unsigned short) 8539760939521244064LL))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) + (var_3))) : (((/* implicit */unsigned int) ((((arr_2 [i_2]) + (2147483647))) << (((((/* implicit */int) var_11)) - (20455))))))))));
                    }
                    var_17 ^= ((/* implicit */int) ((unsigned short) ((int) min((((/* implicit */long long int) 4294967284U)), (var_9)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            var_18 &= ((/* implicit */int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_11)), (arr_13 [i_0] [(short)6] [i_0] [i_5]))), (min((((/* implicit */unsigned int) 0)), (3986649204U)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_10 [i_0] [i_5])))))))) : (((((((/* implicit */unsigned int) 0)) - (arr_18 [i_0] [i_5] [i_5]))) + (min((var_6), (((/* implicit */unsigned int) var_4))))))));
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((9223372036854775807LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) : (min((((/* implicit */long long int) -5)), (var_1)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (var_5)))) ? (((-3706758025414593743LL) + (((/* implicit */long long int) arr_9 [i_0] [5LL] [i_0])))) : (((/* implicit */long long int) ((unsigned int) var_4))))) : (min((((((/* implicit */long long int) ((/* implicit */int) var_2))) + (arr_5 [i_0] [i_5]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_5]))) : (arr_18 [i_0] [i_0] [i_5]))))))));
            var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 10097026326440426850ULL))))), (min((arr_1 [i_0] [i_0]), ((unsigned short)44807)))))) ? (min((((arr_6 [i_0] [i_0] [i_5]) >> (((var_5) - (2169520211U))))), (min((8539760939521244062LL), (var_10))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [0LL])), (arr_6 [i_0] [i_5] [i_5])))) || (((/* implicit */_Bool) ((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))))));
            var_21 *= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((var_3), (var_7)))) ? (((/* implicit */long long int) min((arr_2 [i_0]), (((/* implicit */int) arr_0 [i_0] [i_5]))))) : (arr_6 [i_0] [(unsigned short)0] [i_5]))), (((/* implicit */long long int) min((((3986649215U) - (var_5))), (((/* implicit */unsigned int) ((_Bool) var_10))))))));
        }
        arr_19 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) (unsigned short)30435))))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_2)) : (911347603))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) var_4)))))))) ? (((((/* implicit */_Bool) (~(var_6)))) ? (max((var_10), (((/* implicit */long long int) (unsigned short)65535)))) : (((/* implicit */long long int) ((unsigned int) arr_9 [i_0] [i_0] [i_0]))))) : (((min((8539760939521244061LL), (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0])))) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_0])) : (arr_6 [i_0] [i_0] [i_0])))))));
    }
}
