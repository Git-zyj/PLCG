/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214019
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
    var_19 = ((/* implicit */long long int) min((var_19), (((((/* implicit */_Bool) min((min((856886345825200559LL), (((/* implicit */long long int) -2088031777)))), (((/* implicit */long long int) (-(-2088031779))))))) ? (((/* implicit */long long int) ((unsigned int) var_7))) : (((((/* implicit */_Bool) -5767085091892095891LL)) ? (856886345825200585LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 2088031762))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [22] [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_5 [i_1 - 1] [i_0 + 1])))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_0 - 3])) || (((/* implicit */_Bool) var_8)))))));
                            arr_14 [(signed char)1] [i_1] [(signed char)1] [(signed char)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) 856886345825200559LL))) ? (((/* implicit */int) arr_5 [i_1 + 2] [i_1 - 1])) : (min((-2088031777), (((/* implicit */int) var_4))))));
                            var_20 &= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [6ULL])))))));
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 2; i_4 < 22; i_4 += 3) 
                            {
                                arr_18 [i_2] [i_1] [(short)20] [(short)20] [(short)20] = ((/* implicit */unsigned long long int) (-(-2088031779)));
                                var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(2088031777)))) - (((unsigned long long int) ((int) (_Bool)1)))));
                                var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_11 [0LL] [i_1 + 2] [i_0 + 1]), (-4244350487741347219LL)))) ? (((max((((/* implicit */long long int) var_6)), (arr_17 [i_0] [i_1] [i_2] [20LL] [i_1] [i_4] [i_4 + 3]))) >> (((((long long int) arr_15 [i_4] [i_4] [i_4] [i_3] [i_2] [i_1] [i_0])) - (1413927907LL))))) : (((/* implicit */long long int) ((((arr_2 [i_3]) > (((/* implicit */long long int) 2088031801)))) ? (((/* implicit */int) (unsigned char)211)) : (arr_0 [i_4 - 1]))))));
                            }
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (var_4)))) ? (arr_12 [i_1]) : (((/* implicit */unsigned int) arr_0 [i_1]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (unsigned short)9)))))) : ((~((-(var_12)))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)16648)), (85624362U)))) >= (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)44)))) + (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)216))) - (856886345825200574LL)))))));
                /* LoopSeq 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_25 = ((((/* implicit */_Bool) ((unsigned char) (~(-2088031777))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16862186609968455887ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_9)))) ? (max((((/* implicit */unsigned long long int) var_3)), (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 856886345825200559LL)) && (((/* implicit */_Bool) var_3)))))))) : (((/* implicit */unsigned long long int) max((min((var_16), (((/* implicit */long long int) 2088031777)))), (((/* implicit */long long int) ((arr_8 [i_0] [i_1] [i_5]) <= (var_13))))))));
                    var_26 *= ((/* implicit */long long int) var_14);
                }
                for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((int) (((_Bool)1) ? (((/* implicit */long long int) (-2147483647 - 1))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (var_16)))))))));
                    /* LoopSeq 1 */
                    for (int i_7 = 1; i_7 < 23; i_7 += 1) 
                    {
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_0]))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) max((arr_11 [12LL] [20ULL] [12LL]), (((/* implicit */long long int) arr_7 [i_0] [i_1] [i_6] [i_7]))))) : (((unsigned long long int) arr_22 [i_0] [0ULL] [i_0 + 3] [i_0])))))))));
                        arr_25 [i_0] [i_0] [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_15) : (((/* implicit */long long int) arr_12 [i_1]))))) | (var_13)))) ? (((((/* implicit */_Bool) 856886345825200559LL)) ? (0LL) : (5332732100870245002LL))) : (var_7)));
                    }
                    var_29 = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_16 [i_0] [19] [13LL] [i_1] [i_1] [i_6])), (((arr_2 [i_0 - 1]) / (((/* implicit */long long int) 450845155))))));
                }
                for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    var_30 -= ((/* implicit */signed char) 3303544381U);
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (long long int i_10 = 2; i_10 < 22; i_10 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
                                arr_32 [i_0 + 2] [i_1] [i_0 + 2] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 3909234899322810548ULL)) ? (((/* implicit */long long int) var_3)) : (var_16))), (((/* implicit */long long int) var_14))))) ? (((arr_24 [i_10 - 2] [i_10 - 2] [i_10 + 2] [i_10] [i_10 + 3]) / (-5747372404755379686LL))) : (((/* implicit */long long int) min((min((((/* implicit */unsigned int) (unsigned char)157)), (2047U))), (((/* implicit */unsigned int) (unsigned char)211)))))));
                            }
                        } 
                    } 
                }
                var_32 = ((/* implicit */long long int) 14746837401485085420ULL);
            }
        } 
    } 
}
