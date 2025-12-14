/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226198
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
    var_12 ^= ((/* implicit */short) (unsigned char)254);
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_8 [i_1] [i_0 - 2] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */int) var_7)) * (((/* implicit */int) (unsigned short)36089))))));
                var_13 = ((/* implicit */unsigned short) min((var_8), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1289)) ? (13816021603086276592ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))))));
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((unsigned long long int) (!(((((/* implicit */unsigned long long int) -8284222709841110225LL)) < (18446744073709551615ULL)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                {
                    var_15 = ((/* implicit */_Bool) var_4);
                    /* LoopSeq 4 */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
                    {
                        arr_20 [i_2] = (-(((/* implicit */int) (((~(((/* implicit */int) var_4)))) < ((+(((/* implicit */int) (_Bool)0))))))));
                        arr_21 [i_3] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (+(-4769806611930655962LL))))) / (((/* implicit */int) ((short) ((-1) | (((/* implicit */int) var_10))))))));
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_8))))))) % (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), ((~(18343630399721629144ULL))))))))));
                        arr_22 [i_2] [i_3] [i_3] [i_4] [i_5] = ((((((/* implicit */_Bool) (signed char)-117)) ? ((~(-625077186926509687LL))) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) < (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)31417)) >> (((((/* implicit */int) ((short) 2347915036U))) - (22279)))))));
                        arr_23 [(_Bool)1] [i_5] [i_4] [i_4] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) 131068LL))) < (((/* implicit */int) var_3))));
                    }
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
                    {
                        arr_28 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) -1)) * (1947052260U))) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                        var_17 *= ((/* implicit */short) ((signed char) (~(var_2))));
                        arr_29 [i_6] [(_Bool)1] [i_3] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((short) -1LL))) + (((int) (_Bool)1))));
                    }
                    for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        arr_33 [i_2] [i_2] [i_3] [i_4] [i_7] = ((/* implicit */short) (((-(min((-824866873508164050LL), (((/* implicit */long long int) (_Bool)0)))))) < (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)19)))))));
                        arr_34 [i_2] [i_3] [i_4] [i_7] = ((/* implicit */unsigned short) ((long long int) (+(((/* implicit */int) var_0)))));
                        var_18 = ((/* implicit */signed char) 15566138927690060942ULL);
                        arr_35 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (var_3))))) == (((((/* implicit */_Bool) 429040868U)) ? (15566138927690060942ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49)))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_40 [i_8] [i_8] [i_8] [i_3] [i_2] = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)1289));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) - (((((/* implicit */_Bool) 2347915036U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)35384))))));
                        arr_41 [i_8] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_8))) <= (((/* implicit */int) ((short) var_9)))));
                        arr_42 [i_2] [i_3] [i_4] [i_2] [i_8] = ((/* implicit */unsigned short) (unsigned char)216);
                    }
                }
            } 
        } 
    } 
}
