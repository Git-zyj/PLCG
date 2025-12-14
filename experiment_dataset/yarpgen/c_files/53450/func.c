/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53450
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
    for (short i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) var_10)), ((((_Bool)0) ? (var_0) : (var_0))))))))));
                        var_12 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */unsigned long long int) ((unsigned int) var_8))) - (arr_1 [i_0] [i_0 + 3])))));
                        arr_9 [i_0] [i_1 - 2] [i_1 - 2] [i_3] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_4 [i_2] [i_1 + 2] [i_1 + 2] [i_0 + 2])))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_6 [i_0 - 1])))) : (min((((/* implicit */unsigned long long int) var_7)), (var_8)))));
                        var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) var_4))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                {
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */long long int) var_3)) & (-6552705703134812928LL)));
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (((~(min((((/* implicit */unsigned long long int) var_3)), (var_0))))) | (((/* implicit */unsigned long long int) ((var_3) ^ (((/* implicit */int) (signed char)-87))))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((8021983856669110869ULL) ^ (((/* implicit */unsigned long long int) 3756562299110277833LL)))))))), (var_0)));
                        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) && (((/* implicit */_Bool) (-(min((var_1), (((/* implicit */unsigned long long int) (unsigned short)36778))))))));
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)4)))))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_6))))) : ((~(6552705703134812928LL)))))))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_19 = ((/* implicit */short) min(((~(((/* implicit */int) arr_2 [i_0 + 1])))), (((/* implicit */int) var_6))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 1) 
                        {
                            arr_22 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */short) var_4)), ((short)-23493)));
                            arr_23 [i_0] [i_0 + 3] [i_0] [(unsigned char)0] [i_0 + 3] [i_0 + 4] [(unsigned char)0] = max((((/* implicit */unsigned long long int) arr_18 [i_0 - 2] [i_4] [i_5] [i_8])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */unsigned long long int) 3756562299110277836LL)) : (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_13 [i_8 + 2] [i_5]))))) : (var_0))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) (short)16309);
                            var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_0] [i_0 + 3] [i_0 + 4]))))) ? (((/* implicit */int) max((var_9), (((/* implicit */unsigned char) arr_2 [i_0 + 1]))))) : (((var_6) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_7)))) : ((+(var_3)))))));
                        }
                        for (long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) min(((~(var_8))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (var_8)))) ? (((/* implicit */unsigned long long int) (~(6552705703134812923LL)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)79))) & (var_8))))))))));
                            var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((((/* implicit */int) (signed char)77)), (var_3))), (((/* implicit */int) ((_Bool) var_9)))))) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_0 [i_4] [i_5])))) % (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) (signed char)90))))))) : (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) + (var_8)))));
                            arr_30 [i_4] [i_7] [i_7] [i_5] [11LL] [i_4] [i_0] = ((/* implicit */long long int) min((((var_0) << (((/* implicit */int) (_Bool)1)))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_14 [(signed char)9] [(signed char)9] [i_10])) ? (-3756562299110277837LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))))))))));
                        }
                    }
                    var_24 = ((/* implicit */long long int) var_0);
                    var_25 ^= ((/* implicit */short) (+((+(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) & (((((((/* implicit */_Bool) 3756562299110277841LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))) / (((/* implicit */int) ((short) (unsigned char)84)))))));
}
