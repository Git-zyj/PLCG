/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207829
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 -= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (signed char i_4 = 3; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_16)), (12009731374601475748ULL)));
                                arr_14 [i_2] [i_1] [i_2] [i_3] [i_0] [i_1] = ((/* implicit */short) (_Bool)1);
                                arr_15 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 2980768287911914570LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)215)))) / (((/* implicit */int) (unsigned short)53942))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 2032413221679758971ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        for (unsigned short i_6 = 1; i_6 < 9; i_6 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_27 [i_7] [i_6 + 1] [i_6 + 3] [i_8] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)1))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)211))) / (var_11)))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_3))) % (((/* implicit */int) (unsigned short)3364))));
                        arr_28 [i_5] [i_6] [i_7] [i_8] [i_8] = ((/* implicit */_Bool) arr_25 [i_5] [i_5] [i_7] [i_8]);
                    }
                    arr_29 [i_5] [i_5] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((_Bool) var_17));
                }
                /* vectorizable */
                for (unsigned char i_9 = 3; i_9 < 11; i_9 += 1) 
                {
                    var_21 = ((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) (unsigned char)148)) : (((/* implicit */int) arr_12 [i_9 - 2] [i_9 + 1] [i_9 - 1] [i_9] [i_9 - 2]))));
                    var_22 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                }
                for (unsigned long long int i_10 = 1; i_10 < 11; i_10 += 1) 
                {
                    var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) ((max(((_Bool)1), ((_Bool)1))) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) var_16)), ((unsigned char)15)))))))));
                    var_24 -= ((/* implicit */_Bool) max((arr_13 [i_5] [i_5] [i_5] [(_Bool)1] [i_5]), (((/* implicit */long long int) ((unsigned short) arr_24 [i_10 - 1] [i_10] [(_Bool)0] [i_6])))));
                    arr_34 [i_5] [i_6] [i_10] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((12009731374601475748ULL) << (((((/* implicit */int) arr_25 [i_5] [i_6 + 1] [i_10 + 1] [i_6])) - (140)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)35), (arr_25 [i_5] [i_6 - 1] [i_10 - 1] [i_10 + 1]))))) : ((~(8056730664213791188ULL)))));
                }
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) (+(max(((-(((/* implicit */int) var_1)))), ((~(((/* implicit */int) (unsigned short)44597))))))));
                            arr_41 [i_5] [i_11] [i_11] [i_12] = ((/* implicit */_Bool) max((min((12009731374601475748ULL), (((/* implicit */unsigned long long int) arr_39 [i_6 + 3] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6 + 1])))), (((/* implicit */unsigned long long int) min(((unsigned char)211), ((unsigned char)180))))));
                            var_26 = ((/* implicit */unsigned long long int) var_8);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_13 = 1; i_13 < 8; i_13 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (+((~(max((((/* implicit */unsigned long long int) (unsigned short)11578)), (var_12))))))))));
                                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) var_2))));
                            }
                        } 
                    } 
                    var_29 -= ((/* implicit */short) ((((/* implicit */_Bool) min((min((var_2), (((/* implicit */unsigned long long int) (unsigned char)155)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)85)))))))) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)187)) >> (((((((/* implicit */int) (unsigned char)101)) | (((/* implicit */int) var_13)))) - (99))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_30 = (unsigned char)106;
                        arr_54 [i_5] [i_13] = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) ((unsigned char) 10390013409495760413ULL))))));
                    }
                }
                for (long long int i_17 = 0; i_17 < 12; i_17 += 1) 
                {
                    var_31 = ((/* implicit */unsigned long long int) (((-(10390013409495760413ULL))) != (((/* implicit */unsigned long long int) ((arr_20 [i_6] [i_6 + 3]) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (min((((/* implicit */int) (_Bool)1)), (arr_18 [i_5]))))))));
                    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (((((_Bool)0) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (16064221499033845535ULL))) : (((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)155))) : (6ULL))))) != (max((((unsigned long long int) arr_5 [i_6 + 3])), (var_0))))))));
                }
            }
        } 
    } 
}
