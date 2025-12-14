/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211200
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((var_9) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */short) var_8)), (var_12)))))))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_11)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (var_4))) : (((unsigned long long int) var_6))))) ? (max((((var_11) - (var_7))), (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) var_0))))))) : ((+(var_6)))));
    /* LoopSeq 4 */
    for (signed char i_0 = 3; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((unsigned long long int) var_0)) / (max((((/* implicit */unsigned long long int) var_10)), (var_4)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_0), (((/* implicit */signed char) var_9)))))) : ((-(1293159998U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            var_16 -= ((/* implicit */short) max((min((((((/* implicit */int) var_1)) | (((/* implicit */int) var_0)))), (((/* implicit */int) min((var_13), (var_8)))))), (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))), (min((var_10), (var_10)))))));
            /* LoopSeq 4 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_17 &= ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_9))))))));
                var_18 = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned short) var_2))), (min((((/* implicit */long long int) var_12)), (var_2)))))) ? (min((((/* implicit */unsigned long long int) 482277720U)), (9ULL))) : (min((var_11), (((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
                var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((max((3812689576U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_8)))))))), (min((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1)))))))));
            }
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 21; i_4 += 3) 
                {
                    for (unsigned char i_5 = 1; i_5 < 24; i_5 += 2) 
                    {
                        {
                            arr_18 [i_4] [i_4] = ((/* implicit */signed char) var_11);
                            var_20 *= ((/* implicit */short) ((int) (+(16823496798722316337ULL))));
                            var_21 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) -1879937846)) ? (((/* implicit */unsigned long long int) 482277720U)) : (134217728ULL)))));
                            var_22 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) & (((/* implicit */int) var_8)))) != (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */int) var_1))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_7)))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((int) var_3))))))));
            }
            for (unsigned long long int i_6 = 3; i_6 < 23; i_6 += 2) 
            {
                var_24 = ((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_6))) == ((+(var_3))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12)))) ^ (((/* implicit */int) ((short) var_2)))))) : (max((((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_4))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))))));
                var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (max((var_7), (((/* implicit */unsigned long long int) var_10)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_7))))))));
                var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_0)) / (((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */int) min((var_9), (var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) : (max((((/* implicit */int) var_8)), (((var_8) ? (var_10) : (((/* implicit */int) var_9))))))));
            }
            for (unsigned int i_7 = 3; i_7 < 24; i_7 += 1) 
            {
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(min((var_3), (((/* implicit */unsigned long long int) var_9))))))) ? (((/* implicit */long long int) ((unsigned int) var_0))) : (((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_3)))) : (((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_12)), (var_6))) + (max((var_6), (((/* implicit */unsigned long long int) var_2))))))) ? ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))))) : (min((((int) 1388375673U)), (((((/* implicit */int) var_13)) + (((/* implicit */int) var_9)))))))))));
            }
        }
        for (unsigned int i_8 = 1; i_8 < 24; i_8 += 2) 
        {
            arr_26 [i_0] [(_Bool)1] [i_0] |= ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_5))))), ((+(var_11)))))));
            var_29 = ((/* implicit */short) min((((((/* implicit */int) ((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) * (((/* implicit */int) min((((/* implicit */short) var_13)), (var_12)))))), (((/* implicit */int) ((short) max((var_7), (((/* implicit */unsigned long long int) var_8))))))));
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1089345049)) ? ((~(18446744073709551607ULL))) : (((/* implicit */unsigned long long int) 482277720U))));
        }
    }
    /* vectorizable */
    for (signed char i_9 = 3; i_9 < 24; i_9 += 4) /* same iter space */
    {
        var_31 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))));
        var_32 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
        var_33 *= ((/* implicit */short) (~(((long long int) var_1))));
        var_34 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_2))) == (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_2)))));
    }
    for (signed char i_10 = 3; i_10 < 24; i_10 += 4) /* same iter space */
    {
        var_35 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */int) var_8))))) | (((((/* implicit */unsigned long long int) var_2)) | (var_4)))))) ? (((/* implicit */unsigned long long int) ((long long int) ((long long int) var_0)))) : (((((/* implicit */_Bool) ((var_6) / (((/* implicit */unsigned long long int) var_2))))) ? (min((var_6), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) (+(482277720U))))))));
        var_36 *= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)107))) + (-2044990866718095442LL))))));
    }
    for (unsigned char i_11 = 2; i_11 < 21; i_11 += 3) 
    {
        var_37 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) & (max((var_11), (var_7))))) ^ (((max((((/* implicit */unsigned long long int) var_8)), (var_11))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (var_7)))))));
        var_38 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_5))))) & (min((var_11), (var_11)))))));
    }
}
