/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31321
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
    var_16 = min((((/* implicit */short) ((((var_15) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))), (var_9));
    var_17 = ((/* implicit */short) var_4);
    var_18 = ((_Bool) (+((-(((/* implicit */int) var_10))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (short i_3 = 4; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_19 *= ((/* implicit */short) max((((/* implicit */int) arr_8 [(unsigned char)10] [i_1])), (((((/* implicit */int) min((var_10), (var_10)))) ^ (((/* implicit */int) (_Bool)1))))));
                        var_20 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_5)) ? (max((var_2), (((/* implicit */int) arr_5 [i_1])))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (int i_4 = 3; i_4 < 13; i_4 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_5 = 2; i_5 < 11; i_5 += 3) 
            {
                arr_16 [i_4] [i_4] [i_4] = ((/* implicit */signed char) arr_9 [i_0 - 1] [i_4] [i_5 + 3] [i_5 - 1]);
                arr_17 [i_4] [i_4 - 2] [i_4] = arr_12 [i_4] [i_4] [i_4];
                /* LoopNest 2 */
                for (unsigned int i_6 = 2; i_6 < 12; i_6 += 4) 
                {
                    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        {
                            arr_23 [i_4] [i_4 + 1] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
                            var_21 = ((/* implicit */_Bool) (unsigned char)255);
                            var_22 ^= ((/* implicit */_Bool) arr_2 [i_0 - 1] [i_7]);
                            arr_24 [9ULL] [i_4] [i_5 + 2] [i_4] [i_0 - 1] = ((/* implicit */unsigned char) (+(var_13)));
                        }
                    } 
                } 
            }
            for (short i_8 = 0; i_8 < 14; i_8 += 3) 
            {
                var_23 = ((/* implicit */_Bool) max((((/* implicit */short) ((_Bool) max((arr_11 [i_8] [i_4] [i_0]), (((/* implicit */short) (_Bool)1)))))), (arr_8 [i_4] [i_4])));
                var_24 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_14)), (min((var_5), (((/* implicit */int) arr_12 [i_0] [i_4] [(short)10]))))))) ? ((+(((unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                arr_27 [i_0] [i_0] [i_4] = ((/* implicit */short) max((max((((_Bool) 1740250629U)), (arr_14 [i_8] [i_0] [i_0]))), (arr_5 [i_4])));
                var_25 -= (unsigned char)0;
                var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4] [i_0 - 1] [i_4])) || (((/* implicit */_Bool) arr_8 [i_4] [i_4 - 2])))))));
            }
            var_27 = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) ((unsigned char) max((((/* implicit */int) (_Bool)1)), (730723506)))))));
            var_28 = ((/* implicit */_Bool) var_1);
            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) max((var_7), (((_Bool) ((((/* implicit */int) (signed char)13)) >> (((((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [(unsigned char)2])) - (65)))))))))));
            arr_28 [i_0] [i_4] [i_0 - 1] = ((/* implicit */unsigned char) max((((var_13) ^ (var_15))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_4]))))))))));
        }
        for (short i_9 = 1; i_9 < 10; i_9 += 3) 
        {
            arr_32 [i_0] = ((/* implicit */unsigned int) (+(max((((/* implicit */unsigned long long int) arr_10 [(signed char)0] [i_0] [i_9] [i_9])), (((((/* implicit */_Bool) arr_22 [(short)0] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (18446744073709551596ULL)))))));
            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (+(var_15))))));
        }
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_35 [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_34 [i_10] [i_10]), (var_11)))) & (((/* implicit */int) ((_Bool) ((short) var_11))))));
        var_31 = (+((+((+(((/* implicit */int) arr_34 [i_10] [i_10])))))));
        var_32 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)-5130))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) != (((((/* implicit */_Bool) arr_33 [8])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_33 [6ULL]))))));
    }
    var_33 -= ((/* implicit */unsigned char) var_10);
}
