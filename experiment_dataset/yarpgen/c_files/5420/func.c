/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5420
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
    for (signed char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_11 ^= ((/* implicit */short) max((var_6), (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) < (((989253610) - (((/* implicit */int) var_4)))))))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (long long int i_4 = 1; i_4 < 16; i_4 += 3) 
                            {
                                var_12 -= ((/* implicit */signed char) ((short) var_9));
                                var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 2096640U)) ? (0ULL) : (((/* implicit */unsigned long long int) var_6)))) / (((/* implicit */unsigned long long int) var_9))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4 - 1] [0LL] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))));
                            }
                            for (signed char i_5 = 3; i_5 < 16; i_5 += 1) 
                            {
                                arr_18 [i_0] [i_0] [i_0] [11LL] [i_0] = ((/* implicit */unsigned long long int) var_6);
                                var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((1142889950) <= (min((((/* implicit */int) var_7)), (var_1)))))), (var_0)));
                            }
                            for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
                            {
                                var_15 = ((/* implicit */unsigned int) (~(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)96))))));
                                var_16 ^= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) > (18446744073709551597ULL))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) | (var_8)))) : (((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                                arr_21 [i_0] [i_1] [i_0] [i_3] [i_6] [3U] [i_2] |= ((((/* implicit */int) ((var_9) <= (((/* implicit */int) min((var_4), (((/* implicit */short) var_0)))))))) >> (((((/* implicit */int) var_0)) + (40))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 18446744073709551597ULL)) ? (((/* implicit */int) var_0)) : (var_9)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) : ((+(((/* implicit */int) (unsigned short)12253))))));
                                var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned int) max(((-(((/* implicit */int) var_2)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))), (((((/* implicit */_Bool) ((long long int) var_1))) ? (((unsigned int) var_10)) : (((/* implicit */unsigned int) ((/* implicit */int) (short)25722)))))));
                            }
                        }
                    } 
                } 
                var_19 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */int) var_2))))))) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (var_5)))) || (((/* implicit */_Bool) var_7))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (int i_7 = 4; i_7 < 17; i_7 += 2) 
    {
        var_20 = ((/* implicit */int) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (var_6)))));
        arr_24 [i_7] [11ULL] = max((((((/* implicit */_Bool) 70368710623232ULL)) ? ((+(((/* implicit */int) (unsigned short)1536)))) : (((var_1) / (var_5))))), (((/* implicit */int) var_3)));
    }
    /* vectorizable */
    for (signed char i_8 = 4; i_8 < 13; i_8 += 2) /* same iter space */
    {
        var_21 = var_3;
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_4))));
        var_23 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_8)) ? (19ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108))))) : (((/* implicit */unsigned long long int) var_5))));
    }
    for (signed char i_9 = 4; i_9 < 13; i_9 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (-((+(((/* implicit */int) ((_Bool) -9223372036854775788LL))))))))));
        var_25 ^= ((/* implicit */signed char) ((((/* implicit */int) max(((!(((/* implicit */_Bool) 18446744073709551615ULL)))), ((!(var_10)))))) ^ (min(((-(((/* implicit */int) (signed char)36)))), (var_8)))));
    }
    for (unsigned long long int i_10 = 4; i_10 < 15; i_10 += 1) 
    {
        var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)107)), (-6118532100921062520LL)))) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) max(((unsigned char)83), (((/* implicit */unsigned char) (_Bool)1))))))) & (((/* implicit */int) var_2))));
        var_27 = ((min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_0)) ? (0ULL) : (((/* implicit */unsigned long long int) var_8)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
        arr_33 [i_10] [i_10 - 3] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_10)) == ((-(((/* implicit */int) (unsigned short)120))))))) > (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (var_8)))));
    }
}
